#include <iostream>
using namespace std;
int main(){
    int re;
    cin >> re;
    for(int i=0;i<re;i++){
        char g[50];
        char c;
        int stan=0;
        cin>>g;
        cin>> c;
        int j;
       
        for(j=0;j<strlen(g);j++){
            if(g[j]==c){
                if(j%2==0){
                cout <<"yes"<<endl;
                break;}
                
            }
        }
        if(j==strlen(g)){
            cout <<"no"<<endl;
        }
    }
}  //acceted!