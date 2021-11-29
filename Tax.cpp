#include "Tax.h"

/* constructors */
Tax::Tax(double income, double totalTax)
{
    this->income = income;
    this->totalTax = totalTax;
}

Tax::Tax()
{
    income = -1;
    totalTax = -1;
}

/* setters */
int Tax::setIncome(double income)
{
    this->income = income;
}

int Tax::setTotalTax(double totalTax)
{
    this->totalTax = totalTax;
}

/* getters */
double Tax::getIncome()
{
    return income;
}

double Tax::getTotalTax()
{
    return totalTax;
}

/* calculations */
double Tax::brac1(const double rate)
{
    if (income <= 9950)
        return income * rate;

    else
        return 9950.0 * rate;
}

double Tax::brac2(const double rate)
{
    if (income > 9950)
    {
        if (income <= 40525)
            return (income - 9950.0) * rate;

        else
            return (40525.0 - 9950.0) * rate;
    }

    else
        return 0;
}

double Tax::brac3(const double rate)
{
    if (income > 40525)
    {
        if (income <= 86375)
            return (income - 40525.0) * rate;

        else
            return (86375.0 - 40525.0) * rate;
    }

    else
        return 0;
}

double Tax::brac4(const double rate)
{
    if (income > 86375)
    {
        if (income <= 164925)
            return (income - 86375.0) * rate;

        else
            return (164925.0 - 86375.0) * rate;
    }

    else
        return 0;
}