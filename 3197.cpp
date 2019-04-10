//#include <iostream>
//#include <queue>
//#include <set>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//typedef pair<int, int> P;
//typedef pair<P, int> PP;
//int R, C;
//char mp[1501][1501];
//vector<P> v;
//queue<PP> q;
//set<P> X_loc;
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
//
//int visit2[1501][1501];
//
//int bfs2(P cur){
//    int max_val = -1;
//    while(!q.empty()){
//        for(int i = 0 ; i < 4; i++){
//            cur = {q.front().first.first + dir[i].first,
//                q.front().first.second + dir[i].second};
//            if(cur.first >= R || cur.second >= C || cur.first < 0 || cur.second < 0) continue;
//            if(visit2[cur.first][cur.second] == -1) {
//                q.push({cur,q.front().second+1});
//                visit2[cur.first][cur.second] = q.front().second+1;
//                if(q.front().second + 1 > max_val) max_val = q.front().second+1;
//            }
//        }
//        q.pop();
//    }
//    return max_val;
//}
//
//bool bfs(P cur, int wallNum){
//    P L2loc;
//    queue<P> q2;
//    q2.push(cur);
//    bool visit[1501][1501] = {false, };
//    visit[cur.first][cur.second] = true;
//    while(!q2.empty()){
//        if(q2.front() == v[1]) {
//            return true;
//        }
//        for(int i = 0 ; i < 4; i++){
//            cur = {q2.front().first + dir[i].first,
//                q2.front().second + dir[i].second};
//            if(cur.first >= R || cur.second >= C || cur.first < 0 || cur.second < 0) continue;
//            if(visit2[cur.first][cur.second] <= wallNum && !visit[cur.first][cur.second]) {
//                q2.push(cur);
//                visit[cur.first][cur.second] = true;
//            }
//        }
//        q2.pop();
//    }
//    return false;
//}
//
//int main(){
//    cin.tie(0);
//    cin >> R >> C;
//    P Lloc;
//    for(int i = 0 ; i < R; i++){
//        for(int j = 0 ; j < C; j++){
//            cin >> mp[i][j];
//            if(mp[i][j] == 'L' || mp[i][j] == '.') {
//                visit2[i][j] = 0;
//                q.push({{i,j}, 0});
//                if(mp[i][j] == 'L') v.push_back({i,j});
//            }
//            if(mp[i][j] == 'X') visit2[i][j] = -1;
//        }
//    }
//    int st = 0, en = bfs2(Lloc);
//    
//    while(st <= en){
//        int mid = (st+en)/2;
//        if(bfs(v[0],mid)) en = mid-1;
//        else st = mid+1;
//    }
//    
//    cout << st << endl;
//}
//
