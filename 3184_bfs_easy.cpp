//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef pair<int, int> P;
//
//int R, C, ans_w, ans_s;
//char map[251][251];
//bool visit[251][251];
//P dir[4] = {{0,1},{0,-1},{1,0},{-1,0}};
//vector<P> wolf;
//vector<P> sheep;
//
//void bfs(P cur){
//    queue<P> q;
//    q.push(cur);
//    int sheep_num = 0;
//    int wolf_num = 1;
//    visit[cur.first][cur.second] = true;
//    while(!q.empty()){
//        cur = q.front();
//        q.pop();
//
//        for(int i = 0 ; i < 4; i++){
//            P tmp = {cur.first + dir[i].first, cur.second + dir[i].second};
//            if(visit[tmp.first][tmp.second] || map[tmp.first][tmp.second] == '#') continue;
//            if(tmp.first < 0 || tmp.first >= R) continue;
//            if(tmp.second <0 || tmp.second >= C) continue;
//            visit[tmp.first][tmp.second] = true;
//            q.push(tmp);
//            if(map[tmp.first][tmp.second] == 'o') sheep_num++;
//            if(map[tmp.first][tmp.second] == 'v') wolf_num++;
//        }
//    }
//    if(sheep_num > wolf_num) ans_w -= wolf_num;
//    else                     ans_s -= sheep_num;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> R >> C;
//    for(int i = 0 ; i < R; i++){
//        for(int j = 0 ; j < C; j++){
//            cin >> map[i][j];
//            if(map[i][j] == 'v') wolf.push_back({i,j});
//            if(map[i][j] == 'o') sheep.push_back({i,j});
//        }
//    }
//
//    ans_s = sheep.size(); ans_w = wolf.size();
//
//    for(int i = 0 ; i < wolf.size(); i++){
//        if(!visit[wolf[i].first][wolf[i].second]) bfs(wolf[i]);
//    }
//
//    cout << ans_s << " " << ans_w << "\n";
//}

