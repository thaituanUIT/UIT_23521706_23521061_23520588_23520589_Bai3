#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
int TongChinhPhuong(int [],int);

int main ()
{
    int a[10000];
    int n;

    Nhap(a,n);  

    cout << "\nTong cac gia tri chinh phuong la :";

    TongChinhPhuong(a,n);
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

bool ktChinhPhuong(int n) 
{
for(int i=1;(i*i) <= n;i++)
      if (i * i == n)
         return true;
   return false;
}

int TongChinhPhuong (int a[], int n) 
{
    int s = 0;
    for (int i=0; i < n; i++)
       if (ktChinhPhuong(a[i])) 
         s += a[i];
    cout << s ;
    return s; 
}