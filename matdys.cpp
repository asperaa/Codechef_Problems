#include <bits/stdc++.h>

using namespace std;

unsigned long long n,k,sol;
int T;
unsigned long long pw[67];
void pre()
{
	pw[0]=1;
	for(int i=1;i<65;i++) pw[i]=pw[i-1]*2;
}

int main(){
	cin>>T;

	pre();
	while(T--){
		cin>>n>>k;
		sol=0;
		for(;n>=1;n--){
			if(k%2){
				sol +=pw[n-1];
			}
			k/=2;
		}
		cout<<sol<<endl;
	}
}