#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    
	    if(r/x <n){
	        cout<<-1<<endl;
	    }
	    else{
	        if(r/y>=n){
	            cout<<0<<" "<<n<<endl;
	        }
	        
	        else{
	            
	            int p = (r -  (x*n))/ abs(x-y);
	            cout<<n-p<<" "<<p<<endl;
	        }
	    }
	}
	return 0;
}
