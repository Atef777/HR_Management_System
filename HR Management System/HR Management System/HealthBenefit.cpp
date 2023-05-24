#include "HealthBenefit.h"
#include<iostream>
#include <string>
using namespace std;
HealthBenefit::HealthBenefit()
{

}

HealthBenefit::HealthBenefit(string coverage, string info)
{
    this->coverage = coverage;
    this->info = info;
}

HealthBenefit::~HealthBenefit()
{

}

void HealthBenefit::setCoverage(string coverage)
{
    this->coverage = coverage;
}

void HealthBenefit::setInfo(string info)
{
    this->info = info;
}

string HealthBenefit::getDetails()
{
    string details;
    displayBenefit();
    cout << "Employee's Health Coverage : " << coverage << '\n';
    cout << "Employee's Health info : " << info << '\n';
    return details;
}
double HealthBenefit::calculateBenefit()
{
    amount = 0.2 * amount;
    return amount;
}
