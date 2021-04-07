#include <iostream>

using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
    /* data */
};

void display(const box& b);
box& volume(box& b);

int main(){
    box one = {"gucci", 9.0, 2.1, 8.8};
    display(one);
    volume(one);
    display(one);
    return 0;
}

void display(const box& b){
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

box& volume(box& b){
    b.volume = b.height * b.length * b.width;
    return b;
}