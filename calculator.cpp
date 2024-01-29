#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    cout<<"......Welcome to the calculator......"<<endl;
    cout<<"There are many operations which can be performed"<<endl;

    cout<<"Enter first number: "<<endl;
    float num1=0;
    cin>> num1;

    cout<<"Enter second number: "<<endl;
    float num2=0;
    cin>>num2;

    cout<<"Select any operations you want to perform:\n a) Addition\n b) Subtraction\n c) Multiplication\n d) Division\n";
    char choice;
    cin>>choice;

    switch (choice)
    {
    case 'a':
        {cout<< num1 << " + " << num2 << " = "<<num1 + num2;}
        break;

    case 'b':
        {cout<< num1 << " - " << num2 << " = "<<num1 - num2;}
        break;

    case 'c':
        {cout<< num1 << " * " << num2 << " = "<<num1 * num2;}
        break;

    case 'd':
        {cout<< num1 << " / " << num2 << " = "<<num1 / num2;}
        break;
    
    default:
        break;
    }

    
    
    return 0;
}