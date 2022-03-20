#include <iostream>
using namespace std;
int main(){
    int q,w;
    cin>>q>>w;   //q,w를 입력받음
    int** arr = new int*[q];
    for(int i=0;i<q;i++){
        arr[i] = new int[w];   //q,w를 사용한 이중배열의 동적할당
    }
    
}