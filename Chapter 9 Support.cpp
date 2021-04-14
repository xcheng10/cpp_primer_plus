#include <iostream>

using namespace std;

extern double warming; //使用外部定义变量warming

void update(double dt);
void local();


void update(double dt){
    // extern double warming;
    ::warming += dt; // 和12行意义一样
    cout << "Updating warming to " << warming << endl;
}

void local(){
    double warming = 0.8;
    cout << "Local warming = " << warming << endl;
    cout << "But global warming = " << ::warming << endl;
}
