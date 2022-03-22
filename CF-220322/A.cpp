#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int p,q;
        cin>>p>>q;
        double w = sqrt(pow(q,2)+pow(p,2));  //대각선의 길이
        int e = sqrt(pow(q,2)+pow(p,2)); //int 형식은 내림을 사용함
        //cout <<w<<" "<<e<<"\n";
        if(w==e){  //라면 한번의 계산으로 가능함
            if(q==0 && p==0){
                cout <<"0\n";
                
            }
            else cout <<"1\n";
        }
        else 
            cout<<"2\n";

    } 
} //accepted
