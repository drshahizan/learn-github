# Grading System Program

Below is a simple C++ program that implements a basic grading system. It takes the number of students, their names, and scores as input and calculates their grades.

```cpp
#include <iostream>
#include <string>

using namespace std;

char calculateGrade(double score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "\nGrading System\n";

    for (int i = 1; i <= numStudents; ++i) {
        string name;
        double score;
        
        cout << "\nStudent " << i << "\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Score: ";
        cin >> score;

        char grade = calculateGrade(score);
        cout << "Grade: " << grade << "\n";
    }

    return 0;
}

