#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int TongDoiXung(int [],int);

int main ()
{
    int a[10000];
    int n;

    Nhap(a,n);  

    cout << "\nTong cac gia tri doi xung la :";

    TongDoiXung(a,n);
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

bool ktDoiXung(int n) 
{
   int t = abs(n);
   int dn = 0;
   while (t != 0)
   {
    dn = dn * 10 + t % 10;
    t /= 10; 
    }
    if (dn == abs(n))
      return true;
   return false;
}

int TongDoiXung (int a[], int n) 
{
    int s = 0;
    for (int i=0; i<=n-1; i++)
       if (ktDoiXung(a[i]))
         s += a[i];
    cout << s;
   return s;
}