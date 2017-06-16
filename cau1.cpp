#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
class Point2D{
private:
	double x=0;
	double y=0;
public:
	Point2D trong_tam(Point2D*, int);
	Point2D get_value(int, int);
	void print();
	Point2D euclid(Point2D*, int, Point2D&);
};
Point2D Point2D::trong_tam(Point2D diem[], int n){
	for (int i = 0; i < n; i++){
		this->x += diem[i].x;
		this->y += diem[i].y;
	}
	this->x /= n;
	this->y /= n;
	return *this;
}
Point2D Point2D::get_value(int x, int y){
	this->x = x;
	this->y = y;
	return *this;
}
void Point2D::print(){
	cout <<"[" <<this->x << "," << this->y << "]" << endl;
}
Point2D Point2D::euclid(Point2D diem[], int n, Point2D& Pref){
	double x = diem[0].x;
	double y = diem[0].y;

	for (int i = 0; i < n; i++){
		if (pow(diem[i].x - Pref.x, 2) + pow(diem[i].y - Pref.y, 2) < x*x + y*y) {
			x = diem[i].x;
			y = diem[i].y;
		}
	}
	this->x = x;
	this->y = y;
	return *this;
}

int main(){
	srand(time(0));
	int n;
	double x, y;
	cout << "Nhap so diem: "; cin >> n; cin.ignore();
	Point2D* diem = new Point2D[n];
	cout << "Random:" << endl;
	for (int i = 0; i < n; i++){
		x = rand() % 20 - 10;
		y = rand() % 20 - 10;
		diem[i].get_value(x, y);
		diem[i].print();
	}
	Point2D tt;
	tt.trong_tam(diem, n);
	cout << "Trong tam: " << endl;
	tt.print();
	Point2D Pref;
	Pref.get_value(rand() % 20 - 10, rand() % 20 - 10);
	tt.euclid(diem, n, Pref);
	cout << "Pref: " << endl;
	Pref.print();
	cout << "Ngan nhat: " << endl;
	tt.print();
	delete[] diem;
	system("pause");
	return 0;
}