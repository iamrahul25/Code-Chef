#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if((a-b)>=0){
	        cout<<a-b<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
