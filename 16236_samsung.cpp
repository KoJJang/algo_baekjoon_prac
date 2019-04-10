//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> P;
//
//struct shark{
//    int y, x, size, cnt, howmany;
//};
//
//int mp[21][21] = {-1,}, N, s_s = 2;
//P dir[4] = {{-1,0}, {0,-1}, {0,1}, {1,0}};
//vector<shark> fish_loc;
//
//void bfs(P cur){
//    bool visited[21][21] = {false};
//    queue<shark> q;
//    shark t_s; t_s.y= cur.first; t_s.x = cur.second;
//    t_s.size = 2; t_s.cnt = 0; t_s.howmany = 0;
//    visited[t_s.y][t_s.x] = true;
//    int ans = 0;
//    q.push(t_s);
//    
//    while(!q.empty()){
//        t_s = q.front();
//        q.pop();
//        if(mp[t_s.y][t_s.x] > 0 && mp[t_s.y][t_s.x] < t_s.size){ // 물고기 먹었을 때
//            if((int)fish_loc.size() > 1){
//                int min_cnt = 0x3f3f3f3f;
//                for(int i = 0 ; i < (int)fish_loc.size(); i++){
//                    if(fish_loc[i].cnt < min_cnt){
//                        min_cnt = fish_loc[i].cnt;
//                    }
//                }
//                shark tmp;
//                tmp.y = 0x3f3f3f3f; tmp.x = 0x3f3f3f3f;
//                for(int i = 0 ; i < (int)fish_loc.size(); i++){
//                    if(fish_loc[i].cnt > min_cnt) continue;
//                    if(fish_loc[i].y < tmp.y) {
//                        tmp = fish_loc[i];
//                    }else if(fish_loc[i].y == tmp.y){
//                        if(fish_loc[i].x < tmp.x){
//                            tmp = fish_loc[i];
//                        }
//                    }
//                }
//                t_s = tmp;
//            }
//            fish_loc.clear();
//            mp[t_s.y][t_s.x] = 0;
//            
//            memset(visited, false, sizeof(bool)*21*21);
//            while(!q.empty()) {q.pop();} // 이동 경로 다 초기화
//            visited[t_s.y][t_s.x] = true; // 처음부터 시작
//            ans += t_s.cnt; // 지금까지 지난 시간
//            t_s.cnt = 0;
//            t_s.howmany++;
//            if(t_s.size == t_s.howmany) { // 내 몸집만큼 먹었으면
//                t_s.size++;
//                t_s.howmany = 0;
//            }
//        }
//        
//        for(int i = 0 ; i < 4; i++){ // 4방향 비교
//            P np = {t_s.y + dir[i].first , t_s.x + dir[i].second};
//            if(np.first < 0 || np.second < 0 || np.first >= N || np.second >= N) continue;
//            if(!visited[np.first][np.second] && mp[np.first][np.second] <= t_s.size){
//                //이동한 적 없거나 나보다 작거나 같은 물고기이면 이동할 수 있다
//                shark tmp;
//                tmp.y = np.first; tmp.x = np.second; tmp.cnt = t_s.cnt+1;
//                tmp.howmany = t_s.howmany; tmp.size = t_s.size;
//                visited[np.first][np.second] = true;
//                q.push(tmp); // 시간초과, 자리변경 후 푸쉬
//                if(mp[np.first][np.second] < t_s.size && mp[np.first][np.second] != 0){
//                    fish_loc.push_back({tmp});
//                }
//            }
//        }
//    }
//    cout << ans << endl;
//}
//
//int main(){
//    P cur;
//    cin >> N;
//    for(int i = 0 ; i < N ; i++) for(int j = 0 ; j < N; j++){
//        cin >> mp[i][j];
//        if(mp[i][j] == 9) {
//            cur = {i,j};
//            mp[i][j] = 0;
//        }
//    }
//    bfs(cur);
//    return 0;
//}

