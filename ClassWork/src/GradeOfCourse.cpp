#include "GradeOfCourse.h"
GradeOfCourse::GradeOfCourse()
{
	studentID = 0;
	grade = 0.0f;
}
GradeOfCourse::GradeOfCourse(int _studentID, float _grade):
	studentID(_studentID), grade(_grade)
{
	this->studentID = studentID;
	this->grade = grade;
}
GradeOfCourse::~GradeOfCourse()
{
}
