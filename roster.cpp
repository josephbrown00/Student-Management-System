#include "roster.h"
#include <iostream>
#include <sstream>

using namespace std;

// Destructor
Roster::~Roster() {
    for (int i = 0; i < numStudents; ++i) {
        delete classRosterArray[i];
    }
}

// Add student to roster
void Roster::add(string studentData) {
    if (lastIndex < numStudents - 1) {
        lastIndex++;
        string token;
        istringstream tokenStream(studentData);
        string data[9];
        int i = 0;
        while (getline(tokenStream, token, ',')) {
            data[i++] = token;
        }
        int daysInCourse[3] = { stoi(data[5]), stoi(data[6]), stoi(data[7]) };
        DegreeProgram degreeProgram;
        if (data[8] == "SECURITY") {
            degreeProgram = SECURITY;
        }
        else if (data[8] == "NETWORK") {
            degreeProgram = NETWORK;
        }
        else if (data[8] == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        }
        classRosterArray[lastIndex] = new Student(data[0], data[1], data[2], data[3], stoi(data[4]), daysInCourse, degreeProgram);
    }
}

// Remove student from roster
void Roster::remove(string studentID) {
    bool found = false;
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            found = true;
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            lastIndex--;
        }
    }
    if (!found) {
        cout << "Student with ID " << studentID << " not found." << endl;
    }
}

// Print all students' information
void Roster::printAll() {
    for (int i = 0; i <= lastIndex; ++i) {
        classRosterArray[i]->print();
    }
}

// Print average days in course for a student
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int* daysInCourse = classRosterArray[i]->getDaysInCourse();
            int sum = daysInCourse[0] + daysInCourse[1] + daysInCourse[2];
            double average = sum / 3.0;
            cout << "Average days in course for student " << studentID << ": " << average << endl;
            return;
        }
    }
}

// Print invalid email addresses
void Roster::printInvalidEmails() {
    bool anyInvalid = false;
    for (int i = 0; i <= lastIndex; ++i) {
        string email = classRosterArray[i]->getEmailAddress();
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            anyInvalid = true;
            cout << "Invalid email: " << email << " for student " << classRosterArray[i]->getStudentID() << endl;
        }
    }
    if (!anyInvalid) {
        cout << "No invalid email addresses found." << endl;
    }
}

// Print students by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}
