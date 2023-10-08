#include <iostream>
#include <cmath>
using namespace std;
int Nhap(int[], int&);
int Xuat(int[], int);
int DemGiaTri(int[], int);

int main()
{
	int a[1000];
	int n;

	Nhap(a, n);

	Xuat(a, n);

	cout << "\nCac so chia het cho 7 la: ";
	cout << DemGiaTri(a, n);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= (n - 1); i++)
	{
        if (a[i] > 0 && a[i] % 7 == 0)
			dem++;
	}
	return dem;
}