#include <iostream>
using namespace std;
int sum2(int mang[], int n){
	if (n ==0) return 0;
	else if (n == 1) return mang[0] * mang[0];
	else return mang[n-1] * mang[n-1] + sum2(mang, n - 1);
	
}
int main(){
	int n;
	cout << "Nhap so phan tu cua mang: "; cin >> n; cin.ignore();
	int* mang = new int[n];
	cout << "Nhap phan tu mang: ";
	for (int i = 0; i < n; i++){
		cin >> mang[i];
	}
	cout << sum2(mang, n);
	delete[] mang;
	system("pause");
	return 0;
}