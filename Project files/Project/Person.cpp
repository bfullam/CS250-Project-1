/* Implementation of the class Person */
#include "Person.h"

// default constructor
Person::Person(){
	lastName = "N/A";
	firstName = "N/A";
}

// overloaded constructor
Person::Person(const string& firstName, const string& lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

// setName
void Person::setName(const string& newFirstName, const string& newLastName){
	lastName = newLastName;
	firstName = newFirstName;
}

// getLastName
string Person::getLastName() const{
	return lastName;
}

// getName
void Person::getName(string& fName, string& lName) const{
	fName = firstName;
	lName = lastName;
}

// printName
void Person::printName() const{
	cout << lastName << ", " << firstName << endl;
}

// destructor
Person::~Person(){}