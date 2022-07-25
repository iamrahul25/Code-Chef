#include <iostream>
#include <vector>
#define int long long int
using namespace std;

int naturalsum(int n){
    return (n*(n+1))/2;
}

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
	    
	    int c = 0;
	    
	    vector <int> v;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]==0){
	            v.push_back(c);
	            c=0;
	        }
	        else{
	            c++;
	        }
	    }
	    
        if(arr[n-1]!=0){
	        v.push_back(c);
        }
	    
	    
	    int sum = 0;
	    for(int i=0; i<v.size(); i++){
	       // cout<<v[i]<<endl;
	       sum = sum + naturalsum(v[i]);
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
