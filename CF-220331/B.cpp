#include <iostream>
#include <queue>
using ll=long long;
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int re;
        bool T = false;
        //cout<<"check";
        cin>>re;
        priority_queue<ll> q;    //내림차순정렬의 우순큐
        for(int j=0;j<re;j++){
            ll a;
            cin>>a;
            q.push(a);
        }  //우순큐 완성
        cout<<"check";
        if(q.size()==1){
            if(q.top()==1){
                cout<<"yes\n";
                T = true;
            }
            else
                cout<<"NO\n";
                T = true;
        }
        
        while(T==false){
            ll a = q.top();
            q.pop();
            if(a-q.top()>=2){ //a와 q.top이 2이상 차이나면(최대값과 최소값이)
                cout<<"NO\n";
                break;
            }
            else if(a-q.top()==1)
                q.push(a-1);
            if(q.top()==0){
                cout<<"yes\n";
                break;
            }
        }
        
        
    }
    
}