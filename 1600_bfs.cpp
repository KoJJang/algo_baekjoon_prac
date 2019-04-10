//#include <iostream>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef pair<P, P> PP;
//
//int H, W, K;
//int mp[201][201];
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
//P horse[8] = {{2,-1}, {2,1}, {-2,-1}, {-2,1}, {1, 2}, {1,-2}, {-1,2}, {-1,-2}};
//
//bool bfs(){
//    bool visited[201][201][31] = {false,};
//    queue<PP> q; // {ypos, xpos, hores}
//    q.push({{0,0}, {0,0}});
//    visited[0][0][0] = true;
//    while(!q.empty()){
//        P cur = q.front().first;
//        int h_n = q.front().second.first;
//        int c_c = q.front().second.second;
//        if(cur.first == H-1 && cur.second == W-1) {
//            cout << c_c << "\n";
//            return true;
//        }
//        for(int i = 0 ; i < 4; i++){
//            P n_c = {cur.first + dir[i].first, cur.second + dir[i].second};
//            if(n_c.first < 0 || n_c.second <0 || n_c.first >= H || n_c.second >= W) continue;
//            if(visited[n_c.first][n_c.second][h_n] ||
//               mp[n_c.first][n_c.second] == 1) continue;
//            q.push({n_c,{h_n,c_c+1}});
//            visited[n_c.first][n_c.second][h_n] = true;
//        }
//        q.pop();
//        if(h_n >= K) continue;
//        for(int i = 0 ; i < 8; i++){
//            P n_c = {cur.first + horse[i].first, cur.second + horse[i].second};
//            if(n_c.first < 0 || n_c.second <0 || n_c.first >= H || n_c.second >= W) continue;
//            if(visited[n_c.first][n_c.second][h_n+1]
//               || mp[n_c.first][n_c.second] == 1) continue;
//            q.push({n_c,{h_n+1,c_c+1}});
//            visited[n_c.first][n_c.second][h_n+1] = true;
//        }
//    }
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> K >> W >> H;
//    for(int i = 0 ; i < H ; i++){
//        for(int j = 0 ; j < W; j++){
//            cin >> mp[i][j];
//        }
//    }
//    if(!bfs()) cout << -1 << "\n";
//    return 0;
//}
//
//
