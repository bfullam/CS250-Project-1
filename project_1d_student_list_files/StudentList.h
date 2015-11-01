#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node( ): student( ), next(NULL) {} 
    Node(const Student& newStudent, Node *newNext) 
		: student(newStudent), next(newNext){}
    Student getStudent( ) const { return student; }
	Node* getNext( ) const { return next; }	
    void setStudent(const Student& newStudent) { student = newStudent; }
	void setNext(Node *newNext) { next = newNext; }
private:
    Student student;	
    Node *next;		
};

class StudentList
{
public:

	// default constructor


	// addStudent


	// getNoOfStudents


	// printStudentByID


	// printStudentsByCourse


	// printStudentByName


	// printStudentsOnHold


	// printAllStudents


	// printStudentsToFile


	// destroyStudentList
	

	// destructor


private:
	Node *first;
	Node *last;
	int count;
};

#endif

