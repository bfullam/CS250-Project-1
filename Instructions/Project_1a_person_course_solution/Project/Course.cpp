#include "Course.h"

	// default constructor
Course::Course()
{
	courseGrade = '*';
	courseCredits = 0;
}

	// setCourseInfo
void Course::setCourseInfo(const string& cName, const string&  cNo, 
  					   char grade, int credits)
{
	courseName = cName;
	courseNo = cNo;
	courseGrade = grade;
	courseCredits = credits;
}

	// printCourseInfo
void Course::printCourseInfo(bool isGrade) const
{
	cout << left 
		<< setw(8) << courseNo << "   "
		<< setw(15) << courseName;				
	cout.unsetf(ios::left);					
	cout << setw(3) << courseCredits << "   ";	

	if(isGrade)								
		cout << setw(4) << courseGrade<<endl;
	else
		cout << setw(4) << "***" << endl;
}

	// getCourseCredits
int Course::getCourseCredits() const
{
	return courseCredits;
}

	// getCourseNumber
string Course::getCourseNumber() const
{
	return courseNo;
}

	// getCourseName
string Course::getCourseName() const
{
	return courseName;
}

	// getCourseGrade
char Course::getCourseGrade() const
{
	return courseGrade;
}

	// destructor
Course::~Course()
{}

