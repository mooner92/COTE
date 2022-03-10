#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int a,cnt1=0,cnt2=0;
        cin >>a;
        vector<int> k1;
        vector<int> k2;
        for(int j=0;j<a;j++){
            int y;
            cin >>y;
            k1.push_back(y);
            if(j>0){
                if(k1[j]==k1[j-1]){
                    cnt1++;
                }
            }
        }    //첫째줄 배열 값 받아줌
        for(int j=0;j<a;j++){
            int y;
            cin >>y;
            k2.push_back(y);
            if(j>0){
                if(k2[j]==k2[j-1]){
                    cnt2++;
                }
        }    //둘째줄 배열 값 받아줌
        sort(k1[3],k1[3]+a-3);
        

    }
}