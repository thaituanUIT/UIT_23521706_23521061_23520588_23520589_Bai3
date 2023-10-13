#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void DuaVeCuoi(int [],int);

int main ()

{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\n Dua ve cuoi:";
    DuaVeCuoi(a, n);

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

bool ktNguyenTo(int k)
{
   int dem = 0;
   for(int i=1; i<=k; i++)
   if(k%i==0)
   dem++;
   if(dem==2)
      return true;
   return false;
}

void DuaVeCuoi(int a[], int n) 
{
    int vt=n-1; 
    for(int i=n-1;i>=0;i--)
    if (ktNguyenTo(a[i]))
    {
        int temp = a[i];
        a[i] = a[vt];
        a[vt] = temp;
        vt--;
    }
    cout << vt;
}