#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int ans = (abs(a-b)/2) + abs(a-b)%2;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
