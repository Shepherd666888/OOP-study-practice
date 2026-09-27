#pragma once
#include<string>
#include"GradeOfCourse.h"
#include"Course.h"
class TeachingClass
{
private:
	int teachingClassID;
	std::string semeter;
	std::string teachingNo;
	GradeOfCourse* gradeOfCourse[10];
	Course* course;

public:
	Course* getCourse();
	void setCourse(Course* course);
	int getTeanchingClassID();
	void setTeanchingClassID(int teachingClassID);
	std::string getSemeter();
	void setSemeter(std::string semeter);
	std::string getteachingNo();
	void setteachingNo(std::string teachingNo);
	void showInfo();

public:
	TeachingClass();
	TeachingClass(int t_ClassID,std::string ster,std::string tNo);
	//TeachingClass(const TeachingClass &a);
	~TeachingClass();
};

