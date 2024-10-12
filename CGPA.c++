#include <iostream>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    vector<float> grades;
    int numCourses;

public:
    Student(string name, int numCourses) {
        this->name = name;
        this->numCourses = numCourses;
    }

    void addGrade(float grade) {
        grades.push_back(grade);
    }

    float calculateCGPA() {
        float sum = 0.0;
        for (float grade : grades) {
            sum += grade;
        }
        return sum / numCourses;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << calculateCGPA() << endl;
    }
};

int main() {
    string name;
    int numCourses;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    Student student(name, numCourses);

    for (int i = 0; i < numCourses; i++) {
        float grade;
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grade;
        student.addGrade(grade);
    }

    student.displayInfo();

    return 0;
}