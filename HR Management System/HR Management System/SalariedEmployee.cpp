#include "SalariedEmployee.h"
#include<iostream>
#include <string>
using namespace std;
SalariedEmployee::SalariedEmployee()
{

}

void SalariedEmployee::ReadSalariedEmployeeData()
{
    readEmployeeData();
    cout << "Enter Employee's salary: ";
    cin >> salary;
    cout << endl;
    Salary = salary;
}

string SalariedEmployee::getDetails()
{
    string details;
     DisplayDetails();
    cout << "Employee's salary is : " << salary << endl;
    return details;
}

double SalariedEmployee::getSalary()
{
    return salary;
}