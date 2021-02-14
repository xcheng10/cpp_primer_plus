#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;
int simon(int);
void chapter2();
void hwchapter2();
void chapter4();
char * getname(void);
void hwchapter4();
void chapter5();
void hwchapter5();
void chapter6();
void chapter7();
long double probability(unsigned numbers, unsigned picks);
int sum_arr(int arr[], int n);
int fill_array(double *ar, int limit);
void show_array(const double *ar, int n);
void alter_array(double r, double *ar, int n);
int _sum_arr(const int *arr, const int *n);
int sum_2d_arr(int arr[][4], int size);
unsigned int c_in_str(const char *str, char ch);




int main()
{
    cout << "Current Running" << endl;
    chapter7();
    return 0;
}


void chapter2()
{
    // int carrots;
    // int newC = simon(10);
    // cin >> carrots;
    // cout << "I have " << carrots << " carrots." << endl;
    // double newCarrots = sqrt(newC - 1);
    // cout << "Now I have " << newCarrots << " carrots" << endl;
}

int simon(int n)
{
    // return n * 20;
}

void hwchapter2()
{
    // int inputTemp;
    // const float fraction = 1.8;
    // cout << "Please enter a Celsius Value: " << endl;
    // cin >> inputTemp;
    // float outputTemp = inputTemp * fraction + 32.0;
    // cout << inputTemp << " degrees Celsius is " << outputTemp << " degrees Fahrenheit." << endl;
}

