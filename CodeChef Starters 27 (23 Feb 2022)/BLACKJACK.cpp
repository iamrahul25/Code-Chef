#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int c = 21 - (a+b);
	    
	    if(c>10){
	        cout<<-1<<endl;
	    }
	    
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}
