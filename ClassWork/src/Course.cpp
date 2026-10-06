#include "Course.h"
Course::Course() {

}
Course::Course(std::string _courseNo,std::string _title,std::string _semester) :courseNo(_courseNo),title(_title),semester(_semester){

}
void Course::setCourseTitle(std::string _title) {
	this->title = _title;
}
std::string Course::getCourseTitle() {
	return this->title;
}
Course ::~Course() {
}
