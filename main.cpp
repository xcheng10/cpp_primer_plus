#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
// int simon(int);

// int main()
// {
//     int carrots;
//     int newC = simon(10);
//     cin >> carrots;
//     cout << "I have " << carrots << " carrots." << endl;
//     double newCarrots = sqrt(newC - 1);
//     cout << "Now I have " << newCarrots << " carrots" << endl;
//     return 0;
// }

// int simon(int n)
// {
//     return n * 20;
// }

int main() //homework chapter 2
{
    int inputTemp;
    cout << "Please enter a Celsius Value: " << endl;
    cin >> inputTemp;
    float outputTemp = inputTemp * 1.8 + 32.0;
    cout << inputTemp << " degrees Celsius is " << outputTemp << " degrees Fahrenheit." << endl;
    return 0;
}


class MyLinkedList {
    int val;
    int len;
    MyLinkedList* head;
    MyLinkedList* next;
    
    public:
    MyLinkedList() {
        next=nullptr;
        len=0;
        head=nullptr;
    }
    
    MyLinkedList(int val) {
        next=nullptr;
        this->val=val;
    }
    
    int get(int index) {
        int cur=0;
        MyLinkedList* curr=head;
        while(curr){
            if(cur==index) return curr->val;
            curr=curr->next;
            cur++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* tmp=new MyLinkedList(val);
        tmp->next=head;
        head=tmp;
        len++;
    }
  
    void addAtTail(int val) {
        MyLinkedList* curr=head;
        while(curr->next){
            curr=curr->next;
        }
        MyLinkedList* tmp=new MyLinkedList(val);
        curr->next=tmp;
        len++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>len or index<0) return;
        if(index==0) addAtHead(val);
        else if(index==len) addAtTail(val);
        else{
            MyLinkedList* tmp=new MyLinkedList(val);
            MyLinkedList* curr=head;
            int cnt=0;
            while(curr){
                if(cnt==index-1){
                    break;
                }
                cnt++,curr=curr->next;
            }
            tmp->next=curr->next;
            curr->next=tmp;
            len++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index>=len) return;
        if(index==0){
            head=head->next;
            return;
        }
        int cnt=0;
        MyLinkedList* curr=head;
        while(curr){
            if(cnt==index-1){
                break;
            }
            curr=curr->next;
            cnt++;
        }   
        curr->next=curr->next->next;
        len--;
    }

    void finalization() {
        cout << "Finished" << endl;
    }

};