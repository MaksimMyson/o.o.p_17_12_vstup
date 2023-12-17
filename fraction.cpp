#include "fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {
    // Конструктор можна залишити порожнім або ініціалізувати за замовчуванням.
}

void Fraction::inputFraction() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    do {
        std::cout << "Enter denominator (not zero): ";
        std::cin >> denominator;
    } while (denominator == 0);
}

void Fraction::displayFraction() const {
    std::cout << numerator << '/' << denominator;
}

Fraction Fraction::add(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::subtract(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::multiply(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::divide(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    result.simplify();
    return result;
}

int Fraction::findGCD(int a, int b) const {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify() {
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    // Знак "-" переносимо до чисельника для стандартизації виведення
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}
