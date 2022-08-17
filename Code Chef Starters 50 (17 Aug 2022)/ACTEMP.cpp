#include <iostream>
using namespace std;

int main() {
	int tt;
	cin>>tt;
	
	while(tt--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(b>=a and b>=c){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
