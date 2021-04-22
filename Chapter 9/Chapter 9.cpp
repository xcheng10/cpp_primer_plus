#include <iostream>
#include <cstring>

using namespace std;


extern void update(double dt);
extern void local();
void support();

double warming = 0.3;
int errors = 20; // external declaration

int main(){
    // cout << "Global warming is " << warming << endl;
    // update(0.1);
    // cout << "Global warming is " << warming << endl;
    // local();
    // cout << "Global warming is " << warming << endl;

    cout << errors << endl;
    support();
    return 0;
}