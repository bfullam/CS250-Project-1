#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	Person();
	
	Person(const string& first, const string& last);
		//Overloaded constructor

	void setName(const string& first, const string& last);
		//Function to set firstName and lastName according to 
 		//the parameters
		//Postcondition: firstName = first; lastName = last;

	string getLastName() const;
		//Function to return student's last name

	void getName(string& first, string& last) const;
		//Function to return firstName and lastName via the parameters
	
	void printName() const;
		//Functin to output first name and last name  
		//in the form "Lastname, Firstname"

	~Person();

private:
	string firstName; 
	string lastName;  
};

#endif 