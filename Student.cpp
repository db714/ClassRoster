#include "Student.h"
#include "Degree.h"
#include "Roster.h"
#include <iostream>
#include <string>
using namespace std;



Student::Student() 
{
	
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree)
//:studentID{ studentID }, firstName{ firstName }, lastName{ lastName }, emailAddress{ emailAddress }, age{ age }, daysInCourse{daysInCourse}, degree{degree}
{
	Student::studentID = studentID;
	Student::firstName = firstName;
	Student::lastName = lastName;
	Student::emailAddress = emailAddress;
	Student::age = age;
	dInCourse[0] = daysInCourse[0];
	dInCourse[1] = daysInCourse[1];
	dInCourse[2] = daysInCourse[2];
	

	
}
	

Student::~Student()
{

}




void Student::setStudentID(string tempStudentID)
{
	studentID = tempStudentID;
}

void Student::setFirstName(string tempFirstName)
{
	firstName = tempFirstName;
	
}

void Student::setLastName(string tempLastName)
{
	lastName = tempLastName;
}

void Student::setEmailAddress(string tempEmailAddress)
{
	emailAddress = tempEmailAddress;
}

void Student::setAge(int tempAge)
{
	age = tempAge;
}

void Student::setDaysInCourse(int)
{
	
	

}

void Student::setDegreeType(string degree)
{
	
	degree = degree;

}

string Student::getStudentID()
{
	return studentID;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}
int Student::getAge()
{
	return age;
}

int* Student::getDInCourse()
{
	
	
	return dInCourse;
}



void Student::print()
{
}

 DegreeType Student::getDegreeType()
{
	return DegreeType::SOFTWARE;
}







