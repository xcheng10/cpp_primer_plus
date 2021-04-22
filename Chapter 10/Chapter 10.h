#ifndef CHAPTER_10_H_
#define CHAPTER_10_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef unsigned long Item;

class Stack{
    private:
        static const int max = 10;
        Item items[max];
        int top;
    public:
        Stack(){
            top = 0;
        };

        ~Stack(){
        };

        bool isempty() const {
            return top == 0;
        };

        bool isfull() const {
            return top == max;
        };

        bool push(const Item &item){
            if (top < max){
                items[top++] = item;
                return true;
            } else{
                return false;
            }
        }; // return false if full

        Item pop(Item &item){
            if (top > 0){
                item = items[--top];
                // cout << item << endl;
                return item;
            } else {
                return false;
            }
        }; // return false if null
};



class Stock{
    private:
        static const int Month = 12; //类中定义常量，而且不存储在对象中，所以可以被所有对象共享
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
        void show() const;
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