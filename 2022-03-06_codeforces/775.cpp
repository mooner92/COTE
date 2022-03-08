#include <iostream>
using namespace std;
int main(){
    int repeat;
    cin >> repeat;
    for(int i=0;i<repeat;i++){
        int n,k[105] = {6};
        cin >> n;
        for(int c=0;c<n;c++){
            int a;
            cin >> a;
            k[c] = a;
        }
        int coin=0,tmp=0;
        for(int j=0;j<n;j++){
            if(k[j]==k[j+1] && k[j]==1){ //1에서 1로 넘어갈 때
                
            }
            else if(k[j]==k[j+1] && k[j]==0){ //0에서 0으로 넘어갈 때
            tmp++;
            }
            else if(k[j]!=k[j+1] && k[j]==1){  //1에서 0으로 넘어갈 때
            tmp++;
            }
            else if(k[j]!=k[j+1] && k[j]==0){ //0에서 1로 넘어갈 때
            tmp++;
            coin+=tmp;     //coin에 tmp값 저장해줌
            tmp=0;         //tmp초기화

            }
            
        }
        if(coin==0){
            cout <<"0"<<endl;
        }
        else if(coin!=0) cout <<coin<<endl;
        


    }
}