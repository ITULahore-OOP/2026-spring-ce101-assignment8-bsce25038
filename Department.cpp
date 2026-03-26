#include "Department.h"
#include <iostream>
using namespace std;

// Constructor
Department::Department(string departmentName)
{
    this -> departmentName = departmentName;
    memberCount = 0;
    
} 

// Add Member (Aggregation)
void Department::addMember(UniversityMember* member)
{
    if (memberCount < 50)
    {
        members[memberCount] = member;
        memberCount++;
    }
}

// Display All Roles (Run-time Polymorphism)
void Department::displayAllRoles()
{
    for (int i = 0; i < memberCount; i++)
    {
        members[i]->displayRole(); // calls correct function
    }
}