#include <iostream>
#include "Chapter 11.h"

using namespace std;
using namespace VECTOR;

int main(){
    // Time planning;
    // Time coding(2, 40);
    // Time fixing(5, 40);

    // fixing.show();
    // Time total = coding + fixing;
    // total.show();
    // cout << fixing; // 重载 << 运算符

    // Vector vec(21.8, 19.6);
    // vec.polar_mode();
    // cout << vec << endl;
    // cout << vec.angval() << endl;
    // vec.reset(0.0, 0.0);
    // cout << vec * 4.9 << endl;

    Stonewt cat;
    // cat = 19.6; // no explicit keyword & 隐式转换 & use Stonewt(double) to convert 19.6 to Stonewt
    cat = Stonewt(19.6); // with explicit typecast 显式强制类型转换

    Stonewt dog(40, 0); // int to stonewt conversion, must have the second param
    





    return 0;
}
