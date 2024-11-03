#include<iostream>
using namespace std;

int main() 
{
    int num1 = 0;
    int num2 = 0;
    char operation = '0';

    cout << "Enter Number one : ";
    cin >> num1;
    
    cout <<"Enter Number two : ";
    cin >> num2; 
    
    cout << "Enter the Operator [ +, -, *, / ] : "; 
    cin >> operation;

    if (operation == '+')
    {
        int add = num1 + num2;
        cout << "The Addition is: " << add;
    } 
    else if (operation == '-')
    {
        int subtract = num1 - num2;
        cout << "The Subtraction is: " << subtract;
    }
    else if (operation == '*') 
    {
       int multiply = num1 * num2;
       cout << "The Multiplication is: " << multiply;
    } 
    else if (operation == '/')
    {
       int divide = num1 / num2;
       cout << "The Division is: " << divide;
    } 
    else 
    {
        cout << "Please Enter a Valid Operator [ +, -, *, / ]" << endl;
    }
 
    return 0;
}