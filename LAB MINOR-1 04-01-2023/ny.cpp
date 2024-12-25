#include<iostream>
#include<cmath>
#include<queue>

using namespace std;

const int N = 8;
const int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

struct point {
    int x, y, step;
};

int bfs(int sx, int sy, int dx, int dy) {
    if (sx == dx && sy == dy) return 0;

    queue<point> q;
    point start;
    start.x = sx; start.y = sy; start.step = 0;
    q.push(start);

    bool visited[N][N];
    memset(visited, false, sizeof visited);
    visited[sx][sy] = true;

    while (!q.empty()) {
        point t = q.front(); q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                point next;
                next.x = nx; next.y = ny; next.step = t.step + 1;
                q.push(next);
                visited[nx][ny] = true;
                if (nx == dx && ny == dy) return next.step;
            }
        }
    }
    return -1;
}

int main() {
    int sx, sy, dx, dy;
    cin >> sx >> sy >> dx >> dy;
    cout << bfs(sx, sy, dx, dy) << endl;
    return 0;
}
