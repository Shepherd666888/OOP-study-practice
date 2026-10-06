#include "Wolf.h"
#include<iostream>
void Wolf::setWolf_sex(std::string sex) {
	this->wolf_sex=sex;
}
std::string Wolf::getWolf_sex() {
	return this->wolf_sex;
}
void Wolf::print_wolf_sex() {
	std::cout << "Wolf sex:" << this->wolf_sex <<std:: endl;
}
void Wolf:: setWolf_age(int age) {
	this->ages = age;
}
int Wolf::getWolf_age() {
	return this->ages;
}

void Wolf::print_wolf_age() {
	std::cout << "Wolf age:" << this->ages << std::endl;
}
void Wolf::setWolf_health_point(int points) {
	this->points = points;
}
int Wolf::getWolf_health_point() {
	return this->points;
}
void Wolf::print_wolf_health_points() {
	std::cout << "Wolf health points:" << this->points << std::endl;
}
void Wolf::setmove(std::string move) {
	this->wolf_move = move;
}
std::string Wolf::getmove() {
return this->wolf_move;
}
void Wolf::print_wolf_move() {
	std::cout << "Wolf's move:" << this->wolf_move<< std::endl;
}
Wolf::Wolf(std::string sex,int age,int points,std::string move){
	this->wolf_sex = sex;
	this->ages = age;
	this->points = points;
	this->wolf_move=move;
}

Wolf::~Wolf() {
	std::cout << "ÀÇ±»Ïú»Ù" << std::endl;
}