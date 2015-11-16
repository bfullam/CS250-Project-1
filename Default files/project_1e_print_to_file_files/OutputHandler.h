#include "StudentList.h"
#include "Course.h"
#include "Student.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void printAllStudentsToFile(const StudentList& studentList, double tuitionRate)
{
	//Declare stream object
	ofstream outfile;

	//Ask user how to name the file to write to
	string nameOfFile;
	cout << "Enter a name for a new file to write on (include extension .txt):\n";
	cin >> nameOfFile;

	outfile.open(nameOfFile);

	if (outfile.fail())
	{
		cerr << "Output file opening failed.\n";
		system("Pause");
		exit(1);
	}

	studentList.printStudentsToFile(outfile,tuitionRate);
}