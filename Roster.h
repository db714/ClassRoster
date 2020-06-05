#pragma once
#include <string>
#include <iostream>
#include <array>
#include "Student.h"
#include "Degree.h"
using namespace std;

const string studentData[] = {
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,David,Brown,dbro833@wgu.edu,32,20,30,40,SOFTWARE"
};

class Roster {

public:
	Roster();
	~Roster();
	int index = 0;
	void parse();
	void add(string& studentID, string& firstName, string& lastName, string& emailAddress, int& age, int& day1, int& day2, int& day3, string& degree);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printAverageDaysInCourse(string studentID);
	void printByDegreeType(string degree);
	void remove(string studentID);
	Student *classRosterArray[5] {nullptr, nullptr, nullptr, nullptr, nullptr};
};