#include "Course.h"

// default constructor
Course::Course(){
	courseCredits = 0;
	courseGrade = '*';
}

// setCourseInfo
void Course::setCourseInfo(const string& newCourseName,
	const string& newCourseNumber, char newGrade, int newCredits){
	courseName = newCourseName;
	courseNo = newCourseNumber;
	courseGrade = newGrade;
	courseCredits = newCredits;
}

// printCourseInfo
void Course::printCourseInfo(bool canBePrinted) const{
	cout << left << setw(8) << courseNo << "   " << setw(15) << courseName;
	cout.unsetf(ios::left);
	cout << setw(3) << courseCredits << "   ";
	if (canBePrinted)
		cout << setw(4) << courseGrade << endl;
	else cout << setw(4) << "***" << endl;

}

// getCourseCredits
int Course::getCourseCredits() const{
	return courseCredits;
}

// getCourseNumber
string Course::getCourseNumber() const{
	return courseNo;
}

// getCourseName
string Course::getCourseName() const{
	return courseName;
}

// getCourseGrade
char Course::getCourseGrade() const{
	return courseGrade;
}

// destructor
Course::~Course(){}