//#include <iostream>
//#include <queue>
//#include <vector>
//#include <map>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef vector<P> V;
//typedef vector<V> VV;
//
//int R, C, N, total_m = 0;
//char mp[101][101];
//P dir[4] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
//V v;
//VV vv;
//
//int find_cluster(P p){
//    bool visited[101][101] = {false,};
//    queue<P> q;
//    int cnt = 1;
//    visited[p.first][p.second] = true;
//    q.push(p);
//    v.push_back(p);
//    while(!q.empty()){
//        for(int i = 0 ; i < 4; i++){
//            P n_p = {q.front().first + dir[i].first, q.front().second + dir[i].second};
//            if(n_p.first < 0 || n_p.second < 0 || n_p.first >=R || n_p.second >= C) continue;
//            if(mp[n_p.first][n_p.second] == 'x' && !visited[n_p.first][n_p.second]){
//                visited[n_p.first][n_p.second] = true;
//                q.push(n_p);
//                cnt++;
//                v.push_back(n_p);
//            }
//        }
//        q.pop();
//    }
//    return cnt;
//}
//
//bool break_mineral(int i, int j){
//    int tmp_mineral = 0;
//    for(int t = 0; t < 4; t++){
//        P n_p = {i + dir[t].first, j + dir[t].second};
//        if(n_p.first < 0 || n_p.second < 0 || n_p.first >=R || n_p.second >= C) continue;
//        if(mp[n_p.first][n_p.second] == 'x'){
//            tmp_mineral += find_cluster(n_p);
//            vv.push_back(v);
//            v.clear();
//        }
//    }
//    if(tmp_mineral != total_m) {
//        return true;
//    }
////    vv.clear();
//    return false;
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    cin >> R >> C;
//    int t_raw, w_t = 1;
//    for(int i = 0 ; i < R; i++){
//        for(int j = 0 ; j < C; j++){
//            cin >> mp[i][j];
//            mp[i][j] == 'x' ? ++total_m : 0;
//        }
//    }
//    bool go_down;
//    cin >> N;
//    for(int i = 0 ; i < N ; i++){
//        cin >> t_raw;
//        go_down = false;
//        if(w_t == 1){
//            for(int j = 0 ; j < C; j++){
//                if(mp[R-t_raw][j] == 'x'){
//                    total_m--;
//                    mp[R-t_raw][j] = '.';
//                    go_down = break_mineral(R-t_raw, j);
//                    break;
//                }
//            }
//        }else {
//            for(int j = C-1 ; j >= 0; j--){
//                if(mp[R-t_raw][j] == 'x'){
//                    total_m--;
//                    mp[R-t_raw][j] = '.';
//                    go_down = break_mineral(R-t_raw, j);
//                    break;
//                }
//            }
//        }
//        if(1) {
//            map<int, int> m;
//            for(int a = 0; a < (int)vv.size(); a++){
//                int min_val = 0x3f3f3f3f;
//                for(int b = 0 ; b < (int)vv[a].size(); b++){
//                    P n_p = vv[a][b];
//                    if(m.find(n_p.second) == m.end()) m[n_p.second] = n_p.first;
//                    else {
//                        m[n_p.second] = m[n_p.second] > n_p.first ? m[n_p.second] : n_p.first;
//                    }
//                }
//                map<int, int>::iterator it;
//                for(it = m.begin(); it != m.end(); it++){
//                    P n_p = {it->second, it->first};
//                    int t_h = 0;
//                    if(it->second + 1 == R) {
//                        min_val = 0;
//                        break;
//                    }
//                    for(int c = n_p.first+1; c < R; c++){
//                        if(mp[c][n_p.second] == 'x') break;
//                        t_h++;
//                    }
//                    min_val = min_val > t_h ? t_h : min_val;
//                }
//                m.clear();
//                if(min_val == 0) continue;
//                for(int b = 0 ; b < (int)vv[a].size(); b++){
//                    P n_p = vv[a][b];
//                    mp[n_p.first][n_p.second] = '.';
//                }
//                for(int b = 0 ; b < (int)vv[a].size(); b++){
//                    P n_p = vv[a][b];
//                    mp[n_p.first + min_val][n_p.second] = 'x';
//                }
//            }
//            vv.clear();
//        }
//        w_t *= -1;
//    }
//    for(int i = 0 ; i < R; i++){
//        for(int j = 0 ; j < C; j++){
//            cout << mp[i][j];
//        }cout << endl;
//    }
//}
////5 1
////.
////.
////x
////x
////x
////3
////1 3 5
//
