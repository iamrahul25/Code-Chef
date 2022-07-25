#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int isSorted(int arr[], int n){
    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;
    return isSorted(arr, n - 1);
}


int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];
        int sorted[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
            sorted[i] = arr[i];
        }

        sort(sorted, sorted+n);

        // printarr(arr,n);
        // printarr(sorted,n);

        int i,j,l;
        i = 0;
        j = 0;
        l = 0;

        int temp_arr[n];

        while((j<n) and (i<n)){
            if(arr[i]!=sorted[j]){
                temp_arr[l] = arr[i];
                l++; i++;

            }else{
                i++; j++;
            }
        }

        string ans = "NO";

        if(isSorted(temp_arr, l)){
            ans = "YES";
        }
        else{
            ans = "NO";
        }

        cout<<ans<<endl;

        // printarr(temp_arr,l);
        // cout<<endl;

    }


    return 0;
}
