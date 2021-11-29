/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 luis curtiellas
 */
#ifndef TAX_H
#define TAX_H

class Tax
{
    double income;
    double totalTax;

public:
    /* constructor */
    Tax(double income, double totalTax);
    Tax();
    /* getter */
    double getIncome();
    double getTotalTax();
    /* setter */
    int setIncome(double income);
    int setTotalTax(double totalTax);
    /* calculate */
    double brac1(const double rate);
    double brac2(const double rate);
    double brac3(const double rate);
    double brac4(const double rate);

};
#endif