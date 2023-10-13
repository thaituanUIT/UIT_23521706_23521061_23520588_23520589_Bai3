#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktKhong(int [],int);

int main ()
{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\nTon tai khong :";
    ktKhong(a, n);

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

int ktKhong (int a[], int n) 
{
    int flag = 0;
    for (int i=0; i<=n-1; i++)
      if (a[i] == 0)
         flag = 1;
    cout << ktKhong;
   return flag;
}