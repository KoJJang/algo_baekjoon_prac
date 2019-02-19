//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct item{
//    int num_move = 0;
//    pair<int, int> cur_loc;
//    item(int n_m, pair<int,int>c_l):
//    num_move(n_m), cur_loc(c_l){};
//};
//
//int w, h;
//char _map[21][21];
//int _distance[11][11];
//vector<pair<int, int>> dust_loc;
//int dust_cnt = 0, result_val = -1;
//pair<int, int> loc[4] = {{-1, 0}, {1, 0}, {0,-1}, {0,1}}; // 위, 아래, 좌, 우
//
//int canGo(bool visited[21][21], pair<int, int> cur, pair<int, int> end){
//    if(cur.first < 0 || cur.second < 0) return -1;
//    if(cur.first >= h || cur.second >= w) return -1;
//    if(visited[cur.first][cur.second]) return -1;
//    if(_map[cur.first][cur.second] == 'x') return -1;
//    if(cur.first == end.first && cur.second == end.second) return 2;
//    return 1;
//}
//
//int bfs(int start_i, int end_j){
//    pair<int, int> s = dust_loc[start_i];
//    pair<int, int> e = dust_loc[end_j];
//    queue<item> q;
//    bool visited[21][21];
//    for(int i = 0; i < 21; i ++){
//        memset(visited[i], false, sizeof(bool)*21);
//    }
//    visited[s.first][s.second] = true;
//    q.emplace(0, s);
//    while(!q.empty()){
//        for(int i = 0 ; i < 4; i++){
//            item tmp_i = q.front();
//            pair<int, int> next_loc = make_pair(tmp_i.cur_loc.first + loc[i].first,
//                                                tmp_i.cur_loc.second + loc[i].second);
//            int return_val = canGo(visited, next_loc, e);
//            if(return_val == 1 || return_val == 2){
//                visited[next_loc.first][next_loc.second] = true;
//                tmp_i.cur_loc = next_loc;
//                tmp_i.num_move++;
//                q.push(tmp_i);
//            }
//            if(return_val == 2){
//                _distance[start_i][end_j] = tmp_i.num_move;
//                _distance[end_j][start_i] = tmp_i.num_move;
//                return 1;
//            }
//        }
//        q.pop();
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    while(1){
//        cin >> w >> h;
//        if( w == 0 && h == 0) return 0;
//
//        pair<int, int> start_point;
//        for(int i = 0 ; i < 21; i++){
//            memset(_map[i], 0, sizeof(char)*21);
//            if(i < 11){
//                memset(_distance[i], 0, sizeof(int)*11);
//            }
//        }
//        for(int i = 0 ; i < h; i++){
//            for(int j = 0 ; j < w; j++){
//                cin >> _map[i][j];
//                if(_map[i][j] == '*') {
//                    dust_cnt++;
//                    dust_loc.push_back(make_pair(i,j));
//                }
//                if(_map[i][j] == 'o') {
//                    start_point = make_pair(i, j);
//                    dust_loc.insert(dust_loc.begin(), start_point);
//                }
//            }
//        }
//        bool isEnd = false;
//        vector<int> make_combi;
//        for(int i = 0; i < dust_loc.size(); i++){
//            if(i != 0) make_combi.push_back(i);
//            for(int j = i+1; j < dust_loc.size(); j++){
//                if(bfs(i, j) == -1){
//                    cout << -1 << "\n";
//                    isEnd = true;
//                    break;
//                }
//            }
//            if(isEnd) break;
//        }
//        dust_loc.clear();
//        if(!isEnd){
//            int min_val = 0x3f3f3f3f;
//            do{
//                int tmp_val = 0;
//                tmp_val += _distance[0][make_combi[0]];
//                for(int i = 0 ; i < make_combi.size() - 1; i++){
//                    tmp_val += _distance[make_combi[i]][make_combi[i+1]];
//                }
//                min_val = min_val > tmp_val ? tmp_val : min_val;
//            }while(next_permutation(make_combi.begin(), make_combi.end()));
//            cout << min_val << endl;
//        }
//    }
//}

