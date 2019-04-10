//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef pair<P, int> PP;
//typedef pair<P, P> PPP;
//
//int N, M, K, ans = 0x3f3f3f3f;
//int mp[1001][1001] = {-1,};
//vector<P> v;
//P dir[4] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
//
//void bfs2(){
//    queue<PPP> q; // {y,x},{cnt,wallNum}
////    bool visited[1001][1001][11] = {false,};
//    int visited[1001][1001] = {-1,};
//    for(int i = 0 ; i < 1001; i++){
//        memset(visited[i], -1, sizeof(int)*1001);
//    }
//    q.push({{0,0}, {1,0}});
//    visited[0][0]= 0;
//    P n_cur;
//    while(!q.empty()){
//        if(q.front().first.first == N-1 && q.front().first.second == M-1) {
//            ans = ans > q.front().second.first ? q.front().second.first : ans;
//            return;
//        }
//        for(int i = 0 ; i < 4; i++){
//            n_cur.first = q.front().first.first + dir[i].first;
//            n_cur.second = q.front().first.second + dir[i].second; // 다음 이동할 위치
//            if(n_cur.first >= 0 && n_cur.second >= 0 &&
//               n_cur.first <= N-1 && n_cur.second <= M-1){ // 범위 안에 있다면
//                if(mp[n_cur.first][n_cur.second] != 1){
//                    if(visited[n_cur.first][n_cur.second] == -1 ||
//                       visited[n_cur.first][n_cur.second] > q.front().second.second){
//                        //부서진 적 없거나 부서진 횟수보다 내가 덜 부서졌으면
//                        q.push({n_cur,{q.front().second.first+1,q.front().second.second}});
//                        visited[n_cur.first][n_cur.second] = q.front().second.second;
//                    }
//                }
//                else if( q.front().second.second < K && mp[n_cur.first][n_cur.second] == 1){
//                    // 벽이 있지만 벽을 부술 수 있다면
//                    if(visited[n_cur.first][n_cur.second] == -1) {// 부서진 적 없는 벽이라면
//                        q.push({n_cur,{q.front().second.first+1,q.front().second.second+1}});
//                        visited[n_cur.first][n_cur.second] = q.front().second.second+1;
//                    }
//                    else if(visited[n_cur.first][n_cur.second] > q.front().second.second+1){
//                        //벽을 부순적 없다면
//                        q.push({n_cur,{q.front().second.first+1,q.front().second.second+1}});
//                        visited[n_cur.first][n_cur.second] = q.front().second.second+1;
//                    }
//                }
//            }
//        }
//        q.pop();
//    }
//}
//
//int main(){
//    cin.tie(0);
//    for(int i = 0 ; i < 1001; i++){
//        memset(mp[i], -1, sizeof(int)*1001);
//    }
//    cin >> N >> M >> K; // 벽 부수고 이동하기 2
////    cin >> N >> M; // 벽부수고 이동하기 1
////    K = 1;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < M ; j++){
//            scanf("%1d", &mp[i][j]);
//            if(mp[i][j] == 1) v.push_back({i,j});
//        }
//    }
//    bfs2();
//    if(ans == 0x3f3f3f3f) cout << -1 << endl;
//    else                  cout << ans << endl;
//}
//
//
