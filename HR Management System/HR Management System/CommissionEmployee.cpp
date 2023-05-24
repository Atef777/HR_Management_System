#include "CommissionEmployee.h"
#include<iostream>
#include <string>
using namespace std;
CommissionEmployee::CommissionEmployee()
{

}

CommissionEmployee::~CommissionEmployee()
{

}

void CommissionEmployee::ReadCommissionEmployeeData()
{
    readEmployeeData();
    cout << "Enter Employee's rate: ";
    cin >> rate;
    cout << endl;
    cout << "Enter Employee's target: ";
    cin >> target;
    cout << endl;
    Salary = rate * target;
}

double CommissionEmployee::getSalary()
{
    return rate * target;
}