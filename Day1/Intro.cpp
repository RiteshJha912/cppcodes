#include <iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}
int subtract(int num1, int num2){
    return num1 - num2;
}
int divide(int num1, int num2){
    return num1 / num2;
}
int multiply(int num1, int num2){
    return num1 * num2;
}

int main()
{
    int num1, num2;
    cout<<"Hello World, this is a calculator!"<<endl;
    cout<<"Enter the two numbers : "<<endl;
    cin>>num1>>num2;

    // cout<<"Choose one of the below options :"<<endl;
    cout << "1. Addition = " << add(num1, num2) << endl;
    cout << "2. Subtraction = " <<subtract(num1,num2)<<endl;
    cout << "3. Division = " << divide(num1,num2)<<endl;
    cout << "4. Multiplication = " << multiply(num1, num2) << endl;
    return 0;
}
