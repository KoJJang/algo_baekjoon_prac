//#include <iostream>
//#include <vector>
//#include <queue>
//#include <deque>
//
//using namespace std;
//typedef vector<int> V;
//typedef vector<V> VV;
//typedef vector<VV> VVV;
//typedef pair<int, int> P;
//typedef pair<int, P> PP;
//
//struct item{
//    PP cur;
//    int cnt;
//    item(PP c, int cu): cur(c), cnt(cu){};
//};
//
//bool isUsed[5] = {false,};
//VVV map, tmp_map;
//int min_ans = 0x3f3f3f3f;
//int dx[6] = {0, 0, 0, 0, -1, 1};
//int dy[6] = {0, 0, 1, -1, 0, 0};
//int dz[6] = {1, -1, 0, 0, 0, 0};
//deque<int> s;
//
//void rotate90(int num){
//    VV t;
//    t.resize(5);
//    for(int i = 0 ; i < 5; i++){
//        t[i].resize(5);
//        for(int j = 0 ; j < 5; j++){
//            t[i][j] = map[num][4-j][i];
//        }
//    }
//    map[num] = t;
//}
//
//void bfs(P start){
//    queue<item> q;
//    item t_i({0,start},0);
//    t_i.cur = {0,start};
//    t_i.cnt = 0;
//    P finish = {4-start.first, 4-start.second};
//    q.push(t_i);
//    bool visit[6][6][6] = {false,};
//    visit[0][start.first][start.second] = true;;
//
//    while(!q.empty()){
//        if(q.front().cnt >= min_ans) break;
//
//        int cur_lay = q.front().cur.first;
//        P loc = q.front().cur.second;
//        if(cur_lay == 4 && loc == finish) {
//            min_ans = min_ans > q.front().cnt ? q.front().cnt : min_ans;
//        }
//
//        t_i.cnt = q.front().cnt+1;
//
//        for(int i = 0 ; i < 6; i++){
//            int n_x = loc.first + dx[i], n_y = loc.second + dy[i], n_z = cur_lay + dz[i];
//            if(n_x > 4 || n_y > 4 || n_z > 4) continue;
//            if(n_x < 0 || n_y < 0 || n_z < 0) continue;
//            if(tmp_map[n_z][n_x][n_y] == 1 && !visit[n_z][n_x][n_y]){
//                t_i.cur = {n_z,{n_x,n_y}};
//                q.push(t_i);
//                visit[n_z][n_x][n_y] = true;
//            }
//        }
//
//        q.pop();
//    }
//}
//
//void rf(int cnt){
//    if(cnt == 5){
//        if(tmp_map[0][0][0] == 1 && tmp_map[4][4][4] == 1) {
//            bfs({0,0});
//        }
//        return;
//    }
//
//    for(int i = 0 ; i < 5 ; i++){
//        if(!isUsed[i]){
//            isUsed[i] = true;
//            s.push_back(i);
//            for(int j = 0 ; j < 4; j++){
//                tmp_map[cnt] = map[i];
//                rf(cnt+1);
//                rotate90(i);
//            }
//            s.pop_back();
//            isUsed[i] = false;
//        }
//    }
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    map.resize(5);
//    tmp_map.resize(5);
//    for(int i = 0 ; i < 5; i++){
//        map[i].resize(5);
//        tmp_map[i].resize(5);
//        for(int j = 0 ; j < 5; j++){
//            map[i][j].resize(5);
//            tmp_map[i][j].resize(5);
//            for (int k=0; k < 5; k++) {
//                cin >> map[i][j][k];
//            }
//        }
//    }
//    rf(0);
//    if( min_ans == 0x3f3f3f3f) cout << -1 << endl;
//    else                       cout << min_ans << endl;
//}

