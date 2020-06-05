#pragma once
#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Roster.h"
#include "Degree.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "Student.h"
#include <array>
using namespace std;



Roster::Roster() {

	
}
 void Roster::parse() {

	 for (int i = 0; i < 5; ++i) {
		 //Parse the studentID//
		 int rightHandSide = studentData[i].find(",");
		 string tempStudentID = studentData[i].substr(0, rightHandSide);
		 //cout << tempStudentID << endl;

		 //Parse firstName//
		 int leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 string tempFirstName = studentData[i].substr(leftHandSide, rightHandSide - leftHandSide);
		// cout << tempFirstName << endl;

		 //Parse lastName//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 string tempLastName = studentData[i].substr(leftHandSide, rightHandSide - leftHandSide);
		 //cout << tempLastName << endl;

		 //Parse emailAddress//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 string tempEmailAddress = studentData[i].substr(leftHandSide, rightHandSide - leftHandSide);
		 //cout << tempEmailAddress << endl;

		 //Parse age//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 int tempAge = stoi(studentData[i].substr(leftHandSide, rightHandSide - leftHandSide));
		 //cout << tempAge << endl;

		 //Parse day1//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 int tempDay1 = stoi(studentData[i].substr(leftHandSide, rightHandSide - leftHandSide));
		 //cout << tempDay1 << endl;

		 //Parse day2//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 int tempDay2 = stoi(studentData[i].substr(leftHandSide, rightHandSide - leftHandSide));
		// cout << tempDay2 << endl;

		 //Parse day3//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 int tempDay3 = stoi(studentData[i].substr(leftHandSide, rightHandSide - leftHandSide));
		 //cout << tempDay3 << endl;

		 //Parse degree//
		 leftHandSide = rightHandSide + 1;
		 rightHandSide = studentData[i].find(",", leftHandSide);
		 string tempDegree = studentData[i].substr(leftHandSide, rightHandSide - leftHandSide);



		 add(tempStudentID, tempFirstName, tempLastName, tempEmailAddress, tempAge, tempDay1, tempDay2, tempDay3, tempDegree);

	 }

	return;
}

 void Roster::add(string& studentID, string& firstName, string& lastName, string& emailAddress, int& age, int& day1, int& day2, int& day3, string& degree) {
	 int daysArray[3] = { day1, day2, day3 };
	 
	 
	
	
	
	 if (degree == "NETWORK") {
		 
		 		 
		 classRosterArray[index++] = new NetworkStudent(studentID,  firstName,  lastName,  emailAddress,  age,  daysArray,  degree);
			
		 	 }
	 if (degree == "SOFTWARE") {


		 classRosterArray[index++] = new SoftwareStudent(studentID,  firstName,  lastName,  emailAddress,  age,  daysArray,  degree);

	 }
	 if (degree == "SECURITY") {

		 
		 classRosterArray[index++] = new SecurityStudent( studentID,  firstName,  lastName,  emailAddress,  age,  daysArray,  degree);

		
		 
	 }

	 
	 
	 return;
	 
}

 void Roster::printAll()
 {
	 
		(*classRosterArray[0]).print();
		cout << endl;
		(*classRosterArray[1]).print();
		cout << endl;
		(*classRosterArray[2]).print();
		cout << endl;
		(*classRosterArray[3]).print();
		cout << endl;
		(*classRosterArray[4]).print();
		cout << endl;
	
	
	 

	 return;
 }

 void Roster::printDaysInCourse(string studentID)
 {
	 
	 return;
 }

 void Roster::printInvalidEmails()
 {
	 
	 cout  << "Printing Invalid Emails:" << endl;
	 for (int i = 0; i < 5; ++i) {
		 
		 if ( classRosterArray[i]->emailAddress.find('@', 0) == string::npos ||
				classRosterArray[i]->emailAddress.find('.', 0) == string::npos ||
				classRosterArray[i]->emailAddress.find(' ', 0) != string::npos) {

			 cout << classRosterArray[i]->emailAddress << endl;
			}
	 }

	 return;
 }

 void Roster::printAverageDaysInCourse(string studentID)
 {
	 
	 int sum = 0;
	 
	 
		 if (classRosterArray[0]->studentID == studentID) {

			 sum = classRosterArray[0]->dInCourse[0] + classRosterArray[0]->dInCourse[1] + classRosterArray[0]->dInCourse[2];

			 cout << "Student A1 Average Days in Courses: " << sum / 3 << endl;
		 }

		 if (classRosterArray[1]->studentID == studentID) {

			 sum = classRosterArray[1]->dInCourse[0] + classRosterArray[1]->dInCourse[1] + classRosterArray[1]->dInCourse[2];

			 cout << "Student A2 Average Days in Courses: " << sum / 3 << endl;
		 }

		 if (classRosterArray[2]->studentID == studentID) {

			 sum = classRosterArray[2]->dInCourse[0] + classRosterArray[2]->dInCourse[1] + classRosterArray[2]->dInCourse[2];

			 cout << "Student A3 Average Days in Courses: " << sum / 3 << endl;
		 }

		 if (classRosterArray[3]->studentID == studentID) {

			 sum = classRosterArray[3]->dInCourse[0] + classRosterArray[3]->dInCourse[1] + classRosterArray[3]->dInCourse[2];

			 cout << "Student A4 Average Days in Courses: " << sum / 3 << endl;
		 }

		 if (classRosterArray[4]->studentID == studentID) {

			 sum = classRosterArray[4]->dInCourse[0] + classRosterArray[4]->dInCourse[1] + classRosterArray[4]->dInCourse[2];

			 cout << "Student A5 Average Days in Courses: " << sum / 3 << endl;
		 }

		 
	 
	 return;
 }

 void Roster::printByDegreeType(string degree)
 {
	 cout << "Printing Students with " << degree << " Degree:" << endl;
	 DegreeType tempD = DegreeType::SOFTWARE;

	 if (degree == "SOFTWARE") {
		 tempD = DegreeType::SOFTWARE;
	 }
	 if (degree == "NETWORK") {
		 tempD = DegreeType::NETWORK;
	 }
	 if (degree == "SECURITY") {
		 tempD = DegreeType::SECURITY;
	 }
	 for (int i = 0; i < 5; ++i) {
		 if (classRosterArray[i]->getDegreeType() == tempD) {
			 classRosterArray[i]->print();
			 cout << endl;
		 }
	 }
 }


 void Roster::remove(string studentID)
 {
	 bool test = false;
	 
		 if (classRosterArray[0]->studentID == studentID) {
			 delete classRosterArray[0];
			 test = true;
			 cout << "Student " << studentID << " has been deleted." << endl;
		 }

		 if (classRosterArray[1]->studentID == studentID) {
			 delete classRosterArray[1];
			 test = true;
			 cout << "Student " << studentID << " has been deleted." << endl;
		 }

		 if (classRosterArray[2]->studentID == studentID) {
			 delete classRosterArray[2];
			 test = true;
			 cout << "Student " << studentID << " has been deleted." << endl;
		 }

		 if (classRosterArray[3]->studentID == studentID) {
			 delete classRosterArray[3];
			 test = true;
			 cout << "Student " << studentID << " has been deleted." << endl;
		 }

		 if (classRosterArray[4]->studentID == studentID) {
			 delete classRosterArray[4];
			 test = true;
			 cout << "Student " << studentID << " has been deleted." << endl;
		 }

		

			 if (!test) {
				 cout << "Student with this ID was not found." << endl;
			 }
		

		 
	 
	 
		
 }

 




Roster::~Roster() {
}





int main() {
	// Print out to the screen, via your application, the course title, the programming language used, your student ID, and your name.
	cout << "C867:Scripting & Programming Applications" << endl;
	cout << "Created with C++" << endl;
	cout << "Student ID: 001313638" << endl;
	cout << "David Brown" << endl << endl;


	Roster classRoster;


	//Add studentData to classRosterArray//
	

	classRoster.parse();
	classRoster.printAll();
	classRoster.printInvalidEmails();
	cout << endl;
	cout << "Printing Average Days In Courses: " << endl;
	classRoster.printAverageDaysInCourse("A1");
	classRoster.printAverageDaysInCourse("A2");
	classRoster.printAverageDaysInCourse("A3");
	classRoster.printAverageDaysInCourse("A4");
	classRoster.printAverageDaysInCourse("A5");
	cout << endl;
	classRoster.printByDegreeType("SOFTWARE");
	classRoster.remove("A3");
	classRoster.remove("A3");
	
	classRoster.~Roster();
	
	
	
	
	

	

	


	return 0;
}

