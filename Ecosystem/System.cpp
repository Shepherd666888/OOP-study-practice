#include"Wolf.h"
#include<iostream>
int main() {
	Wolf* wolf = new Wolf("ÐÛ",20,20,"Ïò¶«");
	wolf->print_wolf_sex();
	wolf->print_wolf_age();
	wolf->print_wolf_health_points();
	wolf->print_wolf_move();
	delete wolf;
	return 0;
}