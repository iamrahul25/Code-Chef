#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int b,c;
	    cin>>b>>c;
	    
	    int hcf = __gcd(b,c);
	    
	    int ans = c/hcf;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
