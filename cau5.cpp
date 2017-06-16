#include <iostream>
using namespace std;
class Date{
private:
	int day;
	int month;
	int year;
public:
	Date(int, int, int);
	friend ostream& operator<<(ostream& output, Date& d){
		output << d.day / 10 << d.day % 10 << "/" << d.month / 10 << d.month % 10 << "/" << d.year << endl;
		return output;
	}
};
Date::Date(int d, int m, int y){
	this->day = d;
	this->month = m;
	this->year = y;
}
int main(){
	Date d(14, 7, 2017);
	std::cout << d << endl;
	system("pause");
	return 0;
}