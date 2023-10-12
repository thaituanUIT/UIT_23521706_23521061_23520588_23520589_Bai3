#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float [], int&);
void Xuat(float[],int);
float LonNhat(float [],int);

int main ()
{
    float a[10000];
    int n;

    Nhap(a,n);

    cout << "\nGia tri lon nhat la :";

    LonNhat(a,n);
    return 0;
}

void Nhap(float a[],int &n)
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

float LonNhat(float a[], int n)
{
   float lc = a[0];
   for (int i=0; i<n; i++)
     if (a[i] > lc)
      lc = a[i]; 
    cout << lc;
    return lc;
}