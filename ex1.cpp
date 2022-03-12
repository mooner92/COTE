#include <iostream>
#include <algorithm>
using namespace std;
int a[4];



int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int a,b,c;
        cin>>a>>b>>c;
   // cout<<a[0];
    int g = a+b+c;
    if(g%3!=0){
        cout << "R\n";
    }
    else if(g%3==0){
        cout << "B\n";
    }
    }
    
    
}