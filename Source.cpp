#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	return a / b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";


	cout << "Tich là: " << tich(5, 2) << endl;
	cout << "Thương là: " << tich(62,42)<<endl;
	system("pause");
	return 0;
}	