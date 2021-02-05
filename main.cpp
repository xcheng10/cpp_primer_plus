#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
<<<<<<< HEAD
void simon(int);
=======
int simon(int);
>>>>>>> fa78dc2... first commit

int main()
{
    int carrots;
<<<<<<< HEAD
    simon(10);
    cin >> carrots;
    cout << "I have " << carrots << " carrots." << endl;
    double newCarrots = sqrt(carrots - 1);
=======
    int newC = simon(10);
    cin >> carrots;
    cout << "I have " << carrots << " carrots." << endl;
    double newCarrots = sqrt(newC - 1);
>>>>>>> fa78dc2... first commit
    cout << "Now I have " << newCarrots << " carrots" << endl;
    return 0;
}

<<<<<<< HEAD
void simon(int n)
{
    cout << "A la la " << n << " times";
=======
int simon(int n)
{
    return n * 12;
>>>>>>> fa78dc2... first commit
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