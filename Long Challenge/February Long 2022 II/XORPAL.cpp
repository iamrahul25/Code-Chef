#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int zero = 0;
        int one = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }

        if(s.length()<=2){
            cout<<"YES"<<endl;
        }

        else if(s.length()%2==0){
            if((one%2==1) and (one!=zero)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

        else{
            
            cout<<"YES"<<endl;
            
        }
    }

    return 0;
}
