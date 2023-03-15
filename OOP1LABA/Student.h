#pragma once
#include <string>
using namespace std;

class Student {
private:
	string Name;
	int numOfCourse;
	bool gender;
public:

	Student();

	Student(bool);

	Student(const Student&);

	void setName(string);

	void setCourse(int);

	void setGender(bool);

	string getName();

	int getCourse();

	string getGender();

	string toString();

	~Student();
};