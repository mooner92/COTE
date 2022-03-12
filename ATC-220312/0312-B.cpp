#include <iostream>
#include <vector>
using namespace std;

int main(){
    int re,case1=0,case2=0;
    vector<long long> A;
    vector<long long> B;
    cin>>re;
    for(int i=0;i<re;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }  //A배열에 저장
    for(int i=0;i<re;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }  //B배열에 저장

    for(int i=0;i<re;i++){ //순차탐색 on
        for(int j=0;j<re;j++){
            if(i==j && A[i]==B[j]){
                case1+=1;
            }
            else if(i!=j && A[i]==B[j]){
                case2+=1;
            }
        }
    }
    cout <<case1<<"\n"<<case2;
}//accepted!