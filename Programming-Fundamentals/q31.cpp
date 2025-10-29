#include<iostream>
using namespace std;
int main() {
//	freopen("1.in","r",stdin);
//	int t;
//	cin>>t;
//	while (t--) {
	
		int n,m,x,y;
		 
		n = 9, m = 4;
		
		if(n < m) cout<<"NO"<<endl;
		if (n == m) cout<<"YES"<<endl;
		if(n % 3 != 0) cout<<"NO"<<endl;
		
		else if( n % 3 == 0) {
	//		for (int i = 0; i < n; i++) {
	//			
	//		}
			
			while (n < m) {
				
				if (n == m) {
					
					cout<<"YES"<<endl;
					break;
				}
				
				x = n / 3;
				y = x * 2;
				if (x == m || y == m) {
					cout<<"YES"<<endl;
					break;
				}
				n = y;
				if(n < m) {
					cout<<"NO"<<endl;
					break;
				}
			}
			while (n > 0) {
				
				if (n == m) {
					
					cout<<"YES"<<endl;
					break;
				}
				
				x = n / 3;
				y = x * 2;
				if (x == m || y == m) {
					cout<<"YES"<<endl;
					break;
				} 
				n = x;
				if(n < m) {
					cout<<"NO"<<endl;
					break;
				}
			}
		}
//	}
 
	return 0;
}