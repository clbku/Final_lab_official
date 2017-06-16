#include <iostream>
using namespace std;
void Dao(int mang[], int n){
	if (n > 0){
		cout << mang[n - 1] << " ";
		Dao(mang, n - 1);
	}
}
int main(){
	int n;
	cout << "Nhap so phan tu cua mang: "; cin >> n; cin.ignore();
	int* mang = new int[n];
	cout << "Nhap phan tu mang: ";
	for (int i = 0; i < n; i++){
		cin >> mang[i];
	}
	Dao(mang, n);
	delete[] mang;
	system("pause");
	return 0;
}