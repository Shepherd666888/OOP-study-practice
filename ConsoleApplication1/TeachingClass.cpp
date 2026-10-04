#include "TeachingClass.h"
#include<iostream>
int TeachingClass::getTeanchingClassID() {
	return this->teachingClassID;
}
void TeachingClass::setTeanchingClassID(int teachingClassID) {
	this->teachingClassID = teachingClassID;
}
std::string TeachingClass::getSemeter( ) {
	return this->semeter;
}
void TeachingClass::setSemeter(std::string semeter) {
	this->semeter = semeter;
}
std::string TeachingClass::getteachingNo() {
	return this->teachingNo;
}
void TeachingClass::setteachingNo(std::string teachingNo) {
	this->teachingNo=teachingNo;
}
void TeachingClass::showInfo() {
	std::cout << "TeachingClassID:" << this->teachingClassID << std::endl;
	std::cout << "Semter:" << this->semeter << std::endl;
	std::cout << "teachingNo:" << this->teachingNo << std::endl;
}
TeachingClass::TeachingClass() {
	this->teachingClassID = 0;
	this->semeter = "";
	this->teachingNo="";
}
TeachingClass::TeachingClass(int t_ClassID, std::string ster, std::string tNo) :
	teachingClassID(t_ClassID), semeter(ster), teachingNo(tNo) {
	this->gradeOfCourse[0] = new GradeOfCourse(99,123);
}
Course* TeachingClass::getCourse(int count) {
	return this->course[count];
}
void TeachingClass::setCourse(Course* course,int count) {
	this->course[count] = course;
}
TeachingClass::~TeachingClass() {
	delete this->gradeOfCourse[0];
}

