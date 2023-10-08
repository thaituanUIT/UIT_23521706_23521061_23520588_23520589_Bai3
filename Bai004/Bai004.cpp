#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	string filename;
	Nhap(filename, a, n);
	cout << "Phan tu trong file la: ";
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= (n - 1); i++)
		fi >> a[i];
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= (n - 1); i++)
		cout << setw(10) << a[i];
}