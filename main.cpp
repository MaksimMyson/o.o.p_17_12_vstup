#include "student.h"
using namespace std;

int main() {
    // ������������ ����� Student
    Student student1;
    student1.inputData(); // �������� �����
    student1.displayData(); // ��������� �����

    Student student2("John Doe", "01/01/2000", "123-456-7890",
        "City", "Country", "University", "UniversityCity", "UniversityCountry", "Group");
    student2.displayData(); // ��������� �����

    return 0;
}
