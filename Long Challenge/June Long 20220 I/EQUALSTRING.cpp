#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        string s1, s2;

        int hash[26] = {0};

        cin>>n>>s1>>s2;

        for(int i=0; i<n; i++){
            if(s1[i]==s2[i]){
                s2[i]='_';
            }
        }

        //Hashing String2 
        for(int i=0; i<n; i++){
            if(s2[i]!='_'){
                hash[s2[i]-'a']++;
            }
        }


        int count = 0;
        //Counting Unique values in String2
        for(int i=0; i<26; i++){
            if(hash[i]>0){
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}
