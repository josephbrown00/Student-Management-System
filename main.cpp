#include <iostream>
#include "roster.h"
using namespace std;

int main() {
    cout << "Scripting and Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "WGU ID: 011186790 " << endl;
    cout << "Name: Joseph Brown" << endl << endl;

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Joseph,Brown,jbr3317@wgu.edu,24,30,20 ,25,SOFTWARE"
    };

    Roster classRoster;

    // Parse and add students to the roster
    for (string data : studentData) {
        classRoster.add(data);
    }

    // Displaying all students
    classRoster.printAll();

    // Displaying invalid emails
    classRoster.printInvalidEmails();

    // Displaying average days to complete courses
    classRoster.printAverageDaysInCourse("A5"); // Assuming you want to print average days for student with ID "A5"

    // Displaying by Degree Program
    classRoster.printByDegreeProgram(SOFTWARE);

    // Removing a student
    classRoster.remove("A3");

    // Attempting to remove a non-existent student
    classRoster.remove("A3");

    return 0;
}
