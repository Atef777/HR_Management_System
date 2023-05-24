#include "DentalBenefit.h"
#include<iostream>
#include <string>
using namespace std;
DentalBenefit::DentalBenefit()
{

}

DentalBenefit::DentalBenefit(string info)
{
    this->info = info;
}

string DentalBenefit::getDetails()
{
    string details;
    displayBenefit();
    cout << "Employee's Dental info : " << info << '\n';
    return details;
}
double DentalBenefit::calculateBenefit()
{
    amount = 0.1 * amount;
    return amount;
}
DentalBenefit::~DentalBenefit()
{

}