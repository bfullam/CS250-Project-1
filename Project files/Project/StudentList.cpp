#include "StudentList.h"

// default constructor
StudentList::StudentList()
{
	first = NULL;
	last = NULL;
	count = 0;
}

// addStudent
void StudentList::addStudent(const Student& student)
{
	Node *newNode = new Node(student, first);
	first = newNode;
	if (getNoOfStudents() == 0)
		last = newNode;
	count++;
}

// getNoOfStudents
int StudentList::getNoOfStudents() const
{
	return count;
}

// printStudentByID
void StudentList::printStudentByID(int id, double tuitionRate) const
{
	if (count == 0)
		cerr << "List is empty.";
	else
	{
		bool found = false;
		Node *p1 = first;
		while (p1 != NULL)
		{
			if (p1->getStudent().getID() == id)
			{
				p1->getStudent().printStudentInfo();
				found = true;
			}
			p1 = p1->getNext();
		}
		if (!found)
			cout << "No student with ID# found in the list.";
	}
}

// printStudentsByCourse
void StudentList::printStudentsByCourse(const string& course) const
{
	if (count == 0)
		cerr << "List is empty.";
	else
	{
		bool found = false;
		Node *p1 = first;
		while (p1 != NULL)
		{
			if (p1->getStudent().getNumberOfCourses() != 0)
			{
				if (p1->getStudent().isEnrolledInCourse(course))
				{
					p1->getStudent().printStudentInfo();
					found = true;
				}
			}
			p1 = p1->getNext();
		}
		if (!found)
			cout << "No student enrolled in " + course;
	}
}

// printStudentByName
void StudentList::printStudentsByName(const string& lastName) const
{
	if (count == 0)
		cerr << "List is empty.";
	else
	{
		bool found = false;
		Node *p1 = first;
		while (p1 != NULL)
		{
			if (p1->getStudent().getLastName() == lastName)
			{
				p1->getStudent().printStudentInfo();
				found = true;
			}
			p1 = p1->getNext();
		}
		if (!found)
			cout << "No student with last name " + lastName + " is in the list";
	}
}

// printStudentsOnHold
void StudentList::printStudentsOnHold(double tuitionRate) const
{
	if (count == 0)
		cerr << "List is empty.";
	else
	{
		bool found = false;
		Node *p1 = first;
		while (p1 != NULL)
		{
			if (p1->getStudent().isTuitionPaid() == false)
			{
				p1->getStudent().printStudentInfo(tuitionRate);
				found = true;
			}
			p1 = p1->getNext();
		}
		if (!found)
			cout << "There are no students on hold.";
	}
}

// printAllStudents
void StudentList::printAllStudents(double tuitionRate) const
{
	Node *p1 = first;
	while (p1 != NULL)
	{
		p1->getStudent().printStudentInfo(tuitionRate);
		p1 = p1->getNext();
	}
}

// printStudentsToFile
void StudentList::printStudentsToFile(double tuitionRate) const
{

}

// destroyStudentList
void StudentList::destroyStudentList()
{
	Node *p1 = first->getNext();
	Node *p2 = first;
	while (p1 != NULL)
	{
		delete p2;
		p2 = p1;
		p1 = p1->getNext();
	}
	first = NULL;
	last = NULL;
	count = 0;
}

// destructor
StudentList::~StudentList()
{
	destroyStudentList();
}

