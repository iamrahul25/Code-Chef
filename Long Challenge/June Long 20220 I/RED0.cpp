#include <iostream>
using namespace std;
#define ll unsigned long long int


int main(){

    int t;
    cin>>t;

    while(t--){

        ll a,b;
        cin>>a>>b;

        if(a==b){
            cout<<a<<endl;
        }
        
        else if(a==0 or b==0){
            cout<<-1<<endl;
        }

        else{
            ll minn = min(a,b);
            ll maxx = max(a,b);

            ll x = 0;
            while(minn*2 < maxx){
                minn = minn*2;
                x++;
            }

            // cout<<"count: "<<x<<endl;

            ll ans = x + maxx + 1;
            cout<<ans<<endl;
        }

    }

    return 0;
}
