#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();  // Конструктор за замовчуванням

    void inputFraction();
    void displayFraction() const;

    // Арифметичні операції
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    // Допоміжні методи
    int findGCD(int a, int b) const;
    void simplify();  // Спрощення дробу
};

#endif // FRACTION_H
