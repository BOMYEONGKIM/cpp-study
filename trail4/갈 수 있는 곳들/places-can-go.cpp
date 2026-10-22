#include <iostream>
#include <queue>

using namespace std;

int n, k;
int grid[100][100];
int r[10000], c[10000];

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

struct pos{
    int y;
    int x;
};

int main() {

    int answer=0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    for (int i = 0; i < k; i++) cin >> r[i] >> c[i];

    // Please write your code here.

    int visited[100][100]={0};
    for(int i=0;i<k;i++)
    {
        queue<pos> q;
        q.push({r[i]-1,c[i]-1});

        visited[r[i]-1][c[i]-1]=1;

        while(!q.empty())
        {
            pos current = q.front();
            q.pop();

           for(int j=0;j<4;j++)
            {
                int ny = dy[j] + current.y;
                int nx = dx[j] + current.x;


                if(ny<0 ||nx<0||ny>=n||nx>=n) continue;

                if(grid[ny][nx] ==1) continue;

                if(visited[ny][nx]==1) continue;
                
                visited[ny][nx]=1;
                q.push({ny,nx});

            }
        }
        
    }

    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        if (visited[i][j]) answer++;

    cout << answer;

    return 0;
}
