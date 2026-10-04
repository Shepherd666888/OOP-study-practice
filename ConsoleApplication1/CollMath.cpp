#include "CollMath.h"

CollMath::CollMath(std::string _courseNo, std::string _title, std::string _semester, std::string _TA, std::string _classwork):Course(_courseNo,_title,_semester),TA(_TA),classwork(_classwork) {

}
std::string CollMath::getTA() {
	return this->TA;
}
void CollMath::setTA(std::string _TA) {
	this->TA = _TA;
}
std::string CollMath::getClasswork() {
	return this->classwork;
}
void CollMath::setClasswork(std::string _classwork) {
	this->classwork = _classwork;
}
std::string CollMath::establishCourse() {
	return this->getCourseTitle();
}