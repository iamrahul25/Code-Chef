#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        long long int sum = 0;
        int maxm = 1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum = sum + arr[i];
            maxm = max(arr[i], maxm);
        }

        long long int mini = maxm;
        long long int sum1 = 0;
        for(int i=0; i<n; i++){
            sum1 = sum1 + arr[i];
            mini = min( (abs(sum1 -(sum - sum1))), mini);
        }   
        
        long long int ans;
        long long int sum2 = 0;
        
        for(int i=0; i<n; i++){
            sum2 = sum2 + arr[i];
            if( abs(sum2 - (sum - sum2)) == mini ){
                ans = max(sum2, (sum - sum2));
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
