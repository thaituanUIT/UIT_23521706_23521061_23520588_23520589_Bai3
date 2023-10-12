#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[],int);
int TimViTri(float[],int);

int main ()
{
    float a[10000];
    int n;

    Nhap(a,n);

    cout << "\nVi tri la :";

    TimViTri(a,n);
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

int TimViTri(float a[], int n)
{
    int lc = 0;
    for (int i=0; i<n; i++)
      if (a[i] < a[lc])
         lc = i;
    cout << lc ;
    return lc; 
}