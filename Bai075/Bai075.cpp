#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float);
void Xuat(float[],int, float);
float XaNhat(float [],int, float);

int main ()
{
    float a[10000];
    int n;
    float x;

    Nhap(a,n,x);

    cout << "\nGia tri la :";

    XaNhat(a,n,x);
    return 0;
}

void Nhap(float a[],int &n, float x)
{
    cout << "Nhap so phan tu :";
    cin >> n;
    cout << " Nhap x : ";
    cin >> x;

    for (int i = 0 ; i < n ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a[i];
    }
}

void Xuat(float a[], int n, float x)
{
    for(int i=0; i < n ; i++) 
    cout<< setw(3) << setprecision(3) << a[i];
}

float XaNhat(float a[], int n, float x)
{
   float lc = a[0];
   for (int i=0; i<n; i++)
      if (abs(a[i] - x) > abs(lc - x)) 
          lc = a[i];
   cout << lc ;
   return lc; 
}