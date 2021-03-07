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
double refcube(double &ra);





int main(){

    // // 内联函数
    // double a = square(5.0);
    // double b = square(4.8 + 3.4);
    // cout << a << " & " << b << endl;

    // // 创建引用变量
    // int rats;
    // int & rodents = rats;
    // // which is same as 
    // // int *const pr = &rats;

    // // 将引用用作函数参数
    // int wallet1 = 400;
    // int wallet2 = 800;

    // cout << "wallet 1: $" << wallet1;
    // cout << "wallet 2: $ " << wallet2 << endl;

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

    double x = 3.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = refcube of " << x << endl;
    
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

double refcube(double &ra){
    ra *= ra * ra;
    return ra;
}