#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DaoMang(float [],int);

int main ()

{
    float a[10000];
    int n;
    Nhap(a, n);

    cout << "\n Dao nguoc mang ban dau:";
    DaoMang(a, n);

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

void DaoMang(float a[], int n)
{
    int d = 0; 
    int c = n-1; 
    while (d < c) 
{
         float temp = a[d];
         a[d] = a[c];
         a[c] = temp;
         d++;
         c--;
        cout << d << c;
}
}