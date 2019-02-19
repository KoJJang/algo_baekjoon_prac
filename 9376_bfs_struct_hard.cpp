//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//#include <cstdio>
//
//using namespace std;
//int T, H, W;
//char map[103][103];
//int result_map[103][103];
//int result_map2[103][103];
//int result_map3[103][103];
//vector<pair<int, int>> slave;
//vector<pair<int, int>> loc = {{1,0}, {0,1}, {-1,0}, {0,-1}};
//
//struct item{
//    pair<int, int> cur;
//    int num_door = 0;
//    
//    item(pair<int, int> t_cur, int t_num_door):
//    cur(t_cur), num_door(t_num_door){}
//};
//
//int check(int h, int w) { // -1: 못감, 0: 갈 수 있음, 1: 탈옥, 2: 문
//    if(map[h][w] == '*') return -1;
//    if(h >= H+2 || w >= W+2) return -1;
//    if(h <  0 || w <  0) return -1;
//    if(map[h][w] == '#') return 2;
//    return 0;
//}
//
//void bfs(int h, int w, int res_map[103][103]){
//    queue<item> q;
//    q.emplace(make_pair(h, w),0);
//    res_map[h][w] = 0;
//    while(!q.empty()){
//        item tmp_item = q.front();
//        q.pop();
//        pair<int, int> tmp_loc = tmp_item.cur;
//        for(int i = 0; i< 4; i++){ // 아래 오른 위 왼
//            int next_h = tmp_loc.first + loc[i].first;
//            int next_w = tmp_loc.second + loc[i].second;
//            int tmp_chk = check(next_h, next_w);
//            if(tmp_chk == 0) {
//                if(res_map[next_h][next_w] == -1 || res_map[next_h][next_w] > tmp_item.num_door){
//                    q.emplace(make_pair(next_h, next_w),tmp_item.num_door);
//                    res_map[next_h][next_w] = tmp_item.num_door;
//                }
//            }
//            if(tmp_chk == 2) {
//                if(res_map[next_h][next_w] == -1 || res_map[next_h][next_w] > tmp_item.num_door + 1){
//                    q.emplace(make_pair(next_h, next_w),tmp_item.num_door+1);
//                    res_map[next_h][next_w] = tmp_item.num_door + 1;
//                }
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> T;
//    for(int t = 0; t < T; t++){
//        for(int i = 0 ; i < 103; i++){
//            memset(map[i], 0, sizeof(char)*103);
//            memset(result_map3[i], -1, sizeof(int)*103);
//            memset(result_map2[i], -1, sizeof(int)*103);
//            memset(result_map[i], -1, sizeof(int)*103);
//        }
//        vector<pair<int, int>> doorLoc;
//        
//        cin >> H >> W;
//        for(int i = 0 ; i <= H+1; i++){
//            map[i][0] = '.';
//            map[i][W+1] = '.';
//        }
//        for(int j = 0 ; j <= W+1; j++){
//            map[0][j] = '.';
//            map[H+1][j] = '.';
//        }
//        for(int i = 1 ; i <= H; i++){
//            for(int j = 1 ; j <= W; j++){
//                cin >> map[i][j];
//                if(map[i][j] == '#'){
//                    doorLoc.push_back(make_pair(i,j));
//                }
//                if(map[i][j] == '$'){
//                    slave.push_back(make_pair(i, j));
//                }
//            }
//        }
//        
//        bfs(0,0,result_map);
//        bfs(slave[0].first,slave[0].second,result_map2);
//        bfs(slave[1].first,slave[1].second,result_map3);
//        for(pair<int, int> i : doorLoc){
//            result_map[i.first][i.second] -= 2;
//        }
//        
//        for(int i = 0 ; i <= H+1; i++){
//            for(int j = 0 ; j <= W+1; j++){
//                result_map[i][j] += result_map2[i][j] + result_map3[i][j];
//            }
//        }
//        
//        int min_res = 0x3f3f3f3f;
//        
//        for(int i = 0 ; i <= H+1; i++){
//            for(int j = 0 ; j <= W+1; j++){
//                if(result_map[i][j] >= 0 && result_map[i][j] < min_res)
//                    min_res = result_map[i][j];
//            }
//        }
//        doorLoc.clear();
//        slave.clear();
//    
//        cout << min_res << "\n";
//    }
//    return 0;
//}

