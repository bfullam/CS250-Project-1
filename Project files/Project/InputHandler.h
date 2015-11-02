#include "StudentList.h"
#include "Course.h"
#include "Student.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const char STUDENT_DATA[] = "student_data.txt";

void createStudentList(ifstream& infile, StudentList& studentList, double& tuitionRate)
{
	string fName, lName;
	int id, noOfCourses;
	char isPaid;
	bool isTuitionPaid;
	
	string cName, cNo;
	int credits;
	char grade;

	Course cTemp;
	Student sTemp;
	vector<Course> courses;	  //vector of objects to store course info
	
	infile >> tuitionRate >> fName;

	while(fName != "END")
	{
		infile >> lName >> id >> isPaid;

		isTuitionPaid = (isPaid == 'Y');

		infile >> noOfCourses;

		courses.clear(); //empty vector

		for(int i = 0; i < noOfCourses; ++i)				
		{
			infile >> cName >> cNo >> credits >> grade;			
			cTemp.setCourseInfo(cName, cNo, grade, credits);			
			courses.push_back(cTemp);					
		}

		sTemp.setStudentInfo(fName, lName, id, isTuitionPaid, courses);						
		studentList.addStudent(sTemp);					
		
		infile >> fName;			
	}
}

void readStudentData(StudentList& studentList, double& tuitionRate)
{
	ifstream infile;

	infile.open(STUDENT_DATA);

	if(!infile)
	{
		cerr << "Input file does not exist." << endl;
		system("Pause");
		exit(1);
	}

	createStudentList(infile, studentList, tuitionRate);

	infile.close();
}
