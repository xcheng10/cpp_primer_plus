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

    A a;
    cout << a.val << endl; // output 0
    // a = 5;
    a.getObj() = 5;
    cout << a.val << endl; // output 5

    return 0;
}