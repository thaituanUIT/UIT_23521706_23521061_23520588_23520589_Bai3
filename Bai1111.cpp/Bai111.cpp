#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


	void lietke(float a[],int n)
	{
		for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		if (i!=j&&a[i]<=a[j])
		{
			cout <<"("<<a[i]<<", "<<a[j]<<"]";
		}
	}
	float a[1000000];
	int main(){
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		lietke(a,n);
		return 0;
	}