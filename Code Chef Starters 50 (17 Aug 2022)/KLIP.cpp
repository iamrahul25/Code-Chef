#include <iostream>
#include <vector>
using namespace std;
#define int long long 

signed main()
{
    int t;
    cin >> t;
    while (t--){

        int n, k;
        cin >> n >> k;
        
        vector<int> arr(2*n,0);
        string s(n*2,'0');

        cin>>s;

        int c = 0;
        int end = n+1-k;
        
        for (int i = 0; i <end; i++)
        {
            if((c + s[i]) % 2 != 0){
                c++;
                int z = i + k - 1;
                arr[z] = 1;
            }

            c -= arr[i];
            s[i] = '0';
        }

        for (int i = end; i < n; i++)
        {
            s[i] = 48 + (s[i] + c) % 2;
            c -= arr[i];
        }

        cout<<s<<endl;
    }
}
