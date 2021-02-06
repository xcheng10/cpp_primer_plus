#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
int simon(int);
int chapter2();
int hwchapter2();
void chapter4();

int main()
{
    cout << "Current Running" << endl;
    // hwchapter2();
    chapter4();
    return 0;
}


int chapter2()
{
    int carrots;
    int newC = simon(10);
    cin >> carrots;
    cout << "I have " << carrots << " carrots." << endl;
    double newCarrots = sqrt(newC - 1);
    cout << "Now I have " << newCarrots << " carrots" << endl;
    return 0;
}

int simon(int n)
{
    return n * 20;
}

int hwchapter2() //homework chapter 2
{
    int inputTemp;
    const float fraction = 1.8;
    cout << "Please enter a Celsius Value: " << endl;
    cin >> inputTemp;
    float outputTemp = inputTemp * fraction + 32.0;
    cout << inputTemp << " degrees Celsius is " << outputTemp << " degrees Fahrenheit." << endl;
    return 0;
}

struct inflatable{
    char name[20];
    float volume;
    double price;
};


void chapter4(){
    // int arrayInput[10];
    // arrayInput[0] = 0;
    // int newArray[10] = {2,3,4,5};
    // char fish[40] = "Bu bbl es";
    // cout << arrayInput[2] << endl;
    // cout << fish << endl;
    // cout << strlen(fish) << endl;
    // cout << sizeof(fish) << endl;
    // const int ArSize = 20;
    // char name[ArSize];
    // char nameNew[ArSize];
    // cout << "Input" << endl;
    // cin.getline(name, ArSize);
    // cout << "The input is: " << name << endl;
    // string third_date = "Super Bowl";
    // string first_date;
    // first_date += third_date;
    // cout << first_date << endl;
    inflatable guest = {"Nice Nice", 1.88, 20.888888};
    inflatable gift[100];
    cout << guest.name << endl;
    cout << gift[0].name << endl;
    cout << gift[99].price << endl;
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