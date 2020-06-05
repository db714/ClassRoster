#include "NetworkStudent.h"
#include "Degree.h"

NetworkStudent::NetworkStudent()
{}
	
	

NetworkStudent::~NetworkStudent()
{}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree): Student( studentID,  firstName,  lastName,  emailAddress, age, daysInCourse, degree)
{
	
}

void NetworkStudent::print()
{
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Course: " << dInCourse[0] << ',' << dInCourse[1] << ',' << dInCourse[2] << endl;
	cout << "Degree Program: " << degreeTypeStrings[0] << endl;
}

 DegreeType NetworkStudent::getDegreeType()
{
	 degree = DegreeType::NETWORK;
	
	 return degree;
}
