#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
{
	cout << "Constructor without parameters" << endl;
}

Student::Student(bool gender)
{
	cout << "Constructor with parameters" << endl;
}

Student::Student(const Student& ref)
{
	cout << "Copy constructor" << endl;
	this->Name = ref.Name;
	this->numOfCourse = ref.numOfCourse;
	this->gender = ref.gender;
}

void Student::setName(string name)
{
	this->Name = name;
}

void Student::setCourse(int course)
{
	this->numOfCourse = course;
}

void Student::setGender(bool gender)
{
	this->gender = gender;
}

string Student::getName()
{
	return Name;
}

int Student::getCourse()
{
	return numOfCourse;
}

string Student::getGender()
{
	return this->gender == true ? "male" : "female";
}

string Student::toString()
{
	string information = "name: " + Name + "\ncourse: " + std::to_string(numOfCourse) + "\ngender: " + Student::getGender();
	return information;
}

Student :: ~Student()
{
	cout << "Called destructor" << endl;
}