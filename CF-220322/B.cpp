#include <iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n,b,x,y;  //tmp는 척도로 쓸 예정   sum은 출력값
        long long tmp=0,sum=0;
        cin>>n>>b>>x>>y;
        for(int j=0;j<n;j++){
            if((tmp+x)>b){   //tmp+x가 b를 초과하는 경우 tmp-y를 실행
                tmp-=y;
                sum+=tmp;
                //cout <<sum<<"\n";
            }
            else{
                tmp+=x;      //tmp+x가 b이하라면 x를 더한 값을 tmp에 저장 후 다시 루프
                sum+=tmp;
                //cout <<sum<<"\n";
            }
        }
        cout << sum<<"\n";
    }
    
}