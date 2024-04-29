# Student-Management-System
Student Management System that utilizes C++ to parse and update student information. 
1. main.cpp:
This file contains the main() function, which serves as the entry point of the program. It initializes the student data, creates an instance of the Roster class, adds students to the roster, and demonstrates the functionality of the Roster class by calling its member functions.

2. roster.h and roster.cpp:
These files define and implement the Roster class, respectively.

In roster.h:

    The Roster class declaration is provided, including its member variables and member functions.
    The Roster class manages a roster of students, represented by an array of pointers to Student objects (classRosterArray). It also keeps track of the index of the last student in the roster (lastIndex).
    Member functions are declared for adding students (add), removing students (remove), printing all students (printAll), printing average days in course for a student (printAverageDaysInCourse), printing invalid emails (printInvalidEmails), and printing students by degree program (printByDegreeProgram).

In roster.cpp:

    The member functions of the Roster class are implemented.
    Each function defined in roster.h is implemented in this file, including error handling and manipulation of student data.

3. student.h and student.cpp:
These files define and implement the Student class, respectively.

In student.h:

    The Student class declaration is provided, including its member variables and member functions.
    The Student class represents a student with attributes such as student ID, first name, last name, email address, age, number of days to complete each course, and degree program.

In student.cpp:

    The member functions of the Student class are implemented.
    Accessor and mutator functions are defined to get and set the attributes of a Student object.
    A constructor is defined to initialize a Student object with the provided data.
    A print function is defined to display the information of a Student object.

4. degree.h:
This file defines an enumerated data type DegreeProgram, which represents the degree programs available to students. The enumerated values include SECURITY, NETWORK, and SOFTWARE.

 These files collectively represent a student management system implemented in C++.
