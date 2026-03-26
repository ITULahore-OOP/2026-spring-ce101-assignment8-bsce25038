#include "UniversityMember.h"

// Constructor
UniversityMember::UniversityMember(string name, int memberID)
{
    this-> name =  name; 

    this->memberID =  memberID;
}

// Destructor
UniversityMember::~UniversityMember() {}


// Get Name
string UniversityMember::getName()

{
    return name;
}

// Get ID
int UniversityMember::getMemberID()

{
    return memberID;
}