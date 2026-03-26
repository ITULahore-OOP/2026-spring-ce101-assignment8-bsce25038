#include "Staff.h"
#include <iostream>
using namespace std;

// Constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), card(card)
{
    this->salary = salary;
}

// Getter
double Staff::getSalary()
{
    return salary;
}

// Display Role
void Staff::displayRole()
{
    cout << "Role: Staff, Name: " << getName()
         << ", Salary: " << salary << endl;
}

// Show Access Card (Composition)
void Staff::displayCard()
{
    card.displayCardInfo();
}