#include <iostream>
#include <algorithm>
#define int long long 
using namespace std;

signed main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int hcf = arr[0];
	    for(int i=0; i<n; i++){
	        hcf =  __gcd(hcf, arr[i]);
	    }
	    
	    cout<<hcf*n<<endl;
	    
	}
	return 0;
}
