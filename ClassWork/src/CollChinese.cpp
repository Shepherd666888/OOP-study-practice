#include "CollChinese.h"

CollChinese::CollChinese(std::string _courseNo,std::string _title,std::string _semester,std::string _lecture, std::string _TA) :Course(_courseNo,_title,_semester),lecture(_lecture),TA(_TA)
{
}
std::string CollChinese::getLecture(){
	return this->lecture;
}
void CollChinese::setLecture(std::string _lecture){
	this->lecture = _lecture;
}
std::string CollChinese::getTA(){
	return this->TA;
}
void CollChinese::setTA(std::string _TA){
	this->TA = _TA;
}
std::string CollChinese::establishCourse() {
	return this->getCourseTitle();
}
