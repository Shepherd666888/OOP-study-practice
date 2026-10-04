#pragma once
#include "Course.h"
class CollMath :
    public Course
{
private:
    std::string TA;
    std::string classwork;
public:
    CollMath(std::string _courseNo, std::string _title, std::string _semester, std::string _TA, std::string _classwork);
    std::string getTA();
    void setTA(std::string _TA);
    std::string getClasswork();
    void setClasswork(std::string _classwork);
    virtual std::string establishCourse() override;
};

