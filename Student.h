#pragma once
#include <array>
#include <string>
#include <iostream>

#include "Degree.h"
using namespace std;


class Student {

public:
	//CONSTRUCTORS/DESTRUCTORS
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree);
	~Student();
	
	//SETTERS
	void setStudentID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setAge(int);
	void setDaysInCourse(int);
	void setDegreeType(string); 

	//GETTERS
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDInCourse();
	virtual DegreeType getDegreeType();
	

	virtual void print();
	
	
	//VARIABLES
	int* daysInCourse;
	int dInCourse[3];
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	DegreeType degree;


private:
	
	

};