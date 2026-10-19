#include <iostream>
#include <climits>

using namespace std;

int n, k;
int coins[10];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Please write your code here.
    int cnt=0;
    int min_cnt=INT_MAX;

int index =n-1;

//cout << 
while(k>0)
{
    cnt +=(k/coins[index]);

    k%=coins[index];
    
    index--;
}

cout << cnt;


    return 0;
}
