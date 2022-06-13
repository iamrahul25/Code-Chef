#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n%2==0){
            for(int i=(n/2)+1; i<=n; i++){
                cout<<n-i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }

        else{
            for(int i=(n/2)+1; i<n; i++){
                cout<<i<<" "<<n-i<<" ";
            }
            cout<<n<<endl;
        }

    }
    
    return 0;
}