void chapter4()
{
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
    // struct inflatable
    // {
    //     char name[20];
    //     float volume;
    //     double price;
    // };

    // union one4all
    // {
    //     int int_val;
    //     long long_val;
    //     double double_val;
    // };
    // inflatable guest = {"Nice Nice", 1.88, 20.888888};
    // inflatable gift[100];
    // cout << guest.name << endl;
    // cout << gift[0].name << endl;
    // cout << gift[99].price << endl;

    // union structure

    // one4all pail; 
    // pail.double_val = 1.38;
    // pail.int_val = 10;
    // cout << pail.int_val << endl;
    // cout << pail.double_val << endl;

    // enumurate structure

    // enum spectrum {red = 0, blue = 1, yellow = 2, green = 1, violet = 0}; //
    // spectrum band;
    // band = blue;
    // cout << band << endl;
    // band = spectrum(8888888);
    // spectrum band2 = spectrum(8888889);
    // cout << &band << endl;
    // cout << &band2 << endl;

    // 4.7 pointer
    // 信息储存在何处
    // int num1 = 8888888;
    // int num2 = 8888889;
    // cout << &num1 << endl;
    // cout << &num2 << endl;


    // 存储的值是多少
    // 存储的信息是什么类别
    // 指针是一个变量，存储的是值的地址
    // int变量updates表示值，用 & 来获得地址
    // p_updates表示地址，用 * 来获得值
    // p_updates指向updates，*p_updates和updates等价

    // char updates[20] = "super bowl";
    // char* p_updates = &updates[0];
    // p_updates = updates;

    // cout << "updates is " << updates << endl;
    // cout << "&updates is " << &updates << endl;
    // cout << "*p_updates is " << *p_updates << endl;
    // cout << "p_updates is " << p_updates << endl;

    // *p_updates += 10;
    // cout << endl;
    // cout << "updates is " << updates << endl;
    // cout << "&updates is " << &updates << endl;
    // cout << "*p_updates is " << *p_updates << endl;
    // cout << "p_updates is " << p_updates << endl;

    // double runoobAarray[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    // double *p;
 
    // p = &runoobAarray[0];
 
    // 输出数组中每个元素的值
    // cout << "使用指针的数组值 " << endl; 
    // for ( int i = 0; i < 5; i++ )
    // {
    //     cout << "*(p + " << i << ") : ";
    //     cout << *(p + i) << endl;
    // }
 
    // cout << "使用 runoobAarray 作为地址的数组值 " << endl;
    // for ( int i = 0; i < 5; i++ )
    // {
    //     cout << "*(runoobAarray + " << i << ") : ";
    //     cout << *(runoobAarray + i) << endl;
    // }
   
 
    // double dnumber = 8.9;
    // double* pdnumber;
    // cout << dnumber << endl;
    // cout << pdnumber << endl;

    // double dnumber = 8.9;
    // double * pdnumber = &dnumber;
    // cout << dnumber << endl;
    // cout << pdnumber << endl;
    // cout << * pdnumber << endl;

    // int nights = 10001;
    // cout << nights << endl;
    // cout << &nights << endl;

    // cout << "new int init" << endl;

    // //typeName * pointerName = new typeName
    // int * pt = new int; // allocate space for an int
    // *pt = 10001; // store a value there


    // cout << pt << endl;
    // cout << *pt << endl;
    // cout << sizeof(pt) << endl;
    // cout << sizeof(*pt) << endl;

    // cout << "new double init" << endl;

    // double * pd = new double;
    // * pd = 1000001.9999;

    // cout << nights << endl;
    // cout << &nights << endl;
    // cout << "pd = " << pd << endl;
    // cout << "*pd = " << *pd << endl;
    // cout << sizeof(pd) << endl;
    // cout << sizeof(*pd) << endl;

    //  delete pd; //释放指向的内存，但不会删除指针本身
    //  cout << "pd = " << pd << endl;


    // int * psome = new int [10]; // get a block of 10 ints
    // psome[0] = 1;
    // psome[1] = 2;
    // psome[2] = 3;
    // cout << psome[0] << psome[1] << psome[2] << endl;
    // psome += 1; //不能修改数组名的值，+1将指向下一个元素的地址
    // cout << psome[0] << psome[1] << psome[2] << endl;
    // // cout << "psome = " << psome << endl;
    // // cout << "*psome = " << *psome << endl;
    // psome -= 1;
    // delete [] psome;


    // // 指针算术
    // double wages[3] = {10000.0, 20000.0, 30000.0};
    // short stacks[3] = {3,2,1};

    // // two ways to get the address of an array

    // double * pw = wages; // name of array = address
    // short * ps = &stacks[0]; // or use address operator

    // cout << "pw = " << pw << ", *pw = " << *pw << endl;
    // pw += 1;
    // cout << "pw += 1 then pw = " << pw << ", *pw = " << *pw << "\n\n" << endl;

    // cout << "ps = " << ps << ", *ps = " << *ps << endl; 
    // ps += 1;
    // cout << "ps += 1 then ps = " << ps << ", *ps = " << *ps << "\n\n" << endl;

    // // arrayname[i] becomes *(arrayname + i)
    // // pointername[i] becomes *(pointername + i)

    // cout << stacks[0] << " | " << stacks[1] << endl; // access two elements with array notation
    // cout << *stacks << " | " << *(stacks + 1) << endl; // access two elements with pointer notation

    // cout << "size of wages array: " << sizeof(wages) << endl;
    // cout << "size of pw pointer: " << sizeof(pw) << endl;

    // short tell[20];
    // cout << tell << endl;
    // cout << &tell << endl;
    // short (*pas) [20] = &tell;
    // cout << (*pas) << endl;

    // 空指针
    // int a = 0;
    // int *p = &a;
    // int *q = NULL;


    // cout << p << endl;

    // if (NULL == 0)
    //     cout << "yes" << endl;

    // if (NULL == q)
    //     cout << "yes" << endl;
    // char animal[10] = "bear"; // animal holds bear
    // const char * bird = "wrennnnnnnnnnnnnnnnnnnnnnnnnn"; // bird holds address of string
    // // 实际表示的是字符串的地址，将“xxx”的地址赋给bird指针
    // // 可以像使用字符串“xxx”一样使用指针bird访问字符串，并且不能修改它
    // char * ps; // uninitialized

    // cout << animal << " and ";
    // cout << bird << "\n";
    // // cout << ps << "\n"; // not working cuz ps wasnt initilized

    // cout << "enter a name: ";
    // cin >> animal;
    // // cin >> ps; // segmentation fault: 11 (ps doesn't point to any allocated space)
    // ps = animal; // 不会复制字符串，只是复制地址，所以两个指针指向相同的内存单元和字符串
    // cout << ps << "!\n";
    // cout << "Before using strcpy(): \n";
    // cout << animal << " at " << (int *) animal << endl; // 若指针类型为char *，cout将显示指向的字符串；(int *)可以强行转换指针类型
    // cout << ps << " at " << (int *) ps << endl;

    // ps = new char[strlen(animal) + 1]; // get new storage 分配内存存储字符串
    // strcpy(ps, animal); // copy string to new storage 第一个是目标地址，第二个是要复制的字符串的地址
    // cout << "After using strcpy(): \n";
    // cout << animal << " at " << (int *) animal << endl;
    // cout << ps << " at " << (int *) ps << endl;
    // delete [] ps;

    // 创建动态结构
    // 如果结构标识符是结构名，则使用句点(.)运算符 (成员运算符)
    // 如果标识符指向结构的指针，使用箭头(->)运算符 (间接运算符)
    // struct things
    // {
    //     int good;
    //     int bad;
    // };

    // things grubnose = {3, 453}; // a new struct
    // things * ps = &grubnose; // pt points to the struct

    // cout << "method 1: " << grubnose.good << "\n";
    // cout << "method 2: " << ps -> good << endl;

    // things * pt = new things;
    // cout << "good: ";
    // pt -> good = cin.get(); // method 1
    // // cin >> pt -> good; // method 1
    // cout << "bad: ";
    // cin >> (* pt).bad; // method 2
    // cout << (* pt).good << endl; //method 2
    // cout << pt -> bad << endl; // method 1
    // delete pt;


    // // 内存地址会不一样
    // char * name;
    // name = getname();
    // cout << name << " at " << (int *) name << "\n";
    // delete [] name;

    // name = getname();
    // cout << name << " at " << (int *) name << "\n";
    // delete [] name;

    // 类型组合
    // struct testyear
    // {
    //     int year;
    // };

    // testyear y1, y2, y3; // new struct
    // y1.year = 2000;
    // testyear * pa = &y2; // address to pointer
    // pa -> year = 2001; // assign a new value to the pointer
    // testyear trio[3]; // array of 3 structures
    // // trio[1].year = 2003; // would display an empty value in the cout sentence
    // trio[0].year = 2003;
    // cout << trio -> year << endl;

    // const testyear * arp[3] = {&y1, &y2, &y3};
    // cout << arp[1] -> year << endl;
    // const testyear ** ppa = arp;
    // auto ppb = arp;
    // cout << (* ppa) -> year << endl;
    // cout << (* (ppb + 1)) -> year << endl;
    // cout << (* ppb + 1) -> year << endl; // What is the difference here

    // 数组的替代品
    // vector<int> vi; // zero-size array of int
    // vector<double> vd(10); // an array of 10 doubles

    // array<int, 5> ai;
    // array<double, 4> ab = {1.2,4.5,3.4};
    // array<double, 4> abb = ab; // array对象可以直接赋值，数组则需要逐个赋值, but with fixed length

    // cout << ab[2] << " at " << &ab[2] << endl;
    // cout << abb[2] << " at " << &abb[2] << endl;

}

