#include <iostream>
#include <cmath>
using namespace std;
int Nhap(float[], int&);
int Xuat(float[], int);
float LonNhat(float[], int);
int DemLonNhat(float[], int);

int main()
{
	float a[1000];
	int n;

	Nhap(a, n);

	Xuat(a, n);

	cout << "\nSo cac so lon nhat la: ";
	cout << DemLonNhat(a, n);
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

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int DemLonNhat(float a[], int n)
{
	float ln = LonNhat(a, n);
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == ln)
			dem++;
	return dem;	
}