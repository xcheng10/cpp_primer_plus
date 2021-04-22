#include <iostream>

using namespace std;

int support();
void update(double dt);
void local();

extern double warming; //使用外部定义变量warming

static int errors = 30; // known to this file only

int support(){
    cout << errors << endl;
    return 0;
}


void update(double dt){
    // extern double warming;
    ::warming += dt; // 和上面一行意义一样，表示是外部链接
    cout << "Updating warming to " << warming << endl;
}

void local(){
    double warming = 0.8;
    cout << "Local warming = " << warming << endl;
    cout << "But global warming = " << ::warming << endl;
}
