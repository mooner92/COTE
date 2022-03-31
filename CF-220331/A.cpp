#include <iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int q,w;
        int sum=0;
        cin>>q>>w;
        if(q==0){
            cout<<"1\n";
        }
        else{
            sum+=q+(w*2)+1;
            cout<<sum<<"\n";
        }
    }
}