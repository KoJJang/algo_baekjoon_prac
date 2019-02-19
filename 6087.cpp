#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;
int W, H;
char t_map[101][101];
int mir_map[101][101];
vector<pair<int, int>> start_point;
pair<int, int> dir[4] = {{1,0}, {-1,0}, {0,1}, {0,-1}}; // 아래, 위, 우, 좌

struct item {
    pair<int, int> cur_loc;
    int cur_dir;
    int num_mirror;
    item(pair<int , int> l, int d, int m) : cur_loc(l), cur_dir(d), num_mirror(m){};
};

void bfs(pair<int, int> S, pair<int, int> E){
    queue<item> q;
    mir_map[S.first][S.second] = 0;
    pair<int, int> next_loc;
    
    for(int i = 0; i < 4; i++){
        next_loc = {S.first + dir[i].first, S.second + dir[i].second};
        if(mir_map[next_loc.first][next_loc.second] == -1) continue;
        q.emplace(next_loc,i,0);
        mir_map[next_loc.first][next_loc.second] = 0;
    }
    
    while(!q.empty()){
        
        for(int i = 0 ; i < 4; i++){
            item tmp_i = q.front();
            if(tmp_i.cur_dir != i) tmp_i.num_mirror++;
            next_loc = {tmp_i.cur_loc.first + dir[i].first,
                tmp_i.cur_loc.second + dir[i].second};
            if(next_loc.first >= H || next_loc.second >= W) continue;
            if(next_loc.first <  0 || next_loc.second <  0) continue;

            if(mir_map[next_loc.first][next_loc.second] >= tmp_i.num_mirror){
                q.emplace(next_loc,i,tmp_i.num_mirror);
                mir_map[next_loc.first][next_loc.second] = tmp_i.num_mirror;
            }
        }
        q.pop();
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0; i < 101; i++){
        memset(mir_map[i], 1, sizeof(int) * 101);
    }
    
    cin >> W >> H;
    for(int i = 0 ; i < H; i++){
        for(int j = 0 ; j < W; j++){
            cin >> t_map[i][j];
            if(t_map[i][j] == 'C') {
                start_point.push_back({i,j});
            }
            if(t_map[i][j] == '*'){
                mir_map[i][j] = -1;
            }
        }
    }
    
    bfs(start_point[0], start_point[1]);
    
    cout << mir_map[start_point[1].first][start_point[1].second] << "\n";
    return 0;
}
