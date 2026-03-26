#include "TutoringSession.h"
#include <iostream>
using namespace std;

// Constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student)
{
    this ->sessionID = sessionID;
    this-> durationMinutes = durationMinutes;

    this -> ta = ta;
    this -> student = student;

}


// Getter
double TutoringSession::getDuration(){

    return durationMinutes;

}

// Display Session
void TutoringSession::displaySession(){

    cout << "Session ID: "  << sessionID << ", Duration: " << durationMinutes  << endl ;

}

// Operator Overloading (+)
TutoringSession TutoringSession::operator+(const TutoringSession& other)
{
    // Create new session with combined duration
    return TutoringSession(0, this->durationMinutes + other.durationMinutes, this->ta, this->student);


}

// Non-member operator (>)
bool operator>(TutoringSession s1, TutoringSession s2)
{

    return s1.getDuration() > s2.getDuration();


}