#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;
double calculate(double, double, double (*)(double, double));
double add(double, double);
double subtract(double, double);

int main() {
    cout << "Chapter 7 Homework" << endl;
    double (*pf[2])(double, double) = {add, subtract};
    double input1;
    cin >> input1;
    double input2;
    cin >> input2;
    for (int i = 0; i < 2; i++){
        cout << calculate(input1, input2, pf[i]) << endl;
    };
    return 0;
}

double calculate(double x, double y, double (*pf1)(double, double)){
    double q = pf1(x, y);
    // cout << q << endl;
    return q;
}

double add(double x, double y){
    return x + y;
}

double subtract(double x, double y){
    return x - y;
}