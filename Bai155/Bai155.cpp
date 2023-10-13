#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DaoMang(int [],int);
void DaoChan(int [],int);

int main()
{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\n Dao nguoc mang ban dau:";
    DaoMang(a, n);

    return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}


void DaoMang(int a[], int n)
{
    int d = 0; 
    int c=n-1; 
    while (d < c) 
    {
      int temp = a[d];
      a[d] = a[c];
      a[c] = temp;
      d++;
      c--; 
    }
}

void DaoChan(int a[], int n) 
{
   int b[100];
   int k;
   k = 0;
   for (int i=0; i<n; i++)
      if (a[i] % 2 == 0)
         b[k++] = a[i];
   DaoMang(b, k);
   k = 0;
   for (int i=0; i<n; i++)
   if (a[i] % 2 == 0)
      a[i] = b[k++];
}