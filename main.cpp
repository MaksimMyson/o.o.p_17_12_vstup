#include "point.h"
using namespace std;

int main() {
    Point point;

    // �������� �����
    point.inputPoint();

    // ��������� �����
    point.displayPoint();

    // ���������� � ����
    point.saveToFile("point_data.txt");

    // ������������ � �����
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // ��������� ����� ����������� �����
    loadedPoint.displayPoint();

    return 0;
}
