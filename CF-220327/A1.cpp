#include <iostream>
using namespace std;
int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/

    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int q;
        cin>>q;
        if(q==1){
            cout <<"1\n";
            continue;
        }
        else if(q==2){
            cout <<"2\n";
            continue;
        }
        else if(q==3){
            cout <<"21\n";
            continue;
        }
        int re;
        re = q/3;
        if(q%2==0){
            if(q%3==0){
                for(int j=0;j<re;j++)
                cout<<"21";   //쭉 출력
            }
            else if(q%3!=0){
                if(q%3==1){
                    for(int j=0;j<re;j++)
                        cout<<"12";
                }
                else if(q%3==2){
                    for(int j=0;j<re;j++)
                        cout<<"21";
                }
            }
            
        }
        if(q%2==1){
            if(q%3==0){
                for(int j=0;j<re;j++)
                        cout<<"21";
            }
            else if(q%3!=0){
                if(q%3==1){
                    for(int j=0;j<re;j++)
                        cout<<"12";
                }
                else if(q%3==2){
                    for(int j=0;j<re;j++)
                        cout<<"21";
                }
            }

        }
        if(q%3==0){
            continue;
        }
        else if(q%3==1){
            cout <<"1\n";
        }
        else if(q%3==2)
            cout<<"2\n";

    }


}
