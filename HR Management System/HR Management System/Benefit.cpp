#include "Benefit.h"
#include<iostream>
#include <string>
using namespace std;
Benefit::Benefit()
{

}

Benefit::Benefit(string newPlanType)
{
    planType = newPlanType;
    selectAmount(newPlanType);
}

void Benefit::readBenefit()
{
    cout << "Enter Employee's plan Type: ";
    cin >> planType;
    selectAmount(planType);
}

void Benefit::selectAmount(string planType)
{
    if (planType == "A")
        amount = 6000;
    else if (planType == "B")
        amount = 4000;
    else
        amount = 2000;
}
string Benefit::displayBenefit()
{
    string benefit;
    cout << "Employee's plan type is " << planType << " and Employee has amount of " << amount << '\n';
    return benefit;
}

double Benefit::calculateBenefit()
{
    return amount;
}

Benefit::~Benefit()
{

}

