#include "student.h"
using namespace std;

int main() {
    // Використання класу Student
    Student student1;
    student1.inputData(); // Введення даних
    student1.displayData(); // Виведення даних

    Student student2("John Doe", "01/01/2000", "123-456-7890",
        "City", "Country", "University", "UniversityCity", "UniversityCountry", "Group");
    student2.displayData(); // Виведення даних

    return 0;
}
