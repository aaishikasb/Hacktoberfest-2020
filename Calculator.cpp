#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<"\nThe sum is: "<<a+b;
}
void subtract(int a, int b)
{
    cout<<"\nThe difference is: "<<a-b;
}
void multiply(int a, int b)
{
    cout<<"\nThe product is: "<<a*b;
}
void divide(int a, int b)
{
    cout<<"\nThe quotient is: "<<a/b;
    cout<<"\nThe remainder is: "<<a%b;
}
void square(int a,int b)
{
    cout<<"\n the square of first number is :"<<a*a;
    cout<<"\n the square of second number is :<<b*b;
}
int main()
{
    int choice, y, x;
    cout<<"-----    Welcome to a Calculator    -----";
    cout<<"\nPress 1 to add";
    cout<<"\nPress 2 to subtract";
    cout<<"\nPress 3 to multiply";
    cout<<"\nPress 4 to divide";
    cout<<"\npress 5 to suqare the two numbers";
    cout<<"\nEnter your Choice";
    cin>>choice;

    switch (choice)
    {
    case 1: cout<<"\nEnter the first number: ";
            cin>>x;
            cout<<"\nEnter the second number: ";
            cin>>y;
            add(x,y); 
            break;
    case 2: cout<<"\nEnter the first number: ";
            cin>>x;
            cout<<"\nEnter the second number: ";
            cin>>y;
            subtract(x,y); 
            break;
    case 3: cout<<"\nEnter the first number: ";
            cin>>x;
            cout<<"\nEnter the second number: ";
            cin>>y;
            multiply(x,y); 
            break;
    case 4: cout<<"\nEnter the first number: ";
            cin>>x;
            cout<<"\nEnter the second number: ";
            cin>>y;
            divide(x,y); 
            break; 
    case 5: cout<<"\n enter the first number: ";
            cin>>x;
            cout<<"\n enter the second number: ";
            cin>>y;
            square(x,y);
            break;
    default:
        break;
    }
}
