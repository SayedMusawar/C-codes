#include<iostream>
using namespace std;
int main()
{
//	freopen("1.in","r",stdin);
	int test_cases;
	cin>> test_cases;
	while (test_cases--){
		int n,m;
		cin>>n>>m;
//		n = 18, m = 27;
		if ( n < m) {
			cout<<"NO"<<endl;	
		} 
		if ( n == m) {
			cout<<"YES"<<endl;	
		} 
		else if(n % 3 != 0)  {
			cout<<"NO"<<endl;	
		}
		
		else if(n % 3 == 0) {
			
			while (n > m) {
				
				if(n == m) {
					cout<<"YES"<<endl;
					break;
				}
				int x = n /3;
				int y = x * 2;
				
				if (x == m || y == m) {
					cout<<"YES"<<endl;
					break;	
				} 
				else if (  y < m) {
					cout<<"NO"<<endl;
					break;	
				}
				n = y;
			}
		}
	}
	return 0;
}