#include <iostream>
#include <cmath>


struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

using namespace std;
void show_polar(const polar *pda);
void rect_to_polar(const rect *pxy, polar *pda);


int main(){
    rect rplace;
    polar pplace;
    cout << "enter x & y values: ";
    while (cin >> rplace.x >> rplace.y){
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two values: ";
    };

    cout << "Bye\n";
    return 0;
}

void show_polar(const polar *pda){
    const double rtd = 57.295777951;
    cout << "d = " << pda -> distance;
    cout << ", angle = " << pda -> angle * rtd << "\n" << endl;
}

void rect_to_polar(const rect * pxy, polar * pda){
    pda -> distance = sqrt(pxy -> x * pxy -> x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}