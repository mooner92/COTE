#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int re;
    cin >> re;
    for(int i=0;i<re;i++){
        char g[50];
        char c;
        int stan=1;
        cin>>g;
        cin>> c;
        int j;
        for(j=0;j<strlen(g);j++){
            if(g[j]==c){
                if(stan!=0){
                cout <<"YES"<<endl;
                break;
                } 
            }
        }
        if(j==strlen(g)){
            cout << "NO"<<endl;
        }
        
        
    }
}