#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int ktTonTai(int[], int);


int main ()
{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\nTon tai nguyen to :";
    ktTonTai(a, n);

    return 0;
}

void Nhap(int a[], int&n)
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

bool ktNguyenTo(int k)
{
   int dem = 0;
   for (int i=1; i<=k; i++)
      if(k%i==0)
         dem++;
   if(dem==2)
      return true;
   return false;
}

int ktTonTai(int a[], int n) 
{
   int flag = 0;
   for (int i=0; i<n; i++)
   if (ktNguyenTo(a[i]) == true) 
   flag = 1;
   cout << ktTonTai;
   return flag;
}