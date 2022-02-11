#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        int flag = 0;
        int index = -1;
        for(int i=0; i<n; i++){
            if(arr[i]==i+1){
                flag = 1;
                index = i;
                break;
            }
        }

        if(flag==0){
            cout<<0<<endl;
        }

        else{
            int count = 0;
            int mini = -1;
            for(int i=index; i<n; i++){
                if((i+1)-arr[i]==(mini)){
                    count++;
                    mini--;
                }
            }

            cout<<count+1<<endl;
        }


    }
    return 0;
}
