#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;

    vector<int> dp(n+1,0);

    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    // Please write your code here.
    for(int i=4;i<=n;i++)
    {
        dp[i] = (dp[i-2]+ dp[i-3])%10007;
    }

    cout <<dp[n];
    return 0;
}



/*


*/