#include<iostream>
using namespace std;
//class Clock{
//private:
//	int hour;
//	int minute;
//	int seconde;
//public:
//	Clock();
//	Clock(int h);
//	//void setHour(int h);
//	void showHour();
//	~Clock();
//};
////void Clock::setHour(int h) {
////	hour = h;
////}
//void Clock::showHour() {
//	cout << hour << endl;
//}
//Clock::Clock() {
//	hour = 12;
//	minute = 30;
//	seconde = 15;
//	cout << hour << minute << seconde;
//}
//Clock::Clock(int h) {
//	hour = h;
//	cout << hour<<" "<< minute << endl;
//}
//Clock::~Clock() {
//
//}
//class ClockWithData :public Clock {
//
//};
//int main() {
//	Clock myclock,myclock1(12);
class Rectangle{
private:
	int length;
	int width;
	int s=0;
public:
	Rectangle(int len,int wid);
	int getS();
};
Rectangle::Rectangle(int len,int wid) {
	length = len;
	width = wid;
}
int Rectangle::getS() {
	s = length * width ;
	return s;
}
int main(){
	int len, wid;
	cin >> len >> wid;
	Rectangle s(len, wid);
	cout<<"矩形面积是："<<s.getS();
	return 0;
}