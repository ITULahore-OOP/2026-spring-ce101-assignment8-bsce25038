#include "Student.h"
#include <iostream>
using namespace std;

// Constructor
Student::Student(string name, int memberID, double cgpa)
    : UniversityMember(name, memberID)
{
    this -> cgpa = cgpa;
}

// Getter
double Student :: getCGPA()
{
    return cgpa;
}

// Setter
void Student::updateCGPA(double newCGPA)
{
    cgpa = newCGPA;

}

// Display Role (Run-time Polymorphism)
void Student::displayRole()
{
    cout   << "Role: Student, Name: " <<  getName() << ", CGPA: " << cgpa <<  endl ;
}