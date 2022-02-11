#include <iostream> 
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if((x*y)>=(a*b)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    
    return 0;
}