char * getname()
{
    char temp[100];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1]; //copy string into smaller space
    strcpy(pn, temp);
    return pn;
}


void hwchapter4()
{
    // array<int, 5> oddNums = {1,3,5,7,9};
    // int * pt = &oddNums[0];
    // cout << * (pt + 1) << endl;

    // struct CandyBar
    // {
    //     string name;
    //     double weight;
    //     int calories;
    // };

    // CandyBar snack;
    // CandyBar * pt = &snack;
    // pt -> name = "Mocha Munch";
    // snack.weight = 2.3;
    // pt -> calories = 350;

    // cout << pt -> name << "\n" << pt -> weight << "\n" << snack.calories << endl;

    // CandyBar * pt = new CandyBar;
    // pt -> name = "Mocha Munch";
    // pt -> weight = 2.3;
    // pt -> calories = 350;

    // cout << pt -> name << "\n" << pt -> weight << "\n" << pt -> calories << endl;
    // delete pt;

}

void chapter5()
{
    // cout << "Chapter 5.1" << endl;
    // int ArSize = 16;
    // long long fac[ArSize];
    // fac[1] = fac[0] = 1LL;
    // for (int i = 2; i < ArSize; i++){
    //     fac[i] = i * fac[i - 1];
    //     std::cout << i << "!= " << fac[i] << std::endl;
    // }


    // // 数组名是数组的地址，用括号括起的字符串常量也是地址
    // // word == "mate" 只是比较地址是否相等，需要使用strcmp(char1, char2)
    // // 关系运算符可以用来比较字符，不能用来比较字符串
    // // 关系运算符可以用来比较string对象

    // char word[5] = "?ate";
    // for (char ch = 'a'; strcmp(word, "mate"); ch++) //字符串不相等，strcmp(word, "mate")为false
    // {
    //     cout << word << endl;
    //     word[0] = ch;
    // }
    // cout << "After loop, word is " << word << endl;

    // // 类型别名
    // // typedef typeName aliasName
    // // typeof不会创建新类型，而只是为已有的类型建立一个新名称

    // typedef char * byte_pointer; //pointer to char type

    // // 基于范围的for循环
    // double prices[5] = {4.09, 4.33, 2.33, 4.12};
    
    // for (double x: prices){
    //     cout << x << endl;
    // }

    // for (double &x: prices){ // &表示x是一个引用变量
    //     x = x * 0.8;
    // }

    // int maxtemps[4][5] = {
    //     {1,1,1,1,1},
    //     {2,3,2,2,3},
    //     {4,3,1,3,4},
    //     {5,6,7,1}
    // }

    // for (int row = 0; row < 4; row++){
    //     for (int col = 0; col < 5; ++col){
    //         cout << maxtemps[row][col] << "\t" << endl;
    //     }
    // }
}


