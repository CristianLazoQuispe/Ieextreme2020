#include <bits/stdc++.h>
using namespace std;


const int mod=1e6+7;
const int maxn=1e5+7;
int t,n,m,k;
int c[500][500];
void makeC(){
    for(int i=0; i<500; i++){
        c[i][0]=c[i][i]=1;
        for(int j=1; j<i; j++)
            c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
    }}
int getC(int i,int j){
	return c[i][j];
}
int main() {
	makeC();
	int i,j;
	while(1){
		cin>>i>>j;
		cout<<i<<"C"<<j<<" "<<getC(i,j)<<endl;
	}
	return 0;
}

