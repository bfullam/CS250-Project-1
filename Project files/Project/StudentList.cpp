#include "StudentList.h"

// default constructor
StudentList::StudentList()
{
	studentList = new vector <Student> ;
}

// addStudent
void StudentList::addStudent(const Student& student)
{
	studentList->push_back(student);
}

// getNoOfStudents
int StudentList::getNoOfStudents() const
{
	return static_cast<int>(studentList->size());
}

// printStudentByID
void StudentList::printStudentByID(int id, double tuitionRate) const
{
	if (getNoOfStudents() == 0)
		cerr << "List is empty.";
	else
	{
		vector<Student>::const_iterator iter = studentList->begin();
		bool found = false;
		while (iter != studentList->end() && found == false)
		{
			if (iter->getID() == id)
			{
				iter->printStudentInfo();
				found = true;
			}
			iter++;
		}
		if (!found)
			cout << "No student with ID# found in the list.";
	}
}

// printStudentsByCourse
void StudentList::printStudentsByCourse(const string& course) const
{
	if (getNoOfStudents() == 0)
		cerr << "List is empty.";
	else
	{
		vector<Student>::const_iterator iter;
		bool found = false;
		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			if (iter->isEnrolledInCourse(course))
			{
				iter->printStudentInfo();
				found = true;
			}
		}
		if (!found)
			cout << "No student enrolled in " + course;
	}
}

// printStudentByName
void StudentList::printStudentsByName(const string& lastName) const
{
	if (getNoOfStudents() == 0)
		cerr << "List is empty.";
	else
	{
		vector<Student>::const_iterator iter;
		bool found = false;
		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			if (iter->getLastName() == lastName)
			{
				iter->printStudentInfo();
				found = true;
			}
		}
		if (!found)
			cout << "No student with last name " + lastName + " is in the list";
	}
}

// printStudentsOnHold
void StudentList::printStudentsOnHold(double tuitionRate) const
{
	if (getNoOfStudents() == 0)
		cerr << "List is empty.";
	else
	{
		vector<Student>::const_iterator iter;
		bool found = false;
		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			if (!iter->isTuitionPaid())
			{
				iter->printStudentInfo();
				cout << "    Amount Due: $" << iter->billingAmount(tuitionRate) << endl;

				found = true;
			}
		}
		if (!found)
			cout << "There are no students on hold.";
	}
}

// printAllStudents
void StudentList::printAllStudents(double tuitionRate) const
{
	if (getNoOfStudents() == 0)
		cerr << "List is empty.";
	else
	{
		vector<Student>::const_iterator iter;
		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			iter->printStudentInfo(tuitionRate);
		}
	}
}

void StudentList::printStudentsToFile(ofstream& outp, double tuitionRate) const
{
    if(getNoOfStudents() == 0)
        outp << "Cannot print. No students in the list.";
    else
    {
		vector<Student>::const_iterator iter;
		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			iter->printStudentInfoToFile(outp, tuitionRate);
		}
    }
}

// destroyStudentList
void StudentList::destroyStudentList()
{
	delete studentList;
	studentList = NULL;
}

// destructor
StudentList::~StudentList()
{
	destroyStudentList();
}