void hwchapter5()
{
    // cout << "Chapter 5 Homework" << endl;
    // // int j = 5;
    // // int ct = 1;
    // // while (++j < 9){
    // //     cout << ct << endl;
    // //     ct += 1;
    // //     cout << j++ << endl;
    // // }

    // struct car{
    //     string mnc;
    //     int year;
    // };

    // car * pt = new car;
    // pt -> mnc = "kaiser";
    // pt -> year = 2020;
    // cout << pt -> mnc << endl;
    // cout << pt -> year << endl;
    // delete pt;

}

//b可以是静态数组的数组名，也可以是动态数组的首地址
int *test(int *b) 
{
    // //输出传入的数组各元素
    // for(int i = 0; i < 5; ++i) {
    //     cout << *(b+i)<<" ";
    // }
    // cout << endl;
    // //动态创建一个数组
    // int *c = new int[5]; 
    // //如果将绿色部分换为int c[5];则主函数中调用test无法得到c数组
    // //新数组的各项值等于传入的数组各项值加5
    // for(int i = 0; i < 5; ++i) { 
    //     *(c+i) = *(b+i) + 5;
    // }
    // //返回新创建的动态数组的首地址
    // return c;     
}

int _main()
{   
    // //创建动态数组b
    // int *b = new int[5];
    // //赋值
    // for(int i = 0; i < 5; ++i) {
    //     *(b+i) = i; 
    // }
    // //绿色部分也可以换为int b[5]={0,1,2,3,4};即也可以是静态数组

    // //将b作为参数，调用test函数，返回值赋给c
    // int *c = test(b);   
    // //输出test返回的数组的各项
    // for(int i = 0; i < 5; ++i) {
    //     cout << *(c+i) << " ";
    // }
    // cout<<endl;
    // return 0;
}

void chapter6(){
    // char ch;
    // std::cout << "Type, and I shall repeat. \n";
    // std::cin.get(ch);

    // while (ch != '.')
    // {
    //     if (ch == '\n'){
    //         std::cout << ch;
    //     }else{
    //         // std::cout << ++ch;
    //         std::cout << ch + 1; // why there is such difference?
    //     }
    //     std::cin.get(ch);
    // }

    // int a, b;
    // cout << "Enter two integers: ";
    // cin >> a >> b;

    // expression1 ? expression2(if expression1 is true) : expression3(if expression1 is false)
    // int c = a > b ? a : b;
    // cout << c << endl;

    // const char x[2][20] = {"Jason ", " at your service\n"};
    // const char *y = "Quillstone";

    // for (int i = 0; i < 3; i++){
    //     cout << ((i < 2) ? !i ? x[i]:y:x[1]);
    // };


    // enum {red, orange, yellow, green, blue, violet, indigo};

    // cout << "Enter color code: ";
    // int code;
    // cin >> code;

    // while (code >= red && code <= blue){
    //     switch (code) {
    //         case red : cout << "red\n"; break;
    //         case orange : cout << "orange\n"; break;
    //         case yellow: 
    //         default: cout << "wtf\n";
    //     }
    //     cout << "enter color code\n";
    //     cin >> code;
    // }

    // cout << "out of range, bye-bye\n";


    // char ch[50];
    // cin.get(ch, 50); // cin不断读取直到遇到换行符
    // cout << ch << endl;
}

