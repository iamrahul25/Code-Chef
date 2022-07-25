#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,n;
	    
	    cin>>a>>b>>n;
	    
	    
	    if(a%b==0){
	        cout<<-1<<endl;
	    }
	    
	    else{
	        
	        int steps = n/a;
	        if(n%a!=0){
	            steps++;
	        }
	        
	        int ans = -1;
	        for(int i=steps; (i*a)<=INT_MAX; i++){
	            if((i*a)%b!=0){
	                ans = i*a;
	                break;
	            }
	        }
	        
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
