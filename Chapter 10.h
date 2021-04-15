#ifndef CHAPTER_10_H_
#define CHAPTER_10_H_

#include <string>
#include <vector>

using namespace std;

class Stock{
    private:
        string company;
        long shares;
        double share_val;
        double total_val;
        // 内联函数set_tot
        void set_tot(){
            total_val = shares * share_val;
        };
    public:
        Stock(); // default constructor
        Stock(const string& co, long n = 0, double pr = 0.00);
        ~Stock(); //noisy constructor
        // void acquire(const string& co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
        const Stock& topval(const Stock& s) const;
};



class MyQueue {
    private:
        // store elements
        vector<int> data;
        // a pointer to indicate the start position
        int p_start;            
    public:
        MyQueue() {p_start = 0;}
        /** Insert an element into the queue. Return true if the operation is successful. */
        bool enQueue(int x) {
            data.push_back(x);
            return true;
        }
        /** Delete an element from the queue. Return true if the operation is successful. */
        bool deQueue() {
            if (isEmpty()) {
                return false;
            }
            p_start++;
            return true;
        };
        /** Get the front item from the queue. */
        int Front() {
            return data[p_start];
        };
        /** Checks whether the queue is empty or not. */
        bool isEmpty()  {
            return p_start >= data.size();
        }
};


#endif // DEBUG