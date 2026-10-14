#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int grid[25][25];
int visited[25][25];

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

int people=0;
int group=0;

void dfs(int y,int x)
{
    visited[y][x]=1;
    people++;

    for(int i=0;i<4;i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny<0 || ny >=n || nx< 0 || nx>=n)continue;
        if(grid[ny][nx]==0 )continue;
        if(visited[ny][nx]==1) continue;

        dfs(ny,nx);
    }

}

int main() {
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1 && visited[i][j]==0)
            {
                people=0;
                group++;
                dfs(i,j);
                v.push_back(people);
            }

        }
    }
        
        cout << group<<endl;
        sort(v.begin(),v.end());
        for(int p : v)
        {
            cout << p<<endl;
        }


    return 0;
}
