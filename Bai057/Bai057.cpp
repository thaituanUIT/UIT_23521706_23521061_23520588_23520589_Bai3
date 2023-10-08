#include <iostream>
#include <cmath>
using namespace std;
int Nhap(int[], int&);
int Xuat(int[], int);
int SoChan(int[], int);
int SoLe(int[], int);
int TuongQuan(int[], int);

int main()
{
	int a[1000];
	int n;

	Nhap(a, n);

	Xuat(a, n);
	cout << "\nSo so chan la: ";
	cout << SoChan(a, n);

	cout << "\nSo so le la: ";
	cout << SoLe(a, n);

	cout << "\nTuong quan chan le: ";
	if (TuongQuan(a, n) == 1)
		cout << "\nChan nhieu hon le";
	else if (TuongQuan(a, n) == -1)
		cout << "\nLe nhieu hon chan";
	else
		cout << "\nLe chan bang nhau";
	
	return 0;
}


int Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= (n - 1); i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	return 0;
}
int Xuat(int a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i <= (n - 1); i++)

		cout << " " << a[i];
	return 0;
}

int SoChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int SoLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

int TuongQuan(int a[], int n)
{
	int x = SoChan(a, n);
	int y = SoLe(a, n);
	if (x > y)
		return 1;
	else if (x < y)
		return -1;
	return 0;
}