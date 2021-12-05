#ifndef _READANDSAVEFILE_H_
#define _READANDSAVEFILE_H_

#include"Student.h"
#include<string>
#include<sstream>
#include<fstream>
#include<vector>
class RSFile {
private:
	string _filename;
public:
	RSFile(string filename) { _filename = filename; }
	string getFilename() { return _filename; }
	Student getOneStudent(string[]);
	vector<Student> getVectorStudent();
	void save(vector<Student>);
};
#endif // !_READANDSAVEFILE_H_
