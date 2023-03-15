#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

void main()
{
	string name;
	int course;
	bool gender;

	cout << "Enter name:" << endl;
	cin >> name;
	cout << "Enter course:" << endl;
	cin >> course;
	cout << "Enter gender (male - 1, female - 0):" << endl;
	cin >> gender;

	Student student;
	student.setName(name);
	student.setCourse(course);
	student.setGender(gender);

	cout << student.getName() << endl;
	cout << student.getCourse() << endl;
	cout << student.getGender() << endl;

	cout << student.toString() << endl;
}

