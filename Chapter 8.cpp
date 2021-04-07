#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

//an inline function definition
inline double square(double x) {return x * x;};
void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);
double cube(double a);
double refcube(double * ra);
double newrefcube(const double& nra);
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);
template <typename T>
void swaptemplate(T& a, T& b);


struct free_throws{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);


int main(){

    // // 内联函数
    // double a = square(5.0);
    // double b = square(4.8 + 3.4);
    // cout << a << " & " << b << endl;

    // // 创建引用变量
    // int rats;
    // int & rodents = rats; // 必须在声明引用变量时初始化
    // // 引用更接近于const指针，一旦初始化必须一直效忠于该变量
    // // int *const pr = &rats;

    // 将引用用作函数参数
    // int wallet1 = 400;
    // int wallet2 = 800;

    // cout << "wallet 1: $" << wallet1;
    // cout << " wallet 2: $ " << wallet2 << endl;

    // cout << "using reference to swap contents:\n";
    // swapr(wallet1, wallet2);
    // cout << "wallet 1: $" << wallet1;
    // cout << " wallet 2: $" << wallet2 << endl;

    // cout << "using pointer to swap contents:\n";
    // swapp(&wallet1, &wallet2);
    // cout << "wallet 1: $" << wallet1;
    // cout << " wallet 2: $" << wallet2 << endl;

    // cout << "using value to swap contents:\n";
    // swapv(wallet1, wallet2);
    // cout << "wallet 1: $" << wallet1;
    // cout << " wallet 2: $" << wallet2 << endl;

    // int atest = 1;
    // double btest = 1.0;
    // bool result = (atest == btest);
    // cout << result << endl;

    // double x = 3.0;
    // double y = 3.0;
    // double * yp = &y;
    // cout << cube(x);
    // cout << " = cube of " << x << endl;
    // cout << refcube(yp);
    // cout << " = refcube of " << x << endl;

    // //Extra Notes: iterator
    // vector<int> v;  //v是存放int类型变量的可变长数组，开始时没有元素
    // for (int n = 0; n<5; ++n)
    //     v.push_back(n);  //push_back成员函数在vector容器尾部添加一个元素
    // vector<int>::iterator i;  //定义正向迭代器
    // for (i = v.begin(); i != v.end(); ++i) {  //用迭代器遍历容器
    //     cout << *i << " ";  //*i 就是迭代器i指向的元素
    //     *i *= 2;  //每个元素变为原来的2倍
    // }
    // cout << endl;
    // //用反向迭代器遍历容器
    // for (vector<int>::reverse_iterator j = v.rbegin(); j != v.rend(); ++j)
    //     cout << *j << " " << endl;
    
    // double val = 3.0;
    // double* pd = &val;
    // double& pr = val;
    // long edge = 5L;
    // double length[4] = {1, 2, 3, 4};
    // double c1 = newrefcube(val);
    // double c2 = newrefcube(length[2]);
    // double c3 = newrefcube(pr);
    // double c4 = newrefcube(*pd);
    // double c5 = newrefcube(edge);
    // double c6 = newrefcube(7.0);
    // double c7 = newrefcube(val + 4.0);
    // cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << endl; 

    // free_throws one = {"MJ", 97, 100};
    // free_throws team = {"DR", 27, 100};
    // free_throws dup;

    // set_pc(one); // 不能按值传递因为会导致设置的只是临时拷贝的成员percent，或者可以用指针实现
    // display(one); // 只显示内容而不修改，使用的是const引用参数，比传值更节省时间和内存
    // accumulate(team, one);
    // display(team);

    // display(accumulate(team, one));
    // accumulate(accumulate(team, one), one);
    // display(team);

    // dup = accumulate(team, one);
    // cout << "Display dup:\n" << endl;
    // display(team);
    // display(dup);


    // char* trip = "Hawaiiiiiiii";
    // unsigned long n = 12345678;
    // char* temp;
    // int i;


    // for (i = 1; i < 10; i++){
    //     cout << left(n, i) << endl;
    //     temp = left(trip, i);
    //     cout << temp << endl;
    //     delete [] temp; //释放内存
    // }

    int i = 10;
    int j = 20;

    cout << i << " & " << j << endl;
    swaptemplate(i, j);
    cout << "new " << i << " & " << j << endl;

    double a = 10.1;
    double b = 20.3;

    cout << a << " & " << b << endl;
    swaptemplate(a, b);
    cout << "new " << a << " & " << b << endl;

    return 0;

}

void swapr(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

double cube(double a){
    a *= a * a;
    return a;
}

double refcube(double * ra){
    *ra *= *ra * *ra;
    return *ra;
}

double newrefcube(const double& nra){
    return nra * nra * nra;
}

void display(const free_throws& ft){
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percents: " << ft.percent << '\n';
}

void set_pc(free_throws& ft){
    if (ft.attempts != 0){
        ft.percent = 100.0 * float((ft.made)) /float(ft.attempts);
    } else {
        ft.percent = 0;
    };
}

free_throws& accumulate(free_throws& target, const free_throws& source){
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}

unsigned long left(unsigned long num, unsigned ct){
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0){
        return 0;
    }

    while (n /= 10){
        digits++;
    }

    if (digits > ct){
        ct = digits - ct;
        while (ct--){
            num /= 10;
        }
    }
    return num;
}


char* left(const char* str, int n){
    if (n < 0){
        n = 0;
    }

    char* p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++){
        p[i] = str[i];
    }

    while (i < n){
        p[i++] = '\0';
    }

    return p;
}


template <typename T>
void swaptemplate(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
