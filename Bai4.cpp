//#include<iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int a[5][6], m, n, chon;
//	do {
//		cout << "Nhap m: ";
//		cin >> m;
//		cout << "Nhap n: ";
//		cin >> n;
//		if (m > 5 || n > 6) {
//			cout << "Nhap sai.Vui long nhap lai! " << endl;
//		}
//	} while (m > 5 || n > 6);
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	do {
//		cout << "Chon hang can tinh tong: ";
//		cin >> chon;
//		if (chon <= 0 || chon > 5) {
//			cout << "Nhap sai.Vui long nhap lai! " << endl;
//		}
//	} while (chon <= 0 || chon > 5);
//
//	int sum = 0;
//	for (int j = 0; j < n; j++) {
//		sum += a[chon][j];
//	}
//	cout << "Tong gia tri trong hang " << chon << " la: " << sum << endl;
//
//	int x;
//
//	cout << "Nhap gia tri x: ";
//	cin >> x;
//
//	int count = 0;
//	vector<pair<int, int>> positions;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] == x) {
//				count++;
//				positions.push_back(make_pair(i, j));
//			}
//		}
//	}
//	if (count > 0) {
//		cout << "Gia tri " << x << " ton tai " << count << " lan trong mang"<<endl;
//		cout << "Vi tri cua gia tri " << x << " la " << endl;
//		for (const auto&position : positions) {
//			cout << "Hang " << position.first << ", Cot " << position.second << endl;
//		}
//	}
//	else {
//		cout << "Gia tri " << x << " khong ton tai trong mang." << endl;
//		}
//		return 0;
//	}
