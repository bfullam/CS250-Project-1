/*
	(name header)
*/

#include "Course.h"
#include "Person.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	Person bob;
	bob.setName("Bob", "Peterson");
	bob.printName();

	Person jane;
	jane.setName("Jane", "Smith");
	string janeFName, janeLName;
	jane.getName(janeFName, janeLName);
	cout << janeLName << ", " << janeFName << endl;

	Person jim;
	jim.setName("Jim", "Johnson");
	cout << jim.getLastName() << endl;

	Course cs100;
	cs100.setCourseInfo("Computer Science", "CS 100", 'A', 4);
	cs100.printCourseInfo(true);

	Course cs110;
	cs100.setCourseInfo("Computer Science", "CS 110", 'B', 5);
	cs100.printCourseInfo(false);

	Course cs120;
	cs120.setCourseInfo("Computer Science", "CS 120", 'A', 5);
	cout << left
		<< setw(8) << cs120.getCourseNumber() << "   "
		<< setw(15) << cs120.getCourseName();
	cout.unsetf(ios::left);
	cout << setw(3) << cs120.getCourseCredits() << "   "
		<< setw(4) << cs120.getCourseGrade() << endl;


	cout << endl;
	system("Pause");
	return 0;
}