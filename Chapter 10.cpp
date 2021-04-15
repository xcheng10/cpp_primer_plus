#include <iostream>
#include <vector>


#include "Chapter 10.h"
#include "Chapter 10 Support.cpp"


using namespace std;


int main() {
    Stock Young = ::Stock("MSFT", 200, 200.89);
    Young.show();
    Stock Money("AMZN", 100, 3588.98);
    Money.show();
    Young.topval(Money);

    // //对象数组
    // Stock mywatchlist[4];

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

    return 0;
}