#include <iostream>
using namespace std;

void quickSort(int *data, int start, int end) {
  if (start >= end) return;
  int pivot = start;  // 기준 값
  int i = start + 1;
  int j = end;

  while (i <= j) {
    while (data[i] <=
           data[pivot])  // 키 값보다 큰 값 만날때까지 오른쪽으로 이동
      i++;
    while (data[j] >= data[pivot] &&
           j > start)  // 키 값보다 작은 값 만날 때까지 왼쪽으로 이동
      j--;
    if (i > j)  //현재 엇갈린 상태면 pivot 값 교체
    {
      int temp = data[j];
      data[j] = data[pivot];
      data[pivot] = temp;
    } else {
      int temp = data[j];
      data[j] = data[i];
      data[i] = temp;
    }
    // 재귀 호출
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
  }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int a[4];
        int tmp=0;
        cin>>a[0]>>a[1]>>a[2];
        //cout<<"\n";
        quickSort(a,0,2);
        while(1){
            if(a[1]==0) break;
            a[2]-=1;
            a[1]-=1;
            a[0]+=1;
            tmp+=1;
            
        }
        if(tmp%2==0){
            cout<<"R\n";
        }
        else
        cout<<"B\n";
    }
}

