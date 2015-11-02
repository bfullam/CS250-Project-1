/*
	(name header)
*/

#include "InputHandler.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayMenu();
void processChoice(const StudentList& studentList, double tuitionRate);

int main()
{
	StudentList studentList;
	double tuitionRate;

	readStudentData(studentList, tuitionRate);
	displayMenu();
	processChoice(studentList, tuitionRate);

	cout << endl;
	system("Pause");
	return 0;
}

void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all students" << endl;
	cout << "    2: Print student information" << endl;
	cout << "    3: Search student by last name" << endl;
	cout << "    4: Print students by course" << endl;
	cout << "    5: Print students on hold" << endl;
	cout << "    6: To exit" << endl;

}

void processChoice(const StudentList& studentList, double tuitionRate)
{
	int choice, id;
	string courseNumber, lastName;

	cout << "\nEnter your choice: ";
	cin >> choice; 
	cout << endl;

	cout << fixed << showpoint << setprecision(2); 

	while (choice != 6)
	{
		string fName, lName;
		int ssn = 0;
		double donation = 0.0;

		switch(choice)
		{
			
			// Print all students
		case 1: 
			studentList.printAllStudents(tuitionRate);

			break;

			// Print student information
		case 2: 
			cout << "Please enter student's ID: ";			
			cin >> id;
			cout << endl;
			
			studentList.printStudentByID(id, tuitionRate);
			cout << endl;

			break;

			// Search student by last name
		case 3: 
			cout << "Please enter the student's last name: ";			
			cin >> lastName;
			cout << endl;

			studentList.printStudentsByName(lastName);
			cout << endl; 
				
			break;

			// Print students by course 
		case 4:
			cout << "Please enter the course number: ";			
			cin >> courseNumber;
			cout << endl;

			studentList.printStudentsByCourse(courseNumber);
			cout << endl;

			break;
						
			// Print students on hold
		case 5: 
			studentList.printStudentsOnHold(tuitionRate);
			cout << endl;

			break;

			// Incorrect selection
		default: 
			cout << "\nSorry. That is not a selection." << endl;

			break;
		}

		system("Pause");
		displayMenu();

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}
}