//#include<iostream>
//using namespace std;
//int main() {
//	int a[10][15], m, n;
//	int sum = 0;
//	//a
//	do {
//		cout << "Nhap m: ";
//		cin >> m;
//		cout << "Nhap n: ";
//		cin >> n;
//		if (m > 10 || n > 15) {
//			cout << "Nhap sai.Vui long nhap lai! " << endl;
//		}
//	} while (m > 10 || n > 15);
//	//b
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			sum += a[i][j];
//		}
//	}
//	cout <<"Tong cac gia tri luu trong mang la: "<<sum<<endl;
//	//c
//	
//	
//	int max = a[0][0];
//	int maxRow = 0;
//	int maxCol = 0;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] > max) {
//				max = a[i][j];
//				maxRow = i;
//				maxCol = j;
//			}
//
//		}
//		
//	}
//	cout << "Gia tri lon nhat la "<<max<<" o hang " << maxRow << " cot " << maxCol << endl;
//
//	
//
//
//
//
//	int min = a[0][0];
//	int minRow = 0;
//	int minCol = 0;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] < min) {
//				min = a[i][j];
//				minRow = i;
//				minCol = j;
//			}
//
//		}
//	}
//	cout << "Gia tri nho nhat la " << min << " o hang " << minRow << " cot " << minCol << endl;
//	return 0;
//	
//}