#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);

int main ()
{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\nSo chan lon nhat la :";
    TimGiaTri(a, n);

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

int LeDauTien(int a[], int n) 
{
   for (int i=0; i<n; i++)
      if (a[i] % 2 != 0)
         return a[i];
   return 0;
}

int LeNhoNhat (int a[], int n) 
{
   int lc = LeDauTien(a, n);
   if (lc == 0)
      return 0;
   for (int i=0; i<n; i++)
   if (a[i] % 2 != 0 && a[i] < lc) 
      lc = a[i];
    cout << lc;
   return lc; 
}

int TimGiaTri(int a[],int n) 
{
   int lc = LeNhoNhat(a,n);
   if(lc==0)
   cout << lc;
      return -1;
   return lc-1;
}