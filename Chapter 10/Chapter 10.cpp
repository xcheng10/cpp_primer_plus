#include <iostream>
#include <vector>


#include "Chapter 10.h"
#include "Chapter 10 Support.cpp"


using namespace std;


int main() {
    Stack stack;
    unsigned long digit1 = 100;
    unsigned long digit2 = 200;
    unsigned long digit3 = 300;
    stack.push(digit1);
    stack.push(digit2);
    stack.push(digit3);
    stack.isempty();
    ::Item last = stack.pop(digit2);
    cout << last << endl;

    // Stock Young = ::Stock("MSFT", 200, 200.89);
    // Young.show();
    // Stock Money("AMZN", 100, 3588.98);
    // Money.show();
    // Young.topval(Money);

    // //对象数组
    // const int numbers = 10;
    // Stock mywatchlist[numbers] = {
    //     Stock("TSLA", 100, 798.9),
    //     Stock("AAPL", 11, 120.89),
    //     Stock("FB", 510, 200.12),
    //     Stock(),
    //     Stock("RLX", 80, 10)
    // };

    // for (int st = 0; st < numbers; ++st){
    //     mywatchlist[st].show();
    // };

    // const Stock *top = &mywatchlist[0];
    // for (int sp = 1; sp < numbers; sp++){
    //     top = &top -> topval(mywatchlist[sp]);
    // };

    // cout << "Most Valueable asset: \n";
    // top->show();

    // ::MyQueue q;
    // q.enQueue(5);
    // q.enQueue(3);
    // if (!q.isEmpty()) {
    //     cout << q.Front() << endl;
    // }
    // q.deQueue();
    // if (!q.isEmpty()) {
    //     cout << q.Front() << endl;
    // }
    // q.deQueue();
    // if (!q.isEmpty()) {
    //     cout << q.Front() << endl;
    // } else {
    //     cout << "Empty Queue" << endl;
    // }

    // random codes
    // string instructions = "GGGLLLLRRRRGGG";
    // for (char i: instructions){
    //     cout << i << endl;
    // }


    return 0;
}