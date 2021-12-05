#include"School.h"
int main() {
	RandomIntegerGenerator random;
	int randomNumber = random.next(5,10); 
	
	RSFile rsfile("Students.txt"); 
	School listStudent(rsfile.getVectorStudent()); 
	listStudent.printListStudent(); 

	cout << "List After Adding Random " << randomNumber << " Students\n";
	listStudent.addNRandomStudent(randomNumber, "AddStudents.txt"); 
	listStudent.printListStudent();
	
	cout << "AVG GPA: " << listStudent.avgGPA() << "\n"; 
	
	cout << "Print Students Have GPA Greater than AVG GPA\n";
	listStudent.printStudentsGPAGreater();
	
	rsfile.save(listStudent.getList()); 

	cin.get();
	return 0;
}