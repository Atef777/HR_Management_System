#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H

#include "Benefit.h"
class DentalBenefit : public Benefit
{
private:
   string info;
public:
    
    DentalBenefit();
    DentalBenefit(string info);
    ~DentalBenefit();
    string getDetails();
    double calculateBenefit();
};

#endif