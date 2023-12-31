#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float[], int);

int main ()
{
    float a[10000];
    int n;

    Nhap(a,n);  

    cout << "\nTong cac gia tri la :";

    TongCucTieu(a,n);
    return 0;
}

void Nhap(float a[], int &n)
{
    cout << "Nhap so phan tu :";
    cin >> n;

    for (int i = 0 ; i < n ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a[i];
    }
}

void Xuat(float a[], int n)
{
    for(int i=0; i < n ; i++) 
    cout<< setw(3) << setprecision(3) << a[i];
}
 
float TongCucTieu (float a[], int n) 
{
   float s = 0;
   if (n == 1)
     s += a[0]; 
   for(int i=1; i <= n-2; i++)
    if (a[i] < a[i + 1] && a[i] < a[i - 1]) 
         s += a[i];
    if(a[n-1]<a[n-2]) 
      s += a[n - 1];
cout << s;
return s; 
}