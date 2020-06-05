#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "Roster.h"
using namespace std;

class SoftwareStudent : public Student {
public:
	SoftwareStudent();
	~SoftwareStudent();
	SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree);


	void print() override;
	DegreeType getDegreeType() override;

private:
	

	
};
