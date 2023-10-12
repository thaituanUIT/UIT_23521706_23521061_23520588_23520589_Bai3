#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[],int&, int[],int&);
void Xuat(int[],int, int[],int);
int DemXuatHien(int[],int,int[],int);

int main ()
{
    int a[1000];
    int b[1000];
    int n;
    int m;

    Nhap(a,n,b,m);

    cout << "\nSo lan xuat hien la :";

    DemXuatHien(a,n,b,m);
    return 0;
}

void Nhap(int a[],int &n, int b[], int&m)
{
    cout << "Nhap so phan tu :";
    cin >> n >> m;

    for (int i = 0 ; i < n ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a[i];
    }

    for (int i = 0 ; i < m ; i++)
    {
        cout << "Nhap b[ " << i << "] :";
        cin >> b[i];
    }
}

void Xuat(int a[], int n, int b[], int m)
{
    for(int i=0; i < n ; i++) 
    cout<< setw(3) << setprecision(3) << a[i];
}

int DemXuatHien(int a[],int n,int b[],int m) 
{
   if (n > m)
      return 0;
   int dem = 0;
   for(int vt=0; vt <= m - n ;vt++) 
    {
      int flag = 1;
      for (int i=0; i < n; i++)
        if (a[i]!= b[vt + i]) 
          flag = 0;
         if (flag == 1)
          dem++;
    }
    return dem; 
}
