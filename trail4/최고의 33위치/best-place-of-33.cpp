#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int max_coin = 0;
    for(int i=0;i<=N-3;i++)
    {
        for(int j=0;j<=N-3;j++)
        {
            //시작지점 정하는 2중 for문
            int cnt=0;
            for(int k=i;k<i+3;k++)
            {
                for(int l=j;l<j+3;l++)
                {
                    //3X3격자
                    if(grid[k][l]==1) cnt++;
                }
            }

            if(max_coin < cnt) max_coin = cnt;
        }
    }
    cout << max_coin;
    return 0;
}
