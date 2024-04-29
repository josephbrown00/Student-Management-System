#pragma once
#include <string>
#include "student.h"
using namespace std;

class Roster {
private:
    static const int numStudents = 5;
    int lastIndex = -1;
    Student* classRosterArray[numStudents];

public:
    // Destructor
    ~Roster();

    // Add student to roster
    void add(string studentData);

    // Remove student from roster
    void remove(string studentID);

    // Print all students' information
    void printAll();

    // Print average days in course for a student
    void printAverageDaysInCourse(string studentID);

    // Print invalid email addresses
    void printInvalidEmails();

    // Print students by degree program
    void printByDegreeProgram(DegreeProgram degreeProgram);
};
