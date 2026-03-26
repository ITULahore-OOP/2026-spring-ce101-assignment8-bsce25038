#include "AccessCard.h"
#include <iostream>
using namespace std;

// Constructor
AccessCard::AccessCard(string cardID, int accessLevel)
{
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}

// Get Card ID
string AccessCard::getCardID()
{
    return cardID;
}

// Get Access Level
int AccessCard::getAccessLevel()
{
    return accessLevel;
}

// Display Card Info
void AccessCard::displayCardInfo()
{
    cout << "Card ID: " << cardID
         << ", Access Level: " << accessLevel << endl;
}