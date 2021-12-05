#ifndef _STUDENT_H_
#define _STUDENT_H_

#include<iostream>
using namespace std;
class Student {
private:
	string _id;
	string _name;
	float _gpa;
	string _dob;
	string _phone;
	string _email;
	string _address;
public:
	Student();
	Student(string, string, float, string, string, string, string);
	Student(const Student&);

	string getID() { return _id; }
	string getName(){ return _name; }
	float getGPA() { return _gpa; }
	string getDOB() { return _dob; }
	string getPhone() { return _phone; }
	string getEmail() { return _email; }
	string getAddress() { return _address; }

	Student& operator= (const Student&);

	void printfollowConditions(float);
	void print() {
		cout << _id << " - " << _name << ", GPA: " << _gpa << "\n";
	}
};
#endif // !_STUDENT_H_
