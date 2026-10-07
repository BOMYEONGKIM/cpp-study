#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int result=0;
    for (int line = 0; line < n; line++) 
    {
        int cnt=1;
        int max_cnt=1;
        for (int col = 1; col < n; col++)
        {
            //각 행의 값 확인
            if(grid[line][col-1] == grid[line][col])
              cnt++;
            else
              cnt=1;
            
             max_cnt = max(max_cnt, cnt);

        }

        if(max_cnt>=m)
           result++;
           

        cnt=1;
        max_cnt=1;
        for (int row = 1; row < n; row++)
        {
            //각 행의 값 확인
            if(grid[row-1][line] == grid[row][line])
              cnt++;
            else
              cnt=1;
            
             max_cnt = max(max_cnt, cnt);

        }

        if(max_cnt>=m)
           result++;
           


    }

    cout << result;
    return 0;
}
