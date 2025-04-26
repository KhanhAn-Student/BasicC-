#include <iostream>
#include <cmath>
using namespace std;

int snt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}

int main(){
    int n;
    cin >> n;
    if(n<2) cout<<"Khong co so nguyen to";
    else{
    for (int i = 1; i < n; i++){
		if (snt(i)) 
            cout << i << " ";
		}    	
} 
    return 0;
}
