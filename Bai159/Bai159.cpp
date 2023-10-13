#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DichPhai(float [],int);

int main ()

{
    float a[10000];
    int n;
    Nhap(a, n);

    cout << "\n Dich phai la :";
    DichPhai(a, n);

    return 0;
}

void Nhap(float a[], int&n)
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

void DichPhai(float a[], int n)
{
    float temp = a[n - 1]; 
    for(int i=n-1;i>=1;i--)
         a[i] = a[i - 1];
      a[0] = temp;
      cout << DichPhai;
}