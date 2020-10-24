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
    int t, n;
    int y1,y2;
    cin >> t;
    bool pos1,pos2;
    while(t--){
        pos1=true;
        pos2=true;
        double lmin = 100000, lmax = -100000,lnmax = -100000, hmax = -100000,hnmax = -100000, hmin = 100000;
        cin>>n;
        if (n==1){
            cout<<"YES"<<endl;
        }
        else{
            y1=0;
            y2=0;
            float theta = PI/1000;
            for(int i = 0; i < n; i++)
                cin>>a[i]>>b[i]>>y[i];
            for(float m=0;m < PI;m+=theta){
                float xu = sin(m);
                float yu = cos(m);
                //cout<<xu<<" "<<yu<<endl;
                for(int i = )
            }
        }
    } 

    // J = y (1-wx)
    return 0;
}




