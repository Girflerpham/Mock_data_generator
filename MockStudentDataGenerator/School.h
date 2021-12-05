#ifndef _SCHOOL_H_
#define _SCHOOL_H_

#include"ReadAndSaveFile.h"
#include"RandomIntegerGenerator.h"
class School {
private:
	vector<Student> _listS;
public:
	School(vector<Student> listS);
	vector<Student> getList() { return _listS; }
	void addNRandomStudent(int numberf, string filename);
	float avgGPA();
	void printStudentsGPAGreater();
	void printListStudent();
};
#endif // !_SCHOOL_H_
