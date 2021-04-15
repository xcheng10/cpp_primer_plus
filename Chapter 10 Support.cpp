#include <iostream>
#include "Chapter 10.h"

using namespace std;

// constructor definition
Stock::Stock(const string& co, long n, double pr){
    company = co;
    if (n < 0){
        cerr << "Val Error!\n";
        shares = 0;
    }else{
        shares = n;
        share_val = pr;
        set_tot();
    };
}

// destructor
Stock::~Stock(){
    cout << "Bye Bye " << company << "!\n";
}


// void Stock::acquire(const string& co, long n, double pr){
//     company = co;
//     if (n < 0){
//         cout << "Val Error!\n";
//         shares = 0;
//     }else{
//         shares = n;
//         share_val = pr;
//         set_tot();
//     };
// }

void Stock::buy(long num, double price){
    if (num < 0){
        cout << "Val Error!\n";
    }else{
        shares += num;
        share_val = price;
        set_tot();
    };
}

void Stock::sell(long num, double price){
    if (num < 0){
        cout << "Val Error!\n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    };
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show(){
    std::ios_base::fmtflags orig =cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
        << " Shares: " << shares << '\n'
        << "Share Price : $" << share_val
        << " Total Worth: $ " << total_val << '\n'; 

    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
    
}

const Stock& Stock::topval(const Stock& s) const{
    if (s.total_val > total_val){
        cout << "Second" << endl;
        return s;
    } else {
        cout << "First" << endl;
        return *this;
    }
}

