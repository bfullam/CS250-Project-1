#include "Person.h"

	// default constructor
Person::Person()
{
	firstName = "N/A";
	lastName = "N/A";
}

	// overloaded constructor
Person::Person(const string& first, const string& last)
{
	firstName = first;
	lastName = last;
}

	// setName
void Person::setName(const string& first, const string& last)
{
	firstName = first;
	lastName = last;
}

	// getLastName
string Person::getLastName() const
{
	return lastName;
}

	// getName
void Person::getName(string& first, string& last) const
{
	first = firstName;
	last = lastName;
}

	// printName
void Person::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

	// destructor
Person::~Person()
{}