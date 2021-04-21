#include <iostream>
#include "HW 11.h"

using namespace std;
using namespace complex;

int bitcal(int& a, int& n);

int Complex::total = 0;

int main(){
    // short a = -15;
    // a >>= 3;
    // cout << a << endl;
    // unsigned short b = 0xffe0;
    // b >>= 4;
    // cout << b << endl;
    // int c = -3;
    // c >>= 3;
    // cout << c << endl;
    // int a = 10;
    // int n = 1;
    // int res;
    // res = bitcal(a, n);
    // cout << bitset<8>(a) << endl;
    // cout << bitset<8>(res) << endl;

    Complex a(3.4, 8.9);
    Complex b(-1.2, 0.0);

    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << ~a << "\n";
    a.getCount();

    return 0;
}

int bitcal(int& a, int& n){
    int temp = a >> n;
    temp &= 1;
    return temp;
};