void chapter7(){

    // c++不能返回数组，但是可以返回int，float，指针，结构和对象

    // double total, choices;

    // while ((cin >> total >> choices) && choices <= total){
    //     cout << probability(total, choices);
    //     cout << endl;
    // };

    // cout << "End\n";

    // const int ArSize = 8;
    // int cookies[ArSize] = {1,2,3,4,5,6,7,8};
    // cout << cookies << " = array address, ";
    // cout << sizeof(cookies) << " = sizeof cookies\n";
    // int sum = _sum_arr(cookies, cookies + ArSize);
    // cout << sum << endl;

    // int sumFirstThree = _sum_arr(cookies, cookies + 4);
    // cout << sumFirstThree << endl;

    // int sumLastThree = _sum_arr(cookies + 4, cookies + 8);
    // cout << sumLastThree << endl;


    // int Max = 5;
    // double properties[Max];
    // int size = fill_array(properties, Max);
    // show_array(properties, Max);
    // double factor = 1.2;
    // alter_array(factor, properties, Max);
    // show_array(properties, Max);
    // cout << "Done. \n";
    // cin.get();
    // cin.get();  

    int age = 39;
    const int *pt = &age; 
    // pt指向一个const int，因此不能使用pt来修改这个值；*pt的值为const，不能被修改
    // *pt += 1; // invalid because pt points to a const int
    // cin >> *pt // invalid for the same reason

    // pt的声明并不意味它指向的值实际就是一个常量，而只是意味着对pt而言这个值是常量
    // pt指向age，而age不是const。可以直接通过age变量来修改age的值，但不能通过指针修改

    const float g_earth = 9.8;
    const float *pe = &g_earth;
    // 既不能使用g_earth来修改值9.8，也不能使用pe来修改

    // const float g_moon = 1.63;
    // float *pm = &g_moon;
    // const地址不能赋给非const指针；除非使用强制类型转换

    // int new_age = 39; // age++ is a valid operation
    // int *pd = &age; // *pd = 41 is a valid operation
    // const int *ptt = pd; // *pt = 42 is an invalid operation

    // int sloth = 3;
    // const int *ps = &sloth; // a pointer to const int
    // int *const finger = &sloth; // a const pointer to int

    // 最后的声明中，finger只能指向sloth，允许使用finger修改sloth的值
    // 中间的声明中，不允许使用ps来修改sloth的值，但是允许ps指向另一位位置

    // int data[3][4] = {{1,2,3,4}, {4,5,6,7}, {1,3,5,4}};
    // // int total = sum_arr(data, 3); //wrong

    // int total = sum_2d_arr(data, 3);
    // cout << total << endl;

    char *wail = "ululululate";
    unsigned int us = c_in_str(wail, 'u');
    cout << us << endl;

};

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    };

    return result;
}

// int cookies[8] = {1,2,3,4,5,6,7,8}
// cookie == &cookies[0]
// 数组名解释为其第一个元素的地址
// 对数组名使用sizeof得到整个数组的长度
// 将&应用于数组名时，返回整个数组的地址，上面将返回一个32字节内存块的地址

// arr[i] = *(ar + i) // values in two notations
// &arr[i] == ar + i // address in two notations
// 将指针/数组名加1，实际是加上了一个与指针指向的类型的长度(以字节为单位)相等的值。对于遍历数组时，使用指针加法和数组下标是等效的

// int sum_arr(int *arr, int n) 为正确的函数头因为函数传递的是地址
// int sum_arr(int arr[], int n){
int sum_arr(int *arr, int n){
    int total = 0;

    std::cout << arr << " = arr, ";
    std::cout << sizeof(arr) << " = size of arr\n";

    for (int i = 0; i < n; i++){
        total += arr[i];
    };
    return total;
};

// update version with const pointer:
int _sum_arr(const int *arr, const int *n){
    const int *pt;
    int total = 0;

    for (pt = arr; pt != n; pt++){
        total += *pt;
    }

    return total;
}

// sum over two dimention arrays
int sum_2d_arr(int arr[][4], int size){
    int total = 0;
    for (int r = 0; r < size; r++){
        for (int c = 0; c < 4; c++){
            total += arr[r][c];
        }
    }
    return total;
}

int fill_array(double *ar, int limit){
    double temp;
    int i;
    for (i = 0; i < limit; i++){
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            }
            break;
        }else if (temp < 0){
            break;
        }
        ar[i] = temp;
    }

    return i;
}

void show_array(const double *ar, int n){
    for (int i = 0; i < n; i++){
        cout << "Number: " << (i + 1) << " : $" << ar[i] << endl;
    }
}

void alter_array(double r, double *ar, int n){
    for (int i = 0; i < n; i++){
        ar[i] *= r;
    }
}

unsigned int c_in_str(const char *str, char ch){
    unsigned int count = 0;
    while (*str){
        if (*str == ch){
            count+=1;
        }
        str+=1;
    }
    return count;
}