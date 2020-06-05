#include "SecurityStudent.h"
#include "Degree.h"

SecurityStudent::SecurityStudent()
{}



SecurityStudent::~SecurityStudent()
{}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree): Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree)
{
	
}

void SecurityStudent::print()
{
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Course: " << dInCourse[0] << ',' << dInCourse[1] << ',' << dInCourse[2] << endl;
	cout << "Degree Program: " << degreeTypeStrings[1] << endl;
}

DegreeType SecurityStudent::getDegreeType()
{
	degree = DegreeType::SECURITY;
	
	return degree;
}
