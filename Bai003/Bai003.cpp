#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void Nhap(string, int[], int&);
void Xuat(int[], int);

int main()
{ 
	int a[100];
	int n;
	string filename;
	Nhap(filename, a, n);
	cout << "Phan tu trong file la: ";
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= (n - 1); i++)
		fi >> a[i];
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= (n - 1); i++)
		cout << setw(10) << a[i];
}