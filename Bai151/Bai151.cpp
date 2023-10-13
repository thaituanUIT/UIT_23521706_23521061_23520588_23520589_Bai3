#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DuaVeDau(int[], int);

int main ()

{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\nSo chia het cho 3 la:";
    DuaVeDau(a, n);

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

void DuaVeDau(int a[], int n)
{
   int vt = 0;
   for (int i=0; i<n; i++)
      if (a[i] % 3 == 0)
    {
         int temp = a[i];
         a[i] = a[vt];
         a[vt] = temp;
         vt++;
    }
}
