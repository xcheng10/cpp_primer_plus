#include <iostream>
#include "Chapter 11.h"

using namespace std;


int main(){
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 40);

    fixing.show();
    Time total = coding + fixing;
    total.show();
    cout << fixing; // 重载 << 运算符
    return 0;
}
