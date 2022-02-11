#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int x;
        string s;

        cin>>x>>s;

        int chef = 0;
        int carlsen = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='C'){
                carlsen = carlsen + 2;
            }
            else if(s[i]=='N'){
                chef = chef + 2;
            }

            else{
                carlsen++;
                chef++;
            }
        }

        if(carlsen>chef){
            cout<<60*x<<endl;
        }

        else if(chef > carlsen){
            cout<<40*x<<endl;
        }

        else{
            cout<<55*x<<endl;
        }

    }


    return 0;
}
