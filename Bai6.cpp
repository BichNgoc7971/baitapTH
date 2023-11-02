#include<iostream>
using namespace std;
int main()
{
	int m, n, p, q;
	int a[10][15];
	int b[10][15];
	int sum[10][15];
	int tich[10][15];
	cout << "Nhap m,n: ";
	cin >> m >> n;
	cout << "Nhap p,q: ";
	cin >> p >> q;
	cout << endl;
	if (m != p || n != q) {
		cout << "Khong the cong hai ma tran vi co kich thuoc khac nhau " << endl;
		return 1;
	}
	//Nhap gia tri ma tran a
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;
	
	//Nhap gia tri ma tran b
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			cin >> b[i][j];
		}
	}
	//Tinh tong gia trị 2 ma tran
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	//In ra ma tran tong;
	cout << "Ma tran tong la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << sum[i][j] << ' ';
		}
		cout << endl;
	}
	
	//Tinh tich 2 ma tran
	if (n != p) {
		cout << "Khong the nhan hai ma tran  " << endl;
		return 1;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			tich[i][j] = 0;
			for (int k = 0; k < n; k++) {
				tich[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	//In ra ma tran tich
	cout << "Ma tran tich la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			cout << tich[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}