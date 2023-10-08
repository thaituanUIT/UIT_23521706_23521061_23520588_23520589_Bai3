#include <iostream>
#include <cmath>
#include <random>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	cout << "Mang mot chieu cac so thuc tu [-100;100] la: ";
	Xuat(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100 + (rand() / (RAND_MAX / (100 - (-100))));
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= (n - 1); i++)
		cout << setprecision(5) << setw(10) << a[i];
}