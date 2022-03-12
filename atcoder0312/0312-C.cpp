#include <iostream>
#include <string>
using namespace std;
int main(){
    int tc;
    string s;
    cin>>tc;
    int z=tc+1;
    long long g[z][3];   //2중배열 생성
    for(int i=0;i<tc;i++){
        int x,y;
        cin>>x>>y;
        g[i][0] = x;
        g[i][1] = y;  //한 컨테이너 안에 두개 값을 반복적으로 넣어줌
    }
    cin >> s;
   
        
    for(int i=0;i<tc;i++){
        for(int j=0;j<tc;j++){ // y좌표 탐색을 위한 배열
            if((g[i][1] == g[j][1]) && i!=j){  //y값이 같을때 x값 비교를 해줬어야함 --1차오답--
                if(g[i][0]<g[j][0]){  //i가 j보다 작으면 i-0이 R이고 j-0이 L이어야 yes
                    if(s[i]=='R' && s[j]=='L'){
                        cout<<"YES";
                        return 0;
                    }
                }
                else if(g[i][0]>g[j][0]){ //i가 j보다 크면 i-0이 L이고 j-0이 R이어야 yes
                    if(s[i]=='L' && s[j]=='R'){
                        cout<<"YES";
                        return 0;
                    }
                }

            }
        }
    }
    cout << "NO";
    

}