#include<iostream>

using namespace std;

long long fibonacci(int n){
	if (n == 1 || n == 2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	cin >> n;
	for(int i=2;i<=n;i++){
		if(n<=30) cout << fibonacci(i) << " ";
	else {
	cout<<"n vuot qua 30";
	break;
	}
	}
}
