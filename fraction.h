#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // ������������
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    // ������� ��� ������� �� �����
    inline int getNumerator() const { return numerator; }
    inline int getDenominator() const { return denominator; }

    // ������� ��� �������� �� ���������
    void inputFraction();
    void displayFraction() const;

    // ���������� ��������
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    // ������� ������
    int findGCD(int a, int b) const;
    void simplify();
};

#endif // FRACTION_H
