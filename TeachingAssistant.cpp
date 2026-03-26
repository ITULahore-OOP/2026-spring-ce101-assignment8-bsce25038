#include "TeachingAssistant.h"
#include <iostream>
using namespace std;

// Constructor (Diamond Problem handled using virtual inheritance)
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID), Student(name, memberID, cgpa), Staff(name, memberID, salary, card)

{

    this->workingHours = workingHours;

}

// Display Role
void TeachingAssistant::displayRole()
{

    cout << "Role: Teaching Assistant, Name: " << getName() << ", CGPA: " << getCGPA() << ", Salary: " << getSalary() << ", Hours: " << workingHours << endl;


}



// Grade using numeric score
void TeachingAssistant::gradeAssignment(int score)
{
    cout << "numeric score: " << score << "/100" << endl;

}

// Grade using letter
void TeachingAssistant::gradeAssignment(string letterGrade)
{
    cout << "letter grade: " << letterGrade << endl;
    
}