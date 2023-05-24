#include "ManagerEmployee.h"
#include<iostream>
#include <string>
using namespace std;
ManagerEmployee::ManagerEmployee()
{

}


void ManagerEmployee::ReadManagerEmployeeData()
{
    ReadSalariedEmployeeData();
    cout << "Enter Employee's bonus: ";
    cin >> bonus;
    cout << endl;
    Bonus = bonus;
}

void ManagerEmployee::addBouns(double moreBonus)
{
    bonus += moreBonus;
    Bonus += moreBonus;
}

double ManagerEmployee::getBonus()
{
    return bonus;
}

string ManagerEmployee::getDetails()
{
    string details;
     DisplayDetails();
    cout << "Employee's salary is : " << salary << " and bonus is " << bonus << endl;
    return details;
}

double ManagerEmployee::getSalary()
{
    return salary + bonus;
}

ManagerEmployee::~ManagerEmployee()
{
}

