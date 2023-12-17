#include "point.h"
using namespace std;

int main() {
    Point point;

    // Введення даних
    point.inputPoint();

    // Виведення даних
    point.displayPoint();

    // Збереження в файл
    point.saveToFile("point_data.txt");

    // Завантаження з файлу
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // Виведення даних завантаженої точки
    loadedPoint.displayPoint();

    return 0;
}
