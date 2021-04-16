#ifndef CHAPTER_11_H_
#define CHAPTER_11_H_


#include <iostream>
#include <ostream>
#include <string>

// using namespace std; // 因为Time类只使用了iostream的cout且只用了一次，因此后文使用std::cout更经济

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

    friend void operator<<(std::ostream& os, const Time& t){
        os << t.hours << " hours, " << t.minutes << " minutes" << std::endl;
    }

    void show() const{
        std::cout << hours << " hours, " << minutes << " minutes" << std::endl;
    };
};

#endif
