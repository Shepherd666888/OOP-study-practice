#pragma once
#include<string>
class Wolf
{
private:
	std::string wolf_sex;
	int ages;
	int points;
	std::string wolf_move;
public:
	void setWolf_sex(std::string sex);
	std::string getWolf_sex();
	void print_wolf_sex();
	void setWolf_age(int age);
	int getWolf_age();
	void print_wolf_age();
	void setWolf_health_point(int points);
	int getWolf_health_point();
	void print_wolf_health_points();
	void setmove(std::string move);
	std::string getmove();
	void print_wolf_move();
	Wolf(std::string sex, int age, int points,std::string move);
	~Wolf();
};

