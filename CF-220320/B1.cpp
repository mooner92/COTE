#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    //bool exit = false;
    for(int i=0;i<tc;i++){
        vector<char> t;
        vector<char>::iterator iter = t.begin();
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            t.push_back(s[j]);
        }   //t를 만들어줌
        
        int p = t.size();
        for(int j=0;j<p;p--){ //standard array position
            for(int h=0;h<t.size();h++){ //pivot
                    //같은곳에 있지 않을 때
                if(j!=h){
                    if(t[j]==t[h]){     //둘이 같으면
                        //s.erase(0,1); // 그 칸 지워줌
                        //s[j] = ' \b';
                        iter += j;
                        t.erase(iter+1);
                        break;
                    }
                }
                if(h==s.size()-1 /*&& s[j]!=s[h]*/){ //끝칸까지 왔고 j항이랑 h항이 다르면
                    break;
                }
                
            }
            /*if(exit==true)
                break;*/
        }  //같은문자 전부 제거했으면 
        //cout << s<<"\n";
        for(int i=0;i<t.size();i++){
            cout<<t[i];
        }
        cout <<"\n";
    }
}