#pragma once
#include<string>
class Course
{
private:
	std::string courseNo;
	std::string title;
protected:
	std::string semester;
public:
	Course();
	Course(std::string _courseNo,std::string _title,std::string _semester);
	void setCourseTitle(std::string _title);
	std::string getCourseTitle();
};

