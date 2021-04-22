#ifndef CHAPTER_11_H_
#define CHAPTER_11_H_


#include <iostream>
#include <ostream>
#include <string>
#include <cmath>


using namespace std; // 因为Time类只使用了iostream的cout且只用了一次，因此后文使用std::cout更经济


class Time{
    private:
    int hours;
    int minutes;

    public:
    Time(){
        hours = minutes = 0;
    };

    Time(int h, int m = 0){
        hours = h;
        minutes = m;
        if (h > 23 or m > 60){
            hours = minutes = 0;
            std::cout << "Value Error" << std::endl;
        }
    };

    void addMin(int m){
        minutes += m;
        hours += minutes / 60;
        minutes %= 60; 
    };

    void addHr(int h){
        hours += h;
    };

    void Reset(int h = 0, int m = 0){
        hours = h;
        minutes = h;
    };

    Time operator+(const Time &t) const{
        Time sum;
        sum.minutes = minutes + t.minutes;
        sum.hours = hours + t.hours + sum.minutes / 60;
        sum.minutes %= 60;
        // 返回值不能是引用。因为函数会创建一个新的Time对象sum，返回对象会创建一个对象的副本。
        // 因为sum对象是局部变量，函数结束时会被删除，若使用引用会指向一个不存在的对象。返回类型Times意味着程序将在删除前创造sum的拷贝
        // 不要返回局部变量或局部变量的引用！
        return sum; 
    };

    // 友元函数作为非成员函数可以直接访问类的似有成员
    // 不是成员函数，不能用成员函数运算符调用，但是与成员函数访问权限相同
    friend Time operator*(double m, const Time &t){
        Time pro;
        long total = t.hours * m * 60 + t.minutes * m;
        pro.hours = total / 60;
        pro.minutes = total % 60;
        return pro;
    }

    // //两种重载"<<"运算符的方法
    // friend void operator<<(std::ostream& os, const Time& t){
    //     os << t.hours << " hours, " << t.minutes << " minutes" << std::endl;
    // }

    friend std::ostream& operator<<(std::ostream& os, const Time& t){
        os << t.hours << " hours, " << t.minutes << " minutes" << std::endl;
        return os;
    }



    void show() const{
        std::cout << hours << " hours, " << minutes << " minutes" << std::endl;
    };
};

namespace VECTOR{

    const double Rad_to_deg = 45.0 / atan(1.0);

    class Vector{
        public:
            enum Mode {RECT, POL};
        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode;
            void set_mag(){
                mag = sqrt(x * x + y * y);
            };
            void set_ang(){
                if (x == 0.0 && y == 0.0){
                    ang = 0.0;
                } else {
                    ang = atan2(y, x);
                }
            };
            void set_x(){
                x = mag * cos(ang);
            };
            void set_y(){
                y = mag * sin(ang);
            };
        public:
            Vector(){
                x = y = ang = mag = 0.0;
                mode = RECT;
            };
            Vector(double n1, double n2, Mode form = RECT){
                mode = form;
                if (form == RECT){
                    x = n1;
                    y = n2;
                    set_mag();
                    set_ang();
                } else if (form == POL){
                    mag = n1;
                    ang = n2 / Rad_to_deg;
                    set_x();
                    set_y();
                } else {
                    cout << "Error Raised! " << endl;
                    x = y = mag = ang = 0.0;
                    mode = RECT;
                };
            };
            void reset(double n1, double n2, Mode form = RECT){
                mode = form;
                if (form == RECT){
                    x = n1;
                    y = n2;
                    set_mag();
                    set_ang();
                } else if (form == POL){
                    mag = n1;
                    ang = n2 / Rad_to_deg;
                    set_x();
                    set_y();
                } else {
                    cout << "Error Raised! " << endl;
                    x = y = mag = ang = 0.0;
                    mode = RECT;
                };
            };
            ~Vector(){
            };
            double xval() const {
                return x;
            };
            double yval() const {
                return y;
            };
            double magval() const {
                return mag;
            };
            double angval() const {
                return ang;
            };
            void polar_mode(){
                mode = POL;
            };
            void rect_mode(){
                mode = RECT;
            };

            // 运算符重载
            Vector operator + (const Vector& b) const{
                return Vector(x + b.x, y- b.y);
            };
            Vector operator - (const Vector& b) const{
                return Vector(x - b.x, y - b.y);
            };
            Vector operator * (double n) const{
                return Vector(n * x, n * y);
            };
            // reverse sign
            Vector operator - () const{
                return Vector(-x, -y);
            };

            // 友元
            friend Vector operator * (double n, const Vector& a){
                return Vector(n * a);
            };
            friend std::ostream& operator << (std::ostream& os, const Vector& v){
                if (v.mode == RECT){
                    os << "(x, y) = (" << v.x << ", " << v.y << ")" << endl;
                } else if (v.mode == POL){
                    os << "(m, a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")" << endl;
                } else {
                    os << "Error Raised" << endl;
                };
                return os;
            };
    };
};

class Stonewt{
    private:
        // enum {Lbs_per_stn = 14};
        static const int Lbs_per_stn = 14;
        int stone;
        double pds_left;
        double pounds;
    public:
        explicit Stonewt(double lbs){
            stone = int(lbs) / Lbs_per_stn;
            pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
            pounds = lbs;
        };
        Stonewt(int stn, double lbs){
            stone = stn;
            pds_left = lbs;
            pounds = stn * Lbs_per_stn + lbs;
        };
        Stonewt();
        ~Stonewt();
        void show_lbs() const{
            cout << pounds << " pounds\n";
        };
        void show_stn() const{
            cout << stone << " stones, " << pds_left << " pounds left\n";
        };
        
        operator int() const{
            return int(pounds + 0.5);
        };
        operator double() const{
            return pounds;
        };

};





#endif
