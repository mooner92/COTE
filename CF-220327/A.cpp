#include <iostream>
#include <string>
using namespace std;

size_t cnt(char c, string &str)
{
    size_t count = 0;

    for (char i : str)
        if (i == c)
            count++;

    return count;
}

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        string s;
        int n;
        cin>>n;
        getline(cin,s);
        if(s.size()==1)
            cout<<"1\n";  //사이즈가 1이면 1한명만 더해주면 됨
        
        
    }
}