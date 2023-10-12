#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int& );
void Xuat(int[], int );
int HangChuc(int);
int TongGiaTri(int[],int);

int main ()
{
    int a[10000];
    int n;

    Nhap(a,n);  

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
    cout<< setw(10) << setprecision(3) << a[i];
}

int HangChuc(int n)
{
   int t = abs(n);
   return (t / 10) % 10; 
}

int TongGiaTri(int a[], int n)
{
    int s = 0;
      for (int i=0; i< n; i++) 
    {
       if (HangChuc(a[i]) == 5)
         s += a[i];
    }
    cout << s;
    return s; 
}