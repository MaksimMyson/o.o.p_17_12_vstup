#include "point.h"
using namespace std;

int main() {
    Point point;

    // �������� �����
    point.inputData();

    // ��������� �����
    point.displayData();

    // ���������� � ����
    point.saveToFile("point_data.txt");

    // ������������ � �����
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // ��������� ����� ����������� �����
    loadedPoint.displayData();

    return 0;
}
