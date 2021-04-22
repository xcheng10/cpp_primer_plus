#include <iostream>

using namespace std;

// class A{
//     int i;
//     public:
//         void Hello(){
//             cout << "hello" << endl;
//             // same as: void Hello(A * this) {...}
//             // cout << i << "hello" << endl; // not work
//             // same as: void Hello(A * this) {cout << this->i << "hello" << endl;} // not work
//             // this指针不能指向静态成员函数，因为静态成员函数不作用于某个对象
//         }
// };

class A{
    public:
        int val;
        A(){
            val = 0;
        };

        A(int n){
            val = n;
        };

        ~A(){
        };

        A& getObj(){
            return * this;
        }
};

class Sample{
public:
    int v;
    
    Sample(int n): v(n){
    };

    // 复制构造函数
    Sample(Sample & s){
        v = 2 * s.v;
    };

    ~Sample(){

    };
};

class Base{
public:
    int k;
    Base(){
        k = 0;
    };
    ~Base(){};
    Base(int n):k(n){
    };
};

class Big{
public:
    int v;
    Base b;
    Big(){
        v = 0;
    };
    Big(int n):v(n),b(n){};
    ~Big(){};
    Big(Big &t){
        v = t.v;
        b.k = t.b.k;
    }
};




int main(){
    //     A * p = NULL;
    //     p->Hello();
    //     // same as Hello(p)

    // class A {int v;}; 
    // A a; a.v = 3; // c++ class default variable is private
    // A a; a.p = &a;
    // A * p = new A;
    // p -> v = 4;
    // delete p;

    // HW Q1
    // A a;
    // cout << a.val << endl; // output 0
    // // a = 5;
    // a.getObj() = 5;
    // cout << a.val << endl; // output 5

    // HW Q2
    // Sample a(5);
    // Sample b = a;
    // cout << b.v << endl;

    // HW Q3
    Big a1(5);
    Big a2 = a1;
    cout << a1.v << ", " << a1.b.k << endl;
    cout << a2.v << ", " << a2.b.k << endl;
    

    return 0;
}