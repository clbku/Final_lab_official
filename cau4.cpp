#include <iostream>

using namespace std;
class Matrix{
private:
	int N, M;
	int* B = new int[N];
	int* A = new int[N*M];
public:
	Matrix tong(Matrix, int, int);
	void nhap(int ,int);
	void xuat();
	//~Matrix();
};
Matrix Matrix::tong(Matrix a, int n, int m){
	for (int i = 0; i < n; i++){
		this->B[i] = 0;
		for (int k = 0; k < m; k++){
			this->B[i] += a.A[i*m + k];
		}
	}
	return *this;
}
void Matrix::nhap(int n, int m){
	this->N = n;
	this->M = m;
	for (int i = 0; i < n; i++){
		cout << "Nhap hang so " << i + 1 << " : ";
		for (int k = 0; k < m; k++){
			cin >> this->A[i*m + k];
		}
	}

}
void Matrix::xuat(){
	for (int i = 0; i < this->N; i++){
		cout << this->B[i] << endl;
	}
}
//Matrix::~Matrix(){
//	delete[] A;
//	delete[] B;
//}
int main(){
	int n, m;
	Matrix matrix;
	cout << "Nhap so hang: "; cin >> n; cin.ignore();
	cout << "Nhap so cot: "; cin >> m; cin.ignore();
	matrix.nhap(n,m);
	matrix.tong(matrix, n, m);
	matrix.xuat();
	system("pause");
	return 0;
}