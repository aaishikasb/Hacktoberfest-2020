//Author: D Vishal Reddy
//This is a simple program which can be used to monitor the total 
//number of vechiles and the amount of money collected at a toll both..
#include<iostream>
#include<cstring>
using namespace std;
class tollboth
{
        int noOfCars;
        double totalMoney;
    public:
    tollboth()
    {
        noOfCars = 0;
        totalMoney = 0.0;
    }
    void payingCar()
    {
        noOfCars = noOfCars + 1;
        totalMoney = totalMoney + 50.0;
    }
    void nonPayingCar()
    {
        noOfCars = noOfCars + 1;
    }
    void display()
    {
        cout << "Total Number of Cars: " << noOfCars << endl;
        cout << "Total Money Collected: " << totalMoney << endl;
    }
};
int main()
{
    tollboth t1;
    while(1)
    {
        int menu;
        cout << "Enter 1 for Paying Car" << endl;
        cout << "Enter 2 for Non Paying Car" << endl;
        cout << "Enter any other key to exit the program" << endl;
        cin >> menu;
        if(menu == 1)
        {
            t1.payingCar();
        }
        else if(menu == 2)
        {
            t1.nonPayingCar();
        }
        else 
        {
            break;
        }
    }
    t1.display();
}