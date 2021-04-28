#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// 当数据成员中有指针时，必须要用深拷贝

class String{
    private:
        char *str;
    public:
        String():str(NULL){};

        // 复制构造函数
        String(String &s){
            if (s.str) {
                str = new char[strlen(s.str) + 1];
                strcpy(str, s.str);
            } else {
                str = NULL;
            };
        };

        const char *c_str(){
            return str;
        }; 
        // char *p = s.c_str(); 编译报错

        // char *operator = (const char *s);
        // string obj;
        // obj = "hello" 实现重载

        // update version 浅拷贝:
        char *operator = (const char *s){
            // 判断str的指针是否为空
            if(str) {
                delete [] str;
            };
            // s不是NULL才会拷贝
            if(s) {
                str = new char[strlen(s) + 1];
                strcpy(str, s);
            } else {
                str = NULL;
            };
            return str;
        };

        // 深拷贝
        String &operator = (const String &s){
            if(str == s.str){
                return *this;
            }
            if(str) {
                delete [] str;
            };
            // s不是NULL才会拷贝
            if(s.str) {
                str = new char[strlen(s.str) + 1];
                strcpy(str, s.str);
            } else {
                str = NULL;
            };
            return *this;
        };

        ~String(){
            if (str){
                delete [] str;
            };
        }; 
};


class CArray{
    int size;
    int *ptr;
    public:
    CArray(int s = 0):size(s){
        if (not s) {
            ptr = NULL;
        } else {
            ptr = new int[s];
        };
    };

    CArray(CArray &a){
        if (a.ptr) {
            ptr = new int[a.size];
            memcpy(ptr, a.ptr, sizeof(int) * a.size);
            size = a.size;
        } else {
            ptr = NULL;
            size = 0;
            return;
        };
    };

    ~CArray(){
        if (ptr) {
            delete [] ptr;
        }
    };

    void push_back(int v){
        if(!ptr){
            ptr = new int[1];
        }else{
            int *tmpptr = new int[size + 1];
            memcpy(tmpptr, ptr, sizeof(int) * size);
            delete [] ptr;
            ptr = tmpptr;
        };
        ptr[size++] = v;
    };

    int length(){
        return size;
    };

    CArray& operator = (const CArray &a){
        if(ptr == a.ptr){
            return *this;
        };
        if(ptr){
            delete [] ptr;
        };       
        if(a.ptr){
            if (a.size > size) {
            ptr = new int[a.size];
            };
            memcpy(ptr, a.ptr, sizeof(int) * a.size);
        }else{
            ptr = NULL;
            size = 0;
        };
        return *this;
    };

    int& operator[](int i){
        return ptr[i];
    };

};

class Complex{
    double r, i;
    public:

    Complex(double real = 0, double imag = 0): r(real), i(imag){
    };

    Complex& operator=(const char *pt){
        char *tempptr = new char[strlen(pt)];
        strcpy(tempptr, pt);
        for (int index = 0; index < strlen(pt); ++index){
            if (pt[index] == '+'){
                char *tempr = new char[index];
                memcpy(tempr, &tempptr[0], index);
                r = atof(tempr);
                char *tempi = new char[sizeof(pt) - index + 1];
                memcpy(tempi, &tempptr[index], sizeof(pt) - 1);
                i = atof(tempi);
                delete [] tempr;
                delete [] tempi;
                break;
            };
            if (index != 0 && pt[index] == '-'){
                char *tempr = new char[index];
                memcpy(tempr, &tempptr[0], index);
                r = atof(tempr);
                char *tempi = new char[sizeof(pt) - index + 1];
                memcpy(tempi, &tempptr[index + 1], sizeof(pt) - 1);
                i = atof(tempi);
                delete [] tempr;
                delete [] tempi;
                break;
            };
            // if (pt[index] == '-' and index != 0){
            //     char *tempr = strtok(tempptr, "-");
            //     r = atof(tempr);
            //     char *tempi = strtok(tempr, "i");
            //     i = atof(tempi) * -1;
            //     break;              
            // };
        };
        delete [] tempptr; 
        return *this;
    };
    
    ~Complex(){
        // cout << "destructor called" << endl;
    };

    void Print(){
        if (r > 0){
        cout << r << "+" << i << "i" << endl;
        } else {
        cout << r << "-" << i << "i" << endl;
        };
    }
};





int main(){
// Week 1
    // String s;
    // // String s2 = "hello" // 报错因为这是一个初始化语句，而且不会去调用operator =函数，而是会调用构造函数，so far没有相关构造函数
    // s = "Good luck"; // same as s.operator=("Good luck")
    // cout << s.c_str() << endl;
    // s = "Good Morning";
    // cout << s.c_str() << endl;

    // String s1, s2;
    // s1 = "Hello";
    // s2 = "World";
    // cout << s1.c_str() << " " << s2.c_str() << endl;
    // s1 = s2;
    // s2 = "New";
    // cout << s1.c_str() << " " << s2.c_str() << endl;


// Week 2
    // CArray a;
    // for (int i = 0; i < 5; i++){
    //     a.push_back(i);
    // }

    // CArray a2, a3;
    // a2 = a;
    // for (int i = 0; i < a.length(); i++){
    //     cout << a2[i] << endl;
    // };

// HW
    Complex a, b;
    a = "3+4i";
    a.Print();
    b = "-8-6i";
    b.Print();

    return 0;
}