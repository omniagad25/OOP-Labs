#include <iostream>

using namespace std;
void swapAddress(int* a, int* b);
void swapReference( int& a, int& b);
void swapValue(int x, int y);



int main()
{
    int number1,number2;
    int &r=number1;

    cout << "Please enter the numbers you want to swap" << endl;
    cin>> number1 >> number2;
    swapAddress(&number1, &number2);
    cout<< "Swap address: The first is "<<number1<<" The second is number"<<number2<<endl;
    swapReference(number1, number2);
    cout<< "Swap Reference: The first is "<<number1<<" The second is number"<<number2<<endl;
    swapValue(number1, number2);
    return 0;
}

void swapAddress(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference( int& a, int& b){
     int temp = a;
    a = b;
    b = temp;
}

void swapValue(int x, int y){
    int temp=x;
    x=y;
    y=temp;
    cout << "Swap Value: The first number is: " <<x<< "The second number is " << y << endl;
}

