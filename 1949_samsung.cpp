//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//#define Y first
//#define X second
//
//using namespace std;
//typedef pair<int, int> P;
//
//int N, K, mp[9][9], ans = -1;
//vector<P> vong;
//P dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} }; // 오, 아래, 왼, 위
//bool visited[9][9] = {false, };
//
//void dfs(P cur, int cnt, bool isCutted){
//    bool isEnd = true;
//    for(int i = 0 ; i < 4; i++){
//        P np = {cur.Y + dir[i].Y, cur.X + dir[i].X};
//        if(np.Y < 0 || np.X < 0 || np.Y >= N || np.X >= N || visited[np.Y][np.X]) continue;
//        if(mp[np.Y][np.X] < mp[cur.Y][cur.X]) {
//            // 방문한 적 없고 아래막길이면
//            visited[np.Y][np.X] = true;
//            dfs(np, cnt+1, isCutted);
//            visited[np.Y][np.X] = false;
//            isEnd = false;
//        }else if(isCutted == false && mp[np.Y][np.X] - K < mp[cur.Y][cur.X]) {
//            // 방문한 적 없고 잘린적 없고 잘라서 갈 수 있으면
//            visited[np.Y][np.X] = true;
//            int prev = mp[np.Y][np.X];
//            mp[np.Y][np.X] = mp[cur.Y][cur.X]-1;
//            dfs(np, cnt+1, true);
//            visited[np.Y][np.X] = false;
//            mp[np.Y][np.X] = prev;
//            isEnd = false;
//        }
//    }
//    if(isEnd) {
//        ans = ans < cnt ? cnt : ans;
//    }
//}
//
//int main(){
//    int T;
//    cin >> T;
//    for(int testcase = 1; testcase <= T; testcase++ ) {
//        cin >> N >> K;
//        int highest = -1;
//
//        for(int i = 0 ; i < N ; i++) for(int j = 0 ; j < N; j++){
//            cin >> mp[i][j];
//            if(mp[i][j] > highest) {
//                vong.clear();
//                highest = mp[i][j];
//                vong.push_back({i,j});
//            }else if (mp[i][j] == highest){
//                vong.push_back({i,j});
//            }
//        }
//        ans = -1;
//        for(int i = 0 ; i < (int)vong.size(); i++){
//            visited[vong[i].Y][vong[i].X] = true;
//            dfs(vong[i],1,false);
//            visited[vong[i].Y][vong[i].X] = false;
//        }
//        vong.clear();
//        cout << "#" << testcase << " " << ans << endl;
//    }
//}

