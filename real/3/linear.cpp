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
            for(int i = 0; i < n; i++){
                double value,value2;
                //cout<<i<<endl;
                cin>>a[i]>>b[i]>>y[i];
                if(y[i] == -1){
                    y1+=1;
                    value = f(atan2(b[i], a[i])); 
                    value2 = -2*PI+value; 
                    lmin = min(value, lmin);
                    lmax = max(value, lmax);
                    lnmax = max(value2,lnmax);
                    //cout<<a[i]<<" "<<b[i]<<" "<<value<<" "<<value2<<endl;
                    
                }
                else {
                    y2+=1;
                    double value = f(atan2(b[i], a[i])); 
                    value2 = -2*PI+value; 
                    hmin = min(value, hmin);
                    hmax = max(value, hmax);
                    hnmax = max(value2,hnmax);
                    //cout<<a[i]<<" "<<b[i]<<" "<<value<<" "<<value2<<endl;
                }
            }
            for(int i = 0; i < n; i++){
                double value,value2;
                if(y[i] == -1){
                    value = f(atan2(b[i], a[i])); 
                    value2 = -2*PI+value; 
                    if (value < lmin || value2<lnmax){
                        pos1=false;
                        //cout<<" tnr1 : "<<value<<" "<<lmin<<" "<<value2<<" "<<lnmax<<endl;
                    }
                }
                else {
                    value = f(atan2(b[i], a[i])); 
                    value2 = -2*PI+value; 
                    if (value < hmin || value2<hnmax){
                        pos2=false;
                        //cout<<" tnr2 : "<<pos2<<"  "<<value<<" "<<lmin<<" "<<value2<<" "<<lnmax<<endl;
                    }
                }
            }
            int cnt = 0;
            //cout<<lnmax<<" "<<lmin<<" "<<lmax<<" "<<hnmax<<" "<<hmin<<" "<<hmax<<" "<<pos1<<" "<<pos2<<endl;
            if (y1>2){
                if (!pos1){
                    lmin=lnmax;
                    lmax=lmin;
                }
            }
            if (y2>2){
                if (!pos2){
                    hmin=hnmax;
                    hmax=hmin;
                }
            }

            if(max(lmin, hmin) < min(lmax, hmax) ){
                cnt+=1;
                //cout<<lmax<<" "<<hmax<<"  : 1"<<endl;
            }
            if(max(lnmax, hmin) < min(lmin, hmax)){
                cnt+=1;
                //cout<<lnmax<<" "<<hmin<<" "<<lmin<<" "<<hmax<<"  : 2"<<endl;
            }
            if(max(lmin, hnmax) < min(lmax, hmin)){
                cnt+=1;
                //cout<<": 3"<<endl;
            }
            if(max(lnmax, hnmax) < min(lmin, hmin)){
                cnt+=1;
                //cout<<": 4"<<endl;
            }
            //cout<<pos1<<" "<<pos2<<" "<<cnt<<endl;
            if (y1==0 || y2==0)
                cout<<"YES"<<endl;
            else if (cnt==4)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    } 

    // J = y (1-wx)
    return 0;
}




