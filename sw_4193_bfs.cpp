//#include <iostream>
//#include <queue>
//#include <cstring>
//
//#define MAX_INT 16
//using namespace std;
//typedef pair<int, int> P;
//
//struct item{
//    int x, y, cnt;
//};
//
//int mp[MAX_INT][MAX_INT] = {0,}, N;
//P dir[4] = {{0,1}, {1,0}, {-1,0}, {0,-1}};
//int ans;
//
//int bfs(P s, P f){
//    ans = 0x3f3f3f3f;
//    int visited[MAX_INT][MAX_INT]= {-1,};
//    memset(visited, -1, sizeof(int)*MAX_INT*MAX_INT);
//    queue<item> q;
//    item tmp;
//    tmp.x = s.second;
//    tmp.y = s.first;
//    tmp.cnt = 0;
//    q.push(tmp);
//    visited[tmp.y][tmp.x] = 0;
//
//    while(!q.empty()){
//        tmp = q.front();
//        q.pop();
//        if(tmp.y == f.first && tmp.x == f.second) {
//            ans = ans > tmp.cnt ? tmp.cnt : ans;
//            continue;
//        }
//        if(tmp.cnt > ans) continue;
//        for(int i = 0 ; i < 4; i++){
//            P np = {tmp.y + dir[i].first, tmp.x + dir[i].second};
//            if(np.first >= N || np.second >= N || np.first < 0 || np.second < 0) continue;
//            if(mp[np.first][np.second] == 0 && (tmp.cnt+1 < visited[np.first][np.second] || visited[np.first][np.second] == -1)){
//                item t_i;
//                t_i.y = np.first; t_i.x = np.second; t_i.cnt = tmp.cnt+1;
//                visited[np.first][np.second] = t_i.cnt;
//                q.push(t_i);
//            }else if(mp[np.first][np.second] == 2 &&
//                     (tmp.cnt+(3-tmp.cnt%3) < visited[np.first][np.second] || visited[np.first][np.second] == -1)){
//                // 소용돌이 끝날때 까지 기다렸다가 들어가는 코드
//                item t_i;
//                t_i.y = np.first; t_i.x = np.second; t_i.cnt = tmp.cnt+(3-tmp.cnt%3);
//                visited[np.first][np.second] = t_i.cnt;
//                q.push(t_i);
//            }
//        }
//    }
//    return ans;
//}
//
//int main(){
//    int T;
//    cin >> T;
//    for(int testcase = 1; testcase <= T; testcase++){
//        P sta, fin;
//        cin >> N;
//        for(int i = 0 ; i < N ; i++){
//            for(int j = 0 ; j < N; j++){
//                cin >> mp[i][j];
//            }
//        }
//        cin >> sta.first >> sta.second >> fin.first >> fin.second;
//        int result = bfs(sta, fin);
//        if(result == 0x3f3f3f3f) result = -1;
//        cout << "#" << testcase << " " << result << "\n";
//    }
//    return 0;
//}

