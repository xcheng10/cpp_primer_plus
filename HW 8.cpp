// https://github.com/AdamYuWen/CPP_Primer_Plus

#include <iostream>
#include <cstring>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
    /* data */
};

struct stringy {
    char* str;
    int ct;
};

void display(const box& b);
box& volume(box& b);


void show(const stringy& _str, int n = 1);
void show(const char* _str, int n = 1);
void set(stringy& _stry, char _char[]);


int main(){
    // box one = {"gucci", 9.0, 2.1, 8.8};
    // display(one);
    // volume(one);
    // display(one);
    // cout << "Homework 8" << endl;

    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
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

void set(stringy& _stry, char _char[]){
    _stry.ct = strlen(_char);
    _stry.str = new char[_stry.ct + 1];
    strcpy(_stry.str, _char);
}


void show(const stringy& _str, int n){
    for (int i = 0; i < n; ++i){
        cout << _str.str << endl;
        cout << _str.ct << endl;        
    }

}

void show(const char* _str, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; _str[j] != '\0'; j++){
            cout << _str[j];
        }
        cout << endl;
    }
}


