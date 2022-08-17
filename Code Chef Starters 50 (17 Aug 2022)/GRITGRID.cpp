#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n,m;
        int x,y;
        cin >> n >> m >> x >> y;

        n = n + m + x - 2;
        x = x + y;
        
        int flag = 1;
        if ((x%2) == 0 && (n%2)!=0){
            flag = 0;
        }
        
        if(flag){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
