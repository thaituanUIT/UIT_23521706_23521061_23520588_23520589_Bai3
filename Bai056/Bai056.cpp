#include <iostream>
#include <cmath>
using namespace std;
int Nhap(int[], int&);
int Xuat(int[], int);
bool KtHoanThien(int);
int DemHoanThien(int[], int);

int main()
{
	int a[1000];
	int n;

	Nhap(a, n);

	Xuat(a, n);

	cout << "\nSo cac so hoan thien la: ";
	cout << DemHoanThien(a, n);

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

bool KtHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KtHoanThien(a[i]))
			dem++;
	}
	return dem;
}