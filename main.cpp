#include "fraction.h"
using namespace std;

int main() {
    Fraction fraction1, fraction2, result;

    // �������� ����� ��� ������� �����
    cout << "Enter data for the first fraction:\n";
    fraction1.inputFraction();

    // �������� ����� ��� ������� �����
    cout << "\nEnter data for the second fraction:\n";
    fraction2.inputFraction();

    // ��������� �������� �����
    cout << "\nFirst Fraction: ";
    fraction1.displayFraction();
    cout << "\nSecond Fraction: ";
    fraction2.displayFraction();

    // ��������� ������������ ��������
    result = fraction1.add(fraction2);
    cout << "\n\nSum: ";
    result.displayFraction();

    result = fraction1.subtract(fraction2);
    cout << "\nDifference: ";
    result.displayFraction();

    result = fraction1.multiply(fraction2);
    cout << "\nProduct: ";
    result.displayFraction();

    result = fraction1.divide(fraction2);
    cout << "\nQuotient: ";
    result.displayFraction();

    cout << endl;

    return 0;
}
