#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ChanVeDau(int [], int); 
void LeVeCuoi(int [], int);
void ChanDauLeCuoi(int [],int);

int main ()

{
    int a[10000];
    int n;
    Nhap(a, n);

   cout << ChanVeDau;
   cout << LeVeCuoi;

    return 0;
}

void Nhap(int a[], int&n)
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

void ChanVeDau(int a[], int n)
{
   int vt = 0;
   for (int i=0; i<n; i++)
   if (a[i] % 2 == 0 && a[i] != 0)
 {
         int temp = a[i];
         a[i] = a[vt];
         a[vt] = temp;
         vt++;
 }
}

void LeVeCuoi(int a[], int n) 
{
    int vt=n-1; 
    for(int i=n-1;i>=0;i--)
    if (a[i] % 2 != 0)
    {
        int temp = a[i];
        a[i] = a[vt];
        a[vt] = temp;
        vt--;
    }
}

void ChanDauLeCuoi(int a[], int n) 
{
   ChanVeDau(a, n);
   LeVeCuoi(a, n);
}
