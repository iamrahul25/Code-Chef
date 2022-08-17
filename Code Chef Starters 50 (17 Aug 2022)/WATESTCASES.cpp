#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n; cin>>n;
	    
	    int arr[n];
	    int maxx = INT_MIN;
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        maxx = max(maxx, arr[i]);
	    }
	    
	    string s;  cin>>s;
	    
	    int minn = maxx;
	    for(int i=0; i<n; i++){
	        if(s[i]=='0'){
	            minn = min(minn, arr[i]);
	        }
	    }
	    
	    cout<<minn<<endl;
	}
	return 0;
}
