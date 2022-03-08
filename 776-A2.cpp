#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int re;
    cin >>re;
    for(int i=0;i<re;i++){
        int a,b,k;
        int max=0;
        cin>>a>>b>>k;
        vector<int> f;
        for(int j=a;j<=b;j++){
            double y;
            double q=k*1.0,w=j*1.0;
            y = floor(w/q)+ceil(j%k);
            cout <<floor(w/q) << " " <<ceil(j%k) << endl;

        }
    }
}