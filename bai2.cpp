#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int n,max;
	cin>>n;
	int a[n];
	if(n<=0) cout<<"nhap lai so nguyen";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%3==0) {
		max=fmax(max,a[i]);    //fmax: lấy số lớn nhất trong các số trong ngoặc
		
		}
		
	}
		cout<<max;

}

