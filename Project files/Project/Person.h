/*
Diaz, Cesar
Fullam, Bryan
Long, Keith
CS A250
September 30, 2015

Project 1
*/

/* Interface of the class Person */
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
public:

	// default constructor
	Person();

	// overloaded constructor
	Person(const string& firstName, const string& lastName);

	// setName
	void setName(const string& newLastName, const string& newFirstName);

	// getLastName
	string getLastName() const;

	// getName
	void getName(string& fName, string& lName) const;

	// printName
	void printName() const;

	// destructor
	~Person();

private:
	string lastName;
	string firstName;
};

#endif
