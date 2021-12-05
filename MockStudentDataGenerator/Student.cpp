#include"Student.h"
Student::Student() {
	_id = "";
	_name = "";
	_dob = "";
	_gpa = 0;
	_phone = "";
	_email = "";
	_address = "";
}

Student::Student(string id, string name, float gpa, string dob, string phone, string email, string address) {
	_id = id;
	_name = name;
	_gpa = gpa;
	_dob = dob;
	_phone = phone;
	_email = email;
	_address = address;
}
Student::Student(const Student& S) {
	_id = S._id;
	_name = S._name;
	_gpa = S._gpa;
	_dob = S._dob;
	_phone = S._phone;
	_email = S._email;
	_address = S._address;
}

Student& Student::operator= (const Student& S) {
	_id = S._id;
	_name = S._name;
	_gpa = S._gpa;
	_dob = S._dob;
	_phone = S._phone;
	_email = S._email;
	_address = S._address;
	return *this;
}

void Student::printfollowConditions(float avg) {
	if (_gpa >= avg) {
		print();
	}
}