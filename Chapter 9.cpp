#include <iostream>
#include <cstring>

using namespace std;

double warming = 0.3;

extern void update(double dt);
extern void local();


int main(){
    cout << "Global warming is " << warming << endl;
    update(0.1);
    cout << "Global warming is " << warming << endl;
    local();
    cout << "Global warming is " << warming << endl;
    return 0;
}