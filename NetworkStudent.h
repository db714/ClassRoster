#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "Roster.h"
#include "Degree.h"
using namespace std;

class NetworkStudent : public Student {
public:
	NetworkStudent();
	~NetworkStudent();
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree);

	void print() override;
	DegreeType getDegreeType() override;

private:

};