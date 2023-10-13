#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&, float&);
void Xuat(float[],int, float, float);
float LonNhat(float [], int);
float NhoNhat(float [], int);
void TimDoan(float[], int, float&, float&);

int main ()
{
    float a[10000];
    int n;
    float x,y;
    Nhap(a,n,x,y);

    cout <<"["<<NhoNhat(a,n)<<","<<LonNhat(a,n)<<"]";
    return 0;
}

void Nhap(float a[],int &n, float &x, float &y)
{
    cout << "Nhap so phan tu :";
    cin >> n;

    for (int i = 0 ; i < n ; i++ )
    {
        cout << "Nhap a[ " << i << "] :";
        cin >> a[i];
    }
}

void Xuat(float a[], int n, float &x, float &y)
{
    for(int i=0; i < n ; i++) 
    cout<< setw(3) << setprecision(3) << a[i];
}

float LonNhat(float a[], int n)
{
	float lc=a[0];
	for (int i=0; i<n; i++)
	if (lc<a[i])
	lc=a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	float lc=a[0];
	for (int i=0; i<n; i++)
	if (lc>a[i])
	lc=a[i];
	return lc;
}
void TimDoan(float a[], int n, float x, float y)
{
	x= NhoNhat(a,n);
	y= LonNhat(a,n);
}