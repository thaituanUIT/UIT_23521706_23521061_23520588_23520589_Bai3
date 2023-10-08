#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool KtToanLe(int);
void LietKe(float[], int);
//kiem tra toan le
int main()
{
	float a[1000];
	int n;
	Nhap(a, n);

	Xuat(a, n);

	cout << "\nCac so co chu so toan la so le trong mang la: ";
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

bool KtToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= (n - 1); i++)
	{
		if (KtToanLe(a[i]))
			cout << setw(3) << a[i];
	}
}
