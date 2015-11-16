#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class StudentList
{
public:

	// default constructor
	StudentList();

	// addStudent
	void addStudent(const Student& student);

	// getNoOfStudents
	int getNoOfStudents() const;

	// printStudentByID
	void printStudentByID(int id, double tuitionRate) const;

	// printStudentsByCourse
	void printStudentsByCourse(const string& course) const;

	// printStudentByName
	void printStudentsByName(const string& lastName) const;

	// printStudentsOnHold
	void printStudentsOnHold(double tuitionRate) const;

	// printAllStudents
	void printAllStudents(double tuitionRate) const;

    void printStudentsToFile(ofstream& outp, double tuitionRate) const;
    
	// destroyStudentList
	void destroyStudentList();

	// destructor
	~StudentList();

private:
	vector<Student> *studentList;
};

#endif

