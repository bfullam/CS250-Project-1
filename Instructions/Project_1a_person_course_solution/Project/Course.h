#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Course
{
public:
	Course();

    void setCourseInfo(const string& cName, const string&  cNo, 
  					   char grade, int credits);
  		//The course information is set according to the
		//incoming parameters.

    void printCourseInfo(bool isGrade) const;
  		//This function prints the course information on the 
		//screen. Furthermore, if the bool parameter isGrade is 
    	//true, the grade is shown, otherwise three stars
		//are printed.

    int getCourseCredits() const;
		//Function to return the credit hours

    string getCourseNumber() const;
		//Function to return the course number

	string getCourseName() const;
		//Function to return the course name

    char getCourseGrade() const;
		//Function to return the grade for the course
	
	~Course();

private:
    string courseName; 	
    string courseNo; 	
    char courseGrade;	
    int courseCredits;	
};

#endif
