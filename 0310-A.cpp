/*#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int tc;
    cin >>tc;
    for(int i=0;i<tc;i++){
        //코드 시작
        vector<int> a;
        int re;
        cin >> re;
        if(re==1){
            cout <<"1";
            return 0;
        }
        re = pow(2,re);
        int l=0;
        while(1){
            

        }
    }
}*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        long long a;
        cin >>a;
        cout <<pow(2,a)-1;
    }
}