#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* daysInCourse;
    DegreeProgram degreeProgram;

public:
    // Constructors
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);

    // Destructor
    ~Student();

    // Accessors (Getters)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();

    // Mutators (Setters)
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // Other functions
    void print();
};
