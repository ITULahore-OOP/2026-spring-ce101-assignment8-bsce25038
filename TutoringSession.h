#ifndef SESSION_H
#define SESSION_H

#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;

public:
    TutoringSession(int sessionID, double durationMinutes,
                    TeachingAssistant* ta, Student* student);

    double getDuration();
    void displaySession();

    TutoringSession operator+(const TutoringSession& other);
};

// non-member
bool operator>(TutoringSession s1, TutoringSession s2);

#endif