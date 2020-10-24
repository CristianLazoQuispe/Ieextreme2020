#include <bits/stdc++.h>
#define N 1000001
using namespace std;
long long int c,n,p,w;
long long int ranu[N];
int main() {
    cin >> c >> n >> p >> w;
    long long int cnt = 0;
    if (w<c)
        cout<<0<<endl;
    else{
        while(n>0 && w>0){
            n-=1;
            w-=c;
            cnt+=1;
            double division = 1.0*w/p;
            long long int rs = (int)w/p;
            //cout<<division<<" "<<rs<<endl;
            if (division>rs)
                rs+=1;
            if (rs==n){
                if(p>c)
                    break;                
            }
            if(rs>n)
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}  