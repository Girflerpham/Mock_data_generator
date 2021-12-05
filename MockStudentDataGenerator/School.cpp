#include"School.h"

School::School(vector<Student> listS) {
	for (int i = 0; i < listS.size(); i++) {
		_listS.push_back(listS[i]);
	}
}
void School::printListStudent() {
	for (int i = 0; i < _listS.size(); i++) {
		_listS[i].print();
	}
}

void School::addNRandomStudent(int number, string filename) {
	RandomIntegerGenerator _random;
	int randomStudent;
	RSFile rFile(filename);
	vector<Student> listAddStudents = rFile.getVectorStudent();
	vector<int> checkRandomlyIndex;
	vector<int>::iterator check;

	for (int i = 0; i < number; i++) {
		do
		{
			randomStudent = _random.next(0, listAddStudents.size() - 1);
			check = find(checkRandomlyIndex.begin(), checkRandomlyIndex.end(), randomStudent);
		} while (check != checkRandomlyIndex.end());

		checkRandomlyIndex.push_back(randomStudent);
		_listS.push_back(listAddStudents[randomStudent]);
	}
}

float School::avgGPA() {
	if (_listS.size() == 0) {
		return 0;
	}
	float avgGPA = 0;
	for (int i = 0; i < _listS.size(); i++) {
		avgGPA += _listS[i].getGPA();
	}
	return avgGPA / _listS.size();
}
void School::printStudentsGPAGreater() {
	float _avgGPA = avgGPA();
	for (int i = 0; i < _listS.size(); i++) {
		_listS[i].printfollowConditions(_avgGPA);
	}
}