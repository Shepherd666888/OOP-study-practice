#pragma once
#include "Course.h"
class CollChinese :
    public Course
{
private:
    std::string lecture;
    std::string TA;
public:
    CollChinese(std::string _courseNo,std::string _title,std::string _semester,std::string _lecture, std::string _TA);
    std::string getLecture();
    void setLecture(std::string _lecture);
    std::string getTA(); 
    void setTA(std::string _TA);
};

