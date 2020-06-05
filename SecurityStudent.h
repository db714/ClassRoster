#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "Roster.h"
using namespace std;
//sub class of STUDENT//
class SecurityStudent : public Student {
	public:
		SecurityStudent();
		SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, string degree);
		~SecurityStudent();
		
		void print() override;
		DegreeType getDegreeType() override;

	private:
		
};


