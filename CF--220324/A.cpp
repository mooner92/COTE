#include <iostream>
#include <cmath>
#include <algorithm>
//#include <vector>
using namespace std;
using ll=long long;
//vector<ll> s;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        ll s[100009] = {0};
        for(int j=0;j<n;j++){
            ll a;
            cin>>a;
            s[j] = a;
        } //배열완성
        bool flag=false;
        ll t=0,j=0;
        ll k=0;
        for(t=0;t<n;t++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(abs(s[t]-s[k])+abs(s[k]-s[j])!=abs(s[t]-s[j])){
                        break;                     
                    }
                }
                if(k==n){
                    cout<<t+1<<" "<<j+1<<"\n";
                    flag=true;
                }
            }
            if(flag==true)
                break;
        }
            
    }
}
