#include <iostream>

using namespace std;

int n, t;
int u[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    // Please write your code here.
    while(t--)
    {
        int up_last = u[n-1];
        int down_last = d[n-1];

        for(int i=n-1;i>0;i--)
        {
           u[i] = u[i-1];               
          d[i] = d[i-1];

        }
        u[0]=down_last;
        d[0]=up_last;


    }

        for (int i = 0; i < n; i++) cout <<  u[i] << ' ';
        cout <<endl;

    for (int i = 0; i < n; i++) cout <<  d[i]<<' ';


    return 0;
}
