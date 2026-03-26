#include <iostream>
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main()

{

cout << "=== UNIVERSITY SYSTEM ===\n\n";

Department dept("Computer Science");

// Pointers to store created objects

Student* s1 = nullptr;

Staff* st1 = nullptr;

TeachingAssistant* ta1 = nullptr;

TutoringSession* t1 = nullptr;

TutoringSession* t2 = nullptr;

int choice;

do{


cout  << "\n Menu : \n";
cout <<   "1. Create Student \n ";
cout << "2. Create Staff\n";
cout <<  "3. Create Teaching Assistant \n";
cout  << "4. Display All Members\n";
cout << "5. Grade Assignment (TA) \n";
cout << "6. Create Tutoring Sessions \n" ;
cout <<  "7. Merge and  Compare Sessions\n";
cout  << "0. Exit\n";
cout << "Enter choice: ";

cin>> choice;

switch (choice){

case 1:

{
string name;

int id;


double cgpa;

cout  << "\nEnter Student Name: ";
cin >> name;

cout << "Enter Student ID: ";
cin >>  id ;

cout <<  "Enter CGPA: " ;
cin  >> cgpa;

s1 = new Student(name, id, cgpa);

dept.addMember(s1);

cout << "Student created and added!\n";

break;

}
        
case 2:
            
{
                
string name, cardID;
                
int id, access;
                
double salary;

                
cout << "\nEnter Staff Name: ";
                
cin >> name;

            cout << "Enter Staff ID: ";
            cin >> id;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Card ID: ";
            cin >> cardID;
            cout << "Enter Access Level: ";
            cin >> access;
            AccessCard card(cardID, access);
            st1 = new Staff(name, id, salary, card);
            dept.addMember(st1);
            cout << "Staff created and added!\n";
            break;
        }

        
case 3:      
{

string name , cardID ;

int id, access, hours; 

double cgpa, salary; 

cout << "\nEnter TA Name: ";
cin >> name; 


cout << "Enter TA ID: ";
cin >> id;  

cout << "Enter TA CGPA: ";
cin >> cgpa;

cout << "Enter TA Salary: ";
cin >> salary;

cout << "Enter Working Hours: ";
cin >> hours;

cout << "Enter Card ID: ";
cin >> cardID;

cout << "Enter Access Level: ";
cin >> access;

AccessCard card(cardID, access);

ta1 = new TeachingAssistant(name, id, cgpa, salary, card, hours);

dept.addMember(ta1);

cout << "TA created and added!\n";

break;

}

case 4:

{

    cout << "\n--- All Members ---\n";

dept.displayAllRoles();

break;

}
        
case 5:
        
{
            
 if (ta1 == nullptr)
            
 {
                
    cout << "\nCreate a TA first!\n";
                
    break;

                
            
}
            
int type;

            
cout << "\n1. Numeric grade\n2. Letter grade\nChoose: ";
            
cin >> type;
            
if (type == 1)
            
{
                
    int score;
                
    cout << "Enter numeric score: ";
                
    cin >> score;
                
    ta1->gradeAssignment(score);
            
}
            
else
            
{
                
    string grade;
                
    cout << "Enter letter grade: ";
                
    cin >> grade;
                
    ta1->gradeAssignment(grade);

            
}
            
break;

        
}
        

case 6:
        
{
            
    if (ta1 == nullptr || s1 == nullptr)
            
    {
                
        cout << "\nCreate TA and Student first!\n";
                
        
break;
            
}

int id1, id2;

double dur1, dur2;

cout << "Enter Session 1 ID and Duration: ";
cin >> id1 >> dur1;

t1 = new TutoringSession(id1, dur1, ta1, s1);

cout << "Enter Session 2 ID and Duration: ";
cin >> id2 >> dur2;

t2 = new TutoringSession(id2, dur2, ta1, s1);

cout << "\nSessions created.\n";

break;

        
}
        
case 7:
        
{
            
    
    if (t1 == nullptr || t2 == nullptr)
            
{
                
    cout << "\nCreate sessions first!\n";
                
    
    break;
            
}
            
cout << "\nSession 1:\n";
            
t1->displaySession();
            
cout << "Session 2:\n";
            
t2->displaySession();
            
TutoringSession merged = *t1 + *t2;
            
cout << "\nMerged Session:\n";
            
merged.displaySession();
            
if (*t1 > *t2)
                
cout << "Session 1 is longer.\n";
            
else
                
cout << "Session 2 is longer.\n";
            
break;
        
}
        
case 0:
            
cout << "\nExiting...\n";
            
break;
        
default:
            

cout << "\nInvalid choice!\n";
    
}

    
}

while (choice != 0);

// Clean up dynamically allocated memory
delete s1;

delete st1;

delete ta1;

delete t1;

delete t2;

    

return 0;



}