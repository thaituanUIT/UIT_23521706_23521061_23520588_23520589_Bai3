#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);

	Xuat(a, n);

	cout << "\nCac so chan trong mang la: ";
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= (n - 1); i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i <= (n - 1); i++)
		
		cout << " " << a[i];
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= (n - 1); i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(3) << a[i];
	}
}
