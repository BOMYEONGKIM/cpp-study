#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int n;
vector<int> a;

int main() {
    cin >> n;

    a.assign(n,0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int sum =0;
    int max_sum=a[0];

    for(int i=0;i<n;i++)
    {

       // sum += a[i];


        if(sum < 0)
        {
              sum = a[i];


        }

        else
        sum+=a[i];

        if(max_sum<sum)
        max_sum=sum;
    }


    cout <<max_sum;
    return 0;
}
