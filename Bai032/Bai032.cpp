#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
    float a [1000];
    int n;

    Nhap (a, n);
    
    cout << "\nCac cap gia tri thoa man la :" ;
    LietKe(a,n);

    return 0;
}
void Nhap(float a[], int &n)
{
    cout << "Nhap n :";
    cin >> n;

    for (int i = 0 ; i <= (n-1) ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a [i];
    }
}
void Xuat(float a[], int n)
{
    for(int i=0; i <= (n-1); i++) 
    cout<<setw(3)<<setprecision(3)<<a[i];
}

void LietKe(float a[], int n)
{
    for (int i=0; i<=n-1; i++)
      for (int j=0; j<=n-1; j++)
        for (int k=0; k<=n-1; k++)
          if(i!=j && j!=k && i!=k
           a[i] == a[j] + a[k])
            
                cout << "("<<a[i]<<","<<a[j];
                cout << ","<<a[z]<<")"<<endl;
            }
}