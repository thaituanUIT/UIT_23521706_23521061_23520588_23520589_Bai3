#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[],int);
float TimX(float[], int);

int main ()
{
    float a[10000];
    int n;
    Nhap(a,n);

    cout <<"["<< TimX(a,n)<<","<< TimX(a,n)<<"]";
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

float TimX(float a[], int n) 
{
   float lc = abs(a[0]);
   for (int i=0; i<n; i++)
      if (abs(a[i]) > lc)
         lc = abs(a[i]);
    return lc;
}
