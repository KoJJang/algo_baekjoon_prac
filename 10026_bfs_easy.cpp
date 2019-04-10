//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> P;
//int N;
//char mp[101][101];
//bool visited[101][101] = {false,};
//P dir[4] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
//
//void bfs(P p){
//    visited[p.first][p.second] = true;
//    queue<P> q;
//    q.push(p);
//    char color = mp[p.first][p.second];
//    while(!q.empty()){
//        for(int i = 0 ; i < 4; i++){
//            P n_p = {q.front().first + dir[i].first, q.front().second + dir[i].second};
//            if(n_p.first < 0 || n_p.second < 0 || n_p.first >= N || n_p.second >= N ||
//               visited[n_p.first][n_p.second] || mp[n_p.first][n_p.second] != color) continue;
//            q.push(n_p);
//            visited[n_p.first][n_p.second] = true;
//        }
//        q.pop();
//    }
//}
//
//int main(){
//    cin >> N;
//    
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            cin >> mp[i][j];
//        }
//    }
//    for(int i = 0 ; i < 101; i++){
//        memset(visited[i], false, sizeof(bool)*101);
//    }
//    int ans = 0;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            if(visited[i][j]) continue;
//            bfs({i,j});
//            ans++;
//        }
//    }
//    cout << ans << " ";
//    for(int i = 0 ; i < 101; i++){
//        memset(visited[i], false, sizeof(bool)*101);
//    }
//    ans = 0;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            mp[i][j] = mp[i][j] == 'R' ? 'G' : mp[i][j];
//        }
//    }
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            if(visited[i][j]) continue;
//            bfs({i,j});
//            ans++;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

