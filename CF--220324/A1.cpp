#include <iostream>
#include <limits.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		//int minv = 1e9+1;
        int minv = INT_MAX;
		int maxv = -1;
		int mini;
		int maxi;
		for(int i=0; i < n; ++i) {
			int a;
			cin >> a;
			if(a > maxv) {
				maxi = i+1;
				maxv = a;
			}
			if(a < minv) {
				mini = i+1;
				minv =  a;
			}
		}
		cout << mini << " " << maxi << endl;
	}
 
}