#include "student.h"
#include <iostream>

// Constructors
Student::Student() {}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->daysInCourse = new int[3];
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
}

// Destructor
Student::~Student() {
    delete[] daysInCourse;
}

// Accessors (Getters)
string Student::getStudentID() {
    return studentID;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}

int Student::getAge() {
    return age;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}

// Mutators (Setters)
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[]) {
    delete[] this->daysInCourse;
    this->daysInCourse = new int[3];
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

// Other functions
void Student::print() {
    cout << "Student ID: " << studentID << "\t";
    cout << "First Name: " << firstName << "\t";
    cout << "Last Name: " << lastName << "\t";
    cout << "Age: " << age << "\t";
    cout << "Days in Course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}\t";
    cout << "Degree Program: ";
    switch (degreeProgram) {
    case SECURITY:
        cout << "Security";
        break;
    case NETWORK:
        cout << "Network";
        break;
    case SOFTWARE:
        cout << "Software";
        break;
    }
    cout << endl;
}
