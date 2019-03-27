//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef pair<int,int> P;
//typedef pair<int, P> PP;
//
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
//int N, M, ans = 0, cctv_num = 0, c_max = -1;
//vector<PP> cctv;
//int map[9][9];
//
//void dfs(int s_i, int cnt){
//    if(s_i == cctv_num){
//        c_max = cnt > c_max ? cnt : c_max;
////        for(int i = 0 ; i < N ; i++){
////            for(int j = 0 ; j < M ; j ++){
////                cout << map[i][j] << " " ;
////            }cout << "\n";
////        }cout << endl;
//        return;
//    }
//    P cur = cctv[s_i].second;
//    switch (cctv[s_i].first) {
//        case 1:{
//            for(int i = 0 ; i < 4; i++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                int tmp_cnt = 0;
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first < 0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second < 0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0){
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//                dfs(s_i+1, cnt + tmp_cnt);
//                tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first < 0)break;
//                    if(tmp_cur.second >= M || tmp_cur.second < 0)break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6)break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0){
//                        map[tmp_cur.first][tmp_cur.second] ++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            break;
//        }
//        case 2: {
//            int tmp_cnt = 0;
//            for(int i = 0 ; i < 2; i++){
//                P tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//                if(i%2 == 1) dfs(s_i+1, tmp_cnt + cnt);
//            }
//            for(int i = 0 ; i < 2; i++){
//                P tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            tmp_cnt = 0;
//            for(int i = 2 ; i < 4; i++){
//                P tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//                if(i%2 == 1) dfs(s_i+1, tmp_cnt + cnt);
//            }
//            for(int i = 2 ; i < 4; i++){
//                P tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            break;
//        }
//        case 3:{
//            for(int i = 0 ; i < 2; i++){
//                int tmp_cnt = 0;
//                P tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//                tmp_cur = {cur.first + dir[2].first, cur.second + dir[2].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[2].first, tmp_cur.second + dir[2].second};
//                }
//                dfs(s_i+1, tmp_cnt + cnt);
//                tmp_cur = {cur.first + dir[2].first, cur.second + dir[2].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == -1) tmp_cnt --;
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[2].first, tmp_cur.second + dir[2].second};
//                }
//                
//                tmp_cur = {cur.first + dir[3].first, cur.second + dir[3].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[3].first, tmp_cur.second + dir[3].second};
//                }
//                dfs(s_i+1, tmp_cnt + cnt);
//                tmp_cur = {cur.first + dir[3].first, cur.second + dir[3].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == -1) tmp_cnt --;
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[3].first, tmp_cur.second + dir[3].second};
//                }
//                tmp_cur = {cur.first + dir[i].first, cur.second + dir[i].second};
//                while(1){
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            break;
//        }
//        case 4:{
//            int tmp_cnt = 0;
//            for(int i = 0 ; i < 4; i++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt ++;
//                        map[tmp_cur.first][tmp_cur.second] --;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            for(int i = 0 ; i < 4; i ++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == -1) tmp_cnt --;
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//                dfs(s_i+1, tmp_cnt + cnt);
//                tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt ++;
//                        map[tmp_cur.first][tmp_cur.second]--;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            for(int i = 0 ; i < 4; i++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            break;
//        }
//        case 5:{
//            int tmp_cnt = 0;
//            for(int i = 0 ; i < 4; i++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] <= 0) {
//                        if(map[tmp_cur.first][tmp_cur.second] == 0) tmp_cnt ++;
//                        map[tmp_cur.first][tmp_cur.second] --;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            dfs(s_i+1, tmp_cnt + cnt);
//            for(int i = 0 ; i < 4; i++){
//                P tmp_cur = {cur.first+dir[i].first, cur.second+dir[i].second};
//                while (1) {
//                    if(tmp_cur.first >= N || tmp_cur.first <0) break;
//                    if(tmp_cur.second >= M || tmp_cur.second <0) break;
//                    if(map[tmp_cur.first][tmp_cur.second] == 6) break;
//                    if(map[tmp_cur.first][tmp_cur.second] < 0) {
//                        map[tmp_cur.first][tmp_cur.second]++;
//                    }
//                    tmp_cur = {tmp_cur.first + dir[i].first, tmp_cur.second + dir[i].second};
//                }
//            }
//            break;
//        }
//    }
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    cin >> N >> M;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < M ; j++){
//            cin >> map[i][j];
//            if(map[i][j] == 0) ans++;
//            else if (map[i][j] < 6) {
//                cctv.push_back({map[i][j], {i,j}});
//                cctv_num++;
//            }
//        }
//    }
//    
//    dfs(0, 0);
//    
//    cout << ans - c_max <<"\n";
//}
//
