#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    
	    float p1 = (n/a) * x;
	    float p2 = (n/b) * y;
	    
	    if(p1==p2){
	        cout<<"ANY"<<endl;
	    }
	    else if(p1<p2){
	        cout<<"PETROL"<<endl;
	    }
	    else{
	        cout<<"DIESEL"<<endl;
	    }
	}
	return 0;
}
