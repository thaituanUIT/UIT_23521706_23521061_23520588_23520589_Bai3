#include <iostream>
#include <cmath>
using namespace std;
int Nhap(float[], int&);
int Xuat(float[], int);
int DemGiaTri(float[], int, float);

int main()
{
	float a[1000];
	int n;
	float x;

	Nhap(a, n);
 
	cout << "Nhap so can dem trong mang: ";
	cin >> x;

    Xuat(a, n);

	cout << "\nCac so co tan cung la 5 la: ";
	cout << DemGiaTri(a, n, x);
	return 0;
}


int Nhap(float a[], int& n)
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
int Xuat(float a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i <= (n - 1); i++)

		cout << " " << a[i];
	return 0;
}

int DemGiaTri(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		while (a[i] == x)
			dem++;
	return dem;
}