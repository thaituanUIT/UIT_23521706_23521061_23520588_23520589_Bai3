#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[],int);
float AmDau(float[], int);

int main ()
{
    float a[10000];
    int n;
    Nhap(a,n);

    cout << AmDau(a,n);
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

float AmDau(float a[], int n) 
{
   for (int i=0; i<n; i++)
      if (a[i] < 0)
         return a[i];
   return 0;
}