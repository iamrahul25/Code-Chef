#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, p;
	    cin>>n>>p;
	    
	    int x = n/6;
	    
	    if(n%6!=0){
	        x++;
	    }
	    
	    cout<<x*p<<endl;
	}
	return 0;
}
