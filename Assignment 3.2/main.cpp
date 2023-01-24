//  Assignment 3.2
//
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022

#include <iostream>
#include <cmath>
using namespace std;

// Write a C++ program that contains a function that calculates the monthly payment of a mortgage. The function will receive (will have inputs) loan amount, annual interest rate, and the term, and returns the monthly payment, total payment, and the total interests paid.
// Do not include any cin nor cout statements inside of the function. Make sure no calculation made in main() function, the main() receives the calculation results from the function calls and displays those results on the screen.
// The main() function, using a a looping statement to allow a user to repeatedly use the function for the calculation.
// The assignment is asking to write a single function to perform the calculation and returns results (a single function that returns multiple values).
    

void mortage(double l, double i, double t, double &x1, double &x2, double &x3)
{

    x1=l/((1-pow((1+(i/1200)),-12*t))*1200/i);
    x2=x1*12*t;
    x3=x2-l;
}

int main()
{
    double a, b, c, monthly, paid, inter, cont;
    
    do {
        cout<<"==================================="<<endl;
        cout<<"Please enter the loan amount: ";
        cin>>a;
        cout<<"Please enter the interest amount: ";
        cin>>b;
        cout<<"Please enter the term: ";
        cin>>c;
        cout<<"==================================="<<endl;
        mortage(a, b, c, monthly, paid, inter);
        cout<<"Your monthly payment is: "<<monthly<<endl;
        cout<<"Your total payment will be: "<<paid<<endl;
        cout<<"Total interest paid will be: "<<inter<<endl;
        cout<<"==================================="<<endl;
        cout<<"Please enter any number to continue, or 0 to end."<<endl;
        cin>>cont; }
    while (cont!=0);
    
    return 0;
}

