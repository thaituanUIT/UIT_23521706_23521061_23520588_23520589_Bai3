#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float [], int& );
void Xuat(float [], int );
float TongDuong(float a[], int n);

int main ()

{
    float a[10000];
    int n;

    Nhap(a,n);  

    cout << "\nTong cac phan tu la :";

    TongDuong(a,n);
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
    cout<< setw(10) << setprecision(3) << a[i];
}

float TongDuong(float a[], int n)
{
    float s = 0;
    for (int i=0; i< n; i++)
     if(a[i] > 0)
        s += a[i];
    cout << s;
    return s; 
}