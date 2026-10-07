#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int max_value=0;
    //첫 번째 도형
    for (int i = 0; i <= n-2; i++) 
    {
        for (int j = 0; j <= m-2; j++) 
        {
            int sum=0;
            int min = 1000;
            for(int k=i;k<i+2;k++)
            {
                for(int l=j;l<j+2;l++)
                {
                    sum+=grid[k][l];
                    if(grid[k][l]<min)
                    min = grid[k][l];
                }
            }

            sum-=min;

            if(max_value<sum)
            max_value = sum;

        }
    }


    //두번째 도형 원형
        for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= m-3; j++) 
        {
            int sum=0;
            for(int k=0;k<3;k++)
                sum+=grid[i][j+k];
                
    
            if(max_value<sum)
            max_value = sum;

        }
    }

    //두번째 도형 회전

        for (int j = 0; j < m; j++) 
        {
         for (int i = 0; i <= n-3; i++) 
         {
            int sum=0;
            for(int k=0;k<3;k++)
                sum+=grid[i+k][j];
                
    
            if(max_value<sum)
            max_value = sum;

        }
    }

    cout << max_value;
    return 0;
}
