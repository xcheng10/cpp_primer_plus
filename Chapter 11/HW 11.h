#ifndef _11_HW_H_
#define _11_HW_H_


#include <iostream>
#include <ostream>
#include <string>
#include <cmath>


using namespace std;


namespace complex{
    class Complex{
        private:
            static int total;
            double real;
            double imaginary;
        public:
            // double real;
            // double imaginary;
            Complex(){
                real = imaginary = 0.0;
                total++;
            };

            Complex(const Complex &c){
                real = c.real;
                imaginary = c.imaginary;
                total++;
            };

            // 初始化列表而不是赋值
            Complex(double a, double b): real(a), imaginary(b){
                total++;
            };

            ~Complex(){
                total--;
            };

            static int getCount(){
                cout << total << endl;
                return total;
            };
        
            //运算符重载
            Complex operator + (const Complex& b) const{
                return Complex(real + b.real, imaginary + b.imaginary);
            };
            
            Complex operator - (const Complex& b) const{
                return Complex(real - b.real, imaginary - b.imaginary);
            };
            
            Complex operator * (const float x) const{
                return Complex(x * real, x * imaginary);
            };

            Complex operator * (const Complex& b) const{
                return Complex(real * b.real - (imaginary * b.imaginary), real * b.imaginary + imaginary * b.real);
            };

            friend Complex operator ~ (const Complex& c) {
                return Complex(c.real, -1 * c.imaginary);
            };

            friend ostream & operator << (ostream & os, const Complex& c){
                os << "(" << c.real << ", " << c.imaginary << "i)" << endl;
                return os;
            };
            // friend ostream & operator >> (ostream & os, const Complex& c){
            //     os << "(" << c.real << ", " << c.imaginary << "i)" << endl;
            //     return os;
            // };

    };
};





#endif