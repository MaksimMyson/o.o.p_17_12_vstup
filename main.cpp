#include "point.h"
using namespace std;

int main() {
    Point point;

    // Введення даних
    point.inputData();

    // Виведення даних
    point.displayData();

    // Збереження в файл
    point.saveToFile("point_data.txt");

    // Завантаження з файлу
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // Виведення даних завантаженої точки
    loadedPoint.displayData();

    return 0;
}
