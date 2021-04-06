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
    // return 0;
    double val = 3.0;
    double* pd = &val;
    double& pr = val;
    long edge = 5L;
    double length[4] = {1, 2, 3, 4};
    double c1 = newrefcube(val);
    double c2 = newrefcube(length[2]);
    double c3 = newrefcube(pr);
    double c4 = newrefcube(*pd);
    double c5 = newrefcube(edge);
    double c6 = newrefcube(7.0);
    double c7 = newrefcube(val + 4.0);
    cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << endl; 


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