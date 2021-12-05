#include"ReadAndSaveFile.h"
Student RSFile::getOneStudent(string line[]) {
	string id, gpa, name, phone, email, dob, address;
	stringstream s;
	s = stringstream(line[0]);
	getline(s, id, ':');
	getline(s, id, '-');
	getline(s, name, '\n');
	s = stringstream(line[1]);
	getline(s, gpa, '=');
	getline(s, gpa, ',');
	getline(s, phone, '=');
	getline(s, phone, '\n');
	s = stringstream(line[2]);
	getline(s, email, '=');
	getline(s, email, '\n');
	s = stringstream(line[3]);
	getline(s, dob, '=');
	getline(s, dob, '\n');
	s = stringstream(line[4]);
	getline(s, address, '=');
	getline(s, address, '\n');
	return Student(id, name, stof(gpa), dob, phone, email, address);
}
vector<Student> RSFile::getVectorStudent() {
	vector<Student> listS;
	ifstream ifs;
	ifs.open(_filename);
	if (!ifs.is_open()) {
		cout << "ERROR: Can't Open File\n";
		listS.push_back(Student());
		return listS;
	}
	string line[5];
	while (!ifs.eof()) {
		for (int i = 0; i < 5; i++) {
			getline(ifs, line[i], '\n');
		}
		listS.push_back(getOneStudent(line));
	}
	ifs.close();
	return listS;
}

void RSFile::save(vector<Student> listS) {
	ofstream ofs;
	ofs.open(_filename);
	if (!ofs.is_open()) {
		cout << "ERROR: Can't Open File\n";
		return;
	}
	for (int i = 0; i < listS.size(); i++) {
		ofs << "Student:" << listS[i].getID() << " - " << listS[i].getName() << "\n";
		ofs << "	GPA =" << listS[i].getGPA() << ", " << "Telephone =" << listS[i].getPhone() << "\n"; 
		ofs << "	Email =" << listS[i].getEmail() << "\n";
		ofs << "	DOB =" << listS[i].getDOB() << "\n";
		ofs << "	Address =" << listS[i].getAddress() << "\n";
	}
	ofs.close();
	cout << "Save Successfully\n";
}