#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b){
return a+b;
}
int hieu(int a, int b){
return a-b;
}
int tich(int a, int b);
float thuong(int a, int b);
=======
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	return a / b;
}
>>>>>>> a372ec7f8f0f31da6e98556a0f7bd39cb96a3a42
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";


	cout << "Tich là: " << tich(5, 2) << endl;
	cout << "Thương là: " << tich(62,42)<<endl;
	system("pause");
	return 0;
}	