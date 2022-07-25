#include <iostream>
#define int long long int
using namespace std;

signed main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	   
	   int x = m - ((m/n) * n);
	   
	   int maxx = 0;
	   int p,q;
	   
	   for(int i=n; i<=n+x; i++){
	       int a = i;
	       int b = (m/i) * i;
	       
	       
	       if(abs(a-b)>=maxx){
	           p = a;
	           q = b;
	           maxx = abs(a-b);
	       }
	   }
	   
	   cout<<p<<" "<<q<<endl;
	}
	return 0;
}
