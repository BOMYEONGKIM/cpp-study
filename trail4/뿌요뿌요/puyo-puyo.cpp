#include <iostream>

using namespace std;

int n;
int grid[100][100];
int visited[100][100]={0};

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

int area=0;


void dfs(int y, int x,int num)
{
    visited[y][x]=1;
    area++;

    for(int i=0;i<4;i++)
    {
        int ny=y+dy[i];
        int nx=x+dx[i];

        if(ny<0||ny>=n || nx<0||nx>=n) continue;

        if(visited[ny][nx]==1) continue;

        if(grid[ny][nx]!=num) continue;

        dfs(ny,nx,num);
    }
}

int main() {
    cin >> n;

    int max_num=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if(max_num<grid[i][j])
            max_num=grid[i][j];
        }
    }

    // Please write your code here.
    int bomb=0;
    int max_area=0;

    

    for(int num=1;num<=max_num;num++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                area=0;
                if(visited[i][j]==0 && grid[i][j]==num)
                {
                    dfs(i,j,num);
                }

                max_area = max(max_area,area);

                if(area>=4)
                {
                    bomb++;
                }
            }
        }
    }

    cout << bomb <<' '<< max_area;

    return 0;
}
