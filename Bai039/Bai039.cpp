#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main ()
{
    int a[10000];
    int n;

    Nhap(a,n);  
    Xuat(a,n);

    cout << "\nTong cac gia tri la :";

    TongGiaTri(a,n);
    return 0;
}

void Nhap(int a[], int &n)
{
    cout << "Nhap so phan tu :";
    cin >> n;

    for (int i = 0 ; i < n ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a[i];
    }
}

void Xuat(int a[], int n)
{
    for(int i=0; i < n ; i++) 
    cout<< setw(3) << setprecision(3) << a[i];
}

int ChuSoDau(int n) 
{
   int t = abs(n);
   while (t >= 10)
      t /= 10;
   return t;
}

int TongGiaTri (int a[], int n) 
{
    int s = 0;
      for (int i=0; i<=n-1; i++)
        if (ChuSoDau(a[i]) % 2 == 0)
          s += a[i];
    cout << s;
    return s; 
}