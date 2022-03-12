#include <iostream>
#include <vector>
using namespace std;
int main(){
    int v,tf,tm,ts,tmp=0;
    char e[3] = {'F','M','T'};
    vector<int> t;
    cin>>v>>tf>>tm>>ts;
    t.push_back(tf);
    t.push_back(tm);
    t.push_back(ts);
    while(1){
        for(int i=0;i<3;i++){
            v-=t[i];
            if(v<0){
                tmp = i+1;
                break;
            }
        }
        if(tmp!=0){
            break;
        }
        
    }
    cout <<e[tmp-1];
} //accepted!