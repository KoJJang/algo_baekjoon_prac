//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef pair<P, int > PP;
//int m, n, roomNum = 0;
//int mp[51][51] = {0,};
//P dir[4] = {{0,-1}, {-1,0}, {0,1}, {1,0}};
//bool visit[51][51] = {false,};
//bool visit2[51][51][2] = {false,};
//int roomN[51][51];
//
//int bfs(P p){
//    int ans = 1;
//    visit[p.first][p.second] = true;
//    roomN[p.first][p.second] = roomNum;
//    queue<PP> q;
//    q.push({p,1});
//    while(!q.empty()){
//        for(int i =  0 ; i < 4; i++){
//            P np = {q.front().first.first + dir[i].first,
//                q.front().first.second + dir[i].second};
//            if(np.first < 0 || np.second < 0 ||np.first >= m || np.second >= n) continue;
//            if(visit[np.first][np.second]) continue;
//            if(((mp[q.front().first.first][q.front().first.second]>>i) & 1)) continue;
//            q.push({{np.first, np.second}, q.front().second+1});
//            visit[np.first][np.second] = true;
//            ans++;
//            roomN[np.first][np.second] = roomNum;
//        }
//        q.pop();
//    }
//    return ans;
//}
//
//int bfs2(P p){
//    int ans = 1;
//    map<int, int> tm;
//    tm[roomN[p.first][p.second]] = 1;
//    visit2[p.first][p.second][0] = true;
//    bool visit3[51][51] = {false,};
//    visit3[p.first][p.second] = true;
//    queue<PP> q;
//    q.push({p,0});
//    while(!q.empty()){
//        for(int i =  0 ; i < 4; i++){
//            P np = {q.front().first.first + dir[i].first,
//                q.front().first.second + dir[i].second};
//            //범위 초과 한 경우
//            if(np.first < 0 || np.second < 0 ||np.first >= m || np.second >= n) continue;
//            //이미 간 적 있으면
//            if(visit2[np.first][np.second][q.front().second]) continue;
//            //벽이 있으면
//            if(((mp[q.front().first.first][q.front().first.second]>>i) & 1)){
//                //벽을 부순 적 없고 그곳에 간 적도 없으면
//                if(q.front().second == 0 && !visit2[np.first][np.second][1]){
//                    q.push({{np.first, np.second}, q.front().second+1});
//                    visit2[np.first][np.second][1] = true;
//                    if(!visit3[np.first][np.second]){
//                        visit3[np.first][np.second] = true;
//                        tm[roomN[np.first][np.second]]++;
//                        ans++;
//                    }
//                }
//                continue;
//            }
//            //간적 없고 벽도 없으면
//            q.push({{np.first, np.second}, q.front().second});
//            visit2[np.first][np.second][q.front().second] = true;
//            if(visit3[np.first][np.second]) continue;
//            visit3[np.first][np.second] = true;
//            tm[roomN[np.first][np.second]]++;
//            ans++;
//        }
//        q.pop();
//    }
//    map<int, int>::iterator it;
//    vector<int> v;
//    for(it = tm.begin(); it != tm.end(); it++){
//        v.push_back(it->second);
//    }
//    sort(v.begin(), v.end());
//    
//    return (v[(int)v.size()-1] + v[(int)v.size()-2]);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    
//    for(int i = 0 ; i < m; i++){
//        for(int j = 0 ; j < n; j++){
//            cin >> mp[i][j];
//        }
//    }
//    int max_Room = -1;
//    for(int i = 0 ; i < 51; i++){
//        memset(roomN[i], -1, sizeof(int)*51);
//    }
//    
//    for(int i = 0 ; i < m ; i++){
//        for(int j = 0 ; j < n; j++){
//            if(visit[i][j]) continue;
//            int t_v = bfs({i,j});
//            roomNum++;
//            max_Room = max_Room < t_v ? t_v : max_Room;
//        }
//    }
//    cout << roomNum << "\n" << max_Room << endl;
//    
//    max_Room = -1;
//    for(int i = 0 ; i < m ; i++){
//        for(int j = 0 ; j < n; j++){
//            if(visit2[i][j][0]) continue;
//            int t_v = bfs2({i,j});
//            max_Room = max_Room < t_v ? t_v : max_Room;
//        }
//    }
//    cout << max_Room << endl;
//}

