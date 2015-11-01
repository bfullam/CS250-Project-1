/*
	(name header)
*/
#include "Student.h"
#include "Course.h"

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{	
	Course course;

	cout << fixed << showpoint << setprecision(2);

	Student peter;
	vector<Course> peterCourses;
	course.setCourseInfo("ComputeSci", "CSC150", 'A', 4);
	peterCourses.push_back(course);
	course.setCourseInfo("Chemistry", "CHM348", 'A', 4);
	peterCourses.push_back(course);
	course.setCourseInfo("English", "ENG101", 'B', 3);
	peterCourses.push_back(course);
	course.setCourseInfo("Biology", "BIO234", 'A', 4);
	peterCourses.push_back(course);
	peter.setStudentInfo("Peter", "Parker", 654321, true, peterCourses);

	cout << "Student ID: " << peter.getID() << endl;
	cout << "Number of courses enrolled: " << peter.getNumberOfCourses() << endl;
	cout << "Total credits: " << peter.getCreditsEnrolled() << endl;
	if (peter.isTuitionPaid()) 
		cout << "Tuition was paid." << endl;
	else 
		cout << "Tuition was not paid." << endl;
	if (peter.isEnrolledInCourse("CSC150"))
		cout << "Peter is enrolled in CSC150" << endl;
	else
		cout << "Peter is not enrolled in CSC150" << endl;
	if (peter.isEnrolledInCourse("BIO111"))
		cout << "Peter is enrolled in BIO111" << endl;
	else
		cout << "Peter is not enrolled in BIO111" << endl;
	cout << "Total GPA: " << peter.getGpa() << endl;
	cout << "Total amount paid: $" << peter.billingAmount(50.00) << endl;
	cout << "Change student's name..." << endl;
	peter.setName("Pete", "Parker");
	cout << "\nPrint student's new name..." << endl;
	peter.printName();
	cout << "\nPrint all information: " << endl;
	peter.printStudentInfo();
	cout << "\nPrint grade report: " << endl;
	peter.printStudentInfo(50.00);


	Student lex;
	vector<Course> lexCourses;
	course.setCourseInfo("ComputeSci", "CSC201", 'A', 4);
	lexCourses.push_back(course);
	course.setCourseInfo("History", "HIS101", 'A', 3);
	lexCourses.push_back(course);
	course.setCourseInfo("Biology", "BIO234", 'A', 4);
	lexCourses.push_back(course);
	lex.setStudentInfo("Lex", "Luthor", 345678, false, lexCourses);

	cout << "Student ID: " << lex.getID() << endl;
	cout << "Number of courses enrolled: " << lex.getNumberOfCourses() << endl;
	cout << "Total credits: " << lex.getCreditsEnrolled() << endl;
	if (lex.isTuitionPaid())
		cout << "Tuition was paid." << endl;
	else
		cout << "Tuition was not paid." << endl;
	if (lex.isEnrolledInCourse("CSC150"))
		cout << "Lex is enrolled in CSC150" << endl;
	else
		cout << "Lex is not enrolled in CSC150" << endl;
	if (lex.isEnrolledInCourse("HIS101"))
		cout << "Lex is enrolled in HIS101" << endl;
	else
		cout << "Lex is not enrolled in HIS101" << endl;
	cout << "Total GPA: " << lex.getGpa() << endl;
	cout << "Total amount due: $" << lex.billingAmount(50.00) << endl;
	cout << "\nPrint all information: " << endl;
	lex.printStudentInfo();
	cout << "\nPrint grade report: " << endl;
	lex.printStudentInfo(50.00);
	

	cout << endl;
	system("Pause");
	return 0;
}


