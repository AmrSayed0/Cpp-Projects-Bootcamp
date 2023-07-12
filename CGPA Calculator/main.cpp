#include <iostream>
#include <vector>

using namespace std;

struct Course {
    string name;
    int creditHours;
    float gradePoints;
};

float calculateCGPA(const vector<Course>& courses) {
    int totalCreditHours = 0;
    float totalGradePoints = 0.0;

    for (const auto& course : courses) {
        totalCreditHours += course.creditHours;
        totalGradePoints += course.creditHours * course.gradePoints;
    }

    return totalGradePoints / totalCreditHours;
}

int main() {
    vector<Course> courses;

    // Get input from the user
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; ++i) {
        Course course;

        cout << "Enter the name of course " << i + 1 << ": ";
        cin >> course.name;

        cout << "Enter the credit hours for course " << i + 1 << ": ";
        cin >> course.creditHours;

        cout << "Enter the grade points for course " << i + 1 << ": ";
        cin >> course.gradePoints;

        courses.push_back(course);
    }

    // Calculate and display the CGPA
    float cgpa = calculateCGPA(courses);
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
