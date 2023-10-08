#include <iostream>
#include <cmath>
using namespace std;
int Nhap(int[], int&);
int Xuat(int[], int);
bool KtDoiXung(int);
int DemDoiXung(int[], int);

int main()
{
	int a[1000];
	int n;
	
	Nhap(a, n);

	Xuat(a, n);

	cout << "\nSo cac so doi xung la: ";
	cout << DemDoiXung(a, n);

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

bool KtDoiXung(int n)
{
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KtDoiXung(a[i]))
			dem++;
	}
	return dem;
}