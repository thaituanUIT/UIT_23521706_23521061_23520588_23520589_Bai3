#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[1000];
	int n;
	Nhap(a, n);

	Xuat(a, n);

	cout << "\nCac so am trong mang la: ";
	LietKe(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= (n - 1); i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i <= (n - 1); i++)

		cout << " " << a[i];
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= (n - 1); i++)
	{
		if (a[i] < 0)
			cout << setw(3) << a[i];
	}
}
