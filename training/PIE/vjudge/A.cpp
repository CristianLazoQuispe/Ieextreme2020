// uva 10325
#include <bits/stdc++.h>
using namespace std;
const int N=20;
long long a[N];

long long mcm(long long a,long long b){
    return a*b/__gcd(a,b);}
int main()
{
    long long n,m,value;
    while(cin>>n>>m)
    {
    	for(long long i=0;i<m;i++){
    		cin>>value;
    		a[i] = value;
    	}
    	long long end=(1<<m);
    	long long sum=0;
    	for(long long i=1;i<end;i++)
    	{
    		long long tmp=1,num=0;
    		for(long long j=0;j<m;j++)
    		{
    			if((1<<j)&i){ 
    			    tmp=mcm(tmp,a[j]);
    		        num++;
    			}
    			if(tmp>n){ 
        			break;
    			}
    		}
    		//cout<<num <<": "<<i<<" "<<tmp<<endl;
    		if(num%2==1) sum+=n/tmp;
    		else{
    		    sum-=n/tmp;
    		} 
    	}
    	printf("%lld\n",n-sum);
    }
    return 0;
}
