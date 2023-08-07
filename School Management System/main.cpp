#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    int studentID;
    std::string name;
    int age;
    int grade;

public:
    // Constructor
    Student(int studentID, std::string name, int age, int grade)
        : studentID(studentID), name(name), age(age), grade(grade) {}

    // Getter functions
    int getStudentID() const { return studentID; }
    std::string getName() const { return name; }
    int getAge() const { return age; }
    int getGrade() const { return grade; }

    // Setter functions
    void setGrade(int newGrade) { grade = newGrade; }

    // Display student information
    void display() const {
        std::cout << "Student ID: " << studentID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Grade: " << grade << "\n";
    }
};

class School {
private:
    std::vector<Student> students;

public:
    // Add a student to the school
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    // Remove a student from the school based on studentID
    void removeStudent(int studentID) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getStudentID() == studentID) {
                students.erase(it);
                return;
            }
        }
        std::cout << "Student with ID " << studentID << " not found.\n";
    }

    // Search for a student based on studentID
    Student* searchStudent(int studentID) {
        for (auto& student : students) {
            if (student.getStudentID() == studentID) {
                return &student;
            }
        }
        return nullptr;
    }

    // Display all students' information
    void displayAllStudents() const {
        for (const auto& student : students) {
            student.display();
            std::cout << "---------------------\n";
        }
    }
};

int main() {
    School school;

    // Adding students
    school.addStudent(Student(1001, "John Doe", 15, 10));
    school.addStudent(Student(1002, "Jane Smith", 16, 11));

    // Display all students
    school.displayAllStudents();

    // Search for a student by ID
    int studentID = 1001;
    Student* foundStudent = school.searchStudent(studentID);
    if (foundStudent != nullptr) {
        std::cout << "Student with ID " << studentID << " found:\n";
        foundStudent->display();
    } else {
        std::cout << "Student with ID " << studentID << " not found.\n";
    }

    // Remove a student
    int studentToRemove = 1002;
    school.removeStudent(studentToRemove);

    return 0;
}
