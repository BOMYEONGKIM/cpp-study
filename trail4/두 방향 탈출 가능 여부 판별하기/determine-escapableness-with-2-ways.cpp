#include <iostream>

using namespace std;

int n, m;
int grid[100][100];
int visited[100][100];

int dy[2]={1,0};
int dx[2]={0,1};

int flag=0;

void dfs(int x, int y)
{
    if(y==n-1 && x==m-1)
    {
        flag=1;
        return;
    }

    visited[y][x]=1;
    for(int i=0;i<2;i++)
    {
        int ny =y+dy[i];
        int nx=x+dx[i];

        if(ny < 0 || ny >= n || nx<0|| nx>=m ) continue;

        if(grid[ny][nx]==0) continue;
        
        if(visited[ny][nx]==1) continue;

        dfs(nx,ny);

    }

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    dfs(0,0);

    cout << flag;
    return 0;
}
