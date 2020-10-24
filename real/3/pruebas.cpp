#include <bits/stdc++.h>

using namespace std;
#define PI 3.14159265
double f(double x){
    return(x > 0 ? x : (2*PI + x)) ;
}
pair <double, double> m1h, m1l, m2h, m2l; 
int t,n;
int main() {
    double a[100005], b[100005]; int y[100005];
    int t, n,y1,y2;
    cin >> t;
    while(t--){
        double lmin = 100000, lmax = -100000, hmax = -100000, hmin = 100000;
        cin>>n;
        y1 = 0;
        y2 = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i]>>b[i]>>y[i];
            if(y[i] == -1){
                y1+=1;
                lmin = min(f(atan2(b[i], a[i])), lmin);
                lmax = max(f(atan2(b[i], a[i])), lmax);
                /*
                if(m1h.second*a[i] >= m1h.first*b[i]){
                    m1h.first = a[i];
                    m1h.second = b[i];
                }
                if(m1l.second*a[i] <= m1l.first*b[i]){
                    m1l.first = a[i];
                    m1l.second = b[i];
                }*/
            }
            else {
                /*
                if(m2h.second*a[i] >= m2h.first*b[i]){
                    m2h.first = a[i];
                    m2h.second = b[i];
                }
                if(m2l.second*a[i] <= m2l.first*b[i]){
                    m2l.first = a[i];
                    m1l.second = b[i];
                }
                */
                hmin = min(f(atan2(b[i], a[i])), hmin);
                hmax = max(f(atan2(b[i], a[i])), hmax);
            }
            
        }
        
        //cout<<hmax<<" "<<hmin<<endl;
        //cout<<lmax<<" "<<lmin<<endl;
        if(max(lmin, hmin) <= min(lmax, hmax)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    } 

    // J = y (1-wx)
    return 0;
}


####################
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
            if(w/p>=n)
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}  