#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int TimGiaTri(int[],int);
void LietKe(int[], int);

int main ()
{
    int a[10000];
    int n;
    Nhap(a, n);

    cout << "\nGia tri xuat hien nhieu nhat la :";
    TimGiaTri(a, n);

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

int TanSuat(int a[], int n, int x) 
{
    int dem = 0;
    for (int i=0; i<=n-1; i++)
      if (a[i] == x)
         dem++;
    return dem; 
}

int TimGiaTri(int a[],int n) 
{ 
    int lc = a[0];
    for (int i=0; i <= n-1; i++)
    if(TanSuat(a,n,a[i])>TanSuat(a,n,lc)) 
    lc = a[i];
    cout << lc;
    return lc; 
}

void LietKe(int a[],int n)
{
    int lc = TimGiaTri(a,n); 
    int ts = TanSuat(a,n,lc); 
    for (int i=0; i<=n-1; i++) 
{
    int flag = 1;
    for (int j = 0; j <= i - 1; j++)
         if (a[j]==a[i])
            flag = 0;
        if(TanSuat(a,n,a[i])==ts && flag) 
        cout << a[i];
}
}