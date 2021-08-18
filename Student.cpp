#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char n[]) {
  studentId=sid;
  strcpy(name,n);
}

// Display StudentId and Name1
void Student::display() {
   cout << "student id :" << studentId << endl;
   cout << "Name :" << name << endl;
   }
