//#include <stdio.h>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct balls {
//    int depth;
//    int rx, ry, bx, by;
//};
//int irx, iry, ibx, iby, hx, hy;
//
//int n, m, ans = -1;
//int map[10][10];
//int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
//bool visit[10][10][10][10];
//char str[11];
//
//void move(int& x, int& y, int d) {
//    while (1) {
//        x += dir[d][0]; y += dir[d][1];
//        if (map[x][y] == 1) {
//            x -= dir[d][0]; y -= dir[d][1];
//            break;
//        }
//        else if (map[x][y] == 2)
//            break;
//    }
//}
//
//int main() {
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; ++i) {
//        scanf("%s", str);
//        for (int j = 0; j < m; ++j) {
//            switch (str[j]) {
//                case '.':
//                    map[i][j] = 0; break;
//                case '#':
//                    map[i][j] = 1; break;
//                case 'O':
//                    map[i][j] = 2; hx = i, hy = j; break;
//                case 'R':
//                    irx = i, iry = j; break;
//                case 'B':
//                    ibx = i, iby = j; break;
//            }
//        }
//    }
//    
//    queue<balls> q;
//    q.push({ 0,irx,iry,ibx,iby });
//    visit[irx][iry][ibx][iby] = true;
//    
//    while (!q.empty()) {
//        balls cur = q.front(); q.pop();
//        
//        if (cur.depth > 10)
//            break;
//        if (cur.rx == hx && cur.ry == hy) {
//            ans = cur.depth;
//            break;
//        }
//        
//        for (int i = 0; i < 4; ++i) {
//            int rx = cur.rx, ry = cur.ry;
//            int bx = cur.bx, by = cur.by;
//            move(rx, ry, i), move(bx, by, i);
//            
//            if (bx == hx && by == hy)
//                continue;
//            
//            if (rx == bx && ry == by) {
//                switch (i) {
//                    case 0:
//                        cur.rx < cur.bx ? rx-- : bx--; break;
//                    case 2:
//                        cur.rx < cur.bx ? bx++ : rx++; break;
//                    case 1:
//                        cur.ry < cur.by ? ry-- : by--; break;
//                    case 3:
//                        cur.ry < cur.by ? by++ : ry++; break;
//                }
//            }
//            
//            if (!visit[rx][ry][bx][by]) {
//                balls next = { cur.depth + 1,rx,ry,bx,by };
//                q.push(next);
//                visit[rx][ry][bx][by] = true;
//            }
//        }
//    }
//    
//    printf("%d", ans);
//    
//    return 0;
//}
//
//
//
////#include <iostream>
////#include <vector>
////#include <cstring>
////#include <algorithm>
////#include <cstdio>
////#include <queue>
////
////using namespace std;
////
////int N, M;
////pair<int, int> red, blue;
////vector<pair<int, int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}}; // 아래, 위, 오, 왼
////char map[11][11];
////
////struct item {
////    pair<int, int> r_cur;
////    pair<int, int> b_cur;
////    int cnt;
////    int prev;
////
////    item(pair<int, int> t_rcur, pair<int, int> t_bcur, int t_cnt, int t_prev) :
////    r_cur(t_rcur), b_cur(t_bcur), cnt(t_cnt), prev(t_prev){};
////};
////
////int go_ball(pair<int, int> direc, pair<int, int>& curLoc, char cur_map[][11]){
////    pair<int, int> tmp_loc = curLoc;
////    char Color = cur_map[curLoc.first][curLoc.second];
////
////    if(cur_map[curLoc.first + direc.first][curLoc.second + direc.second] == '#'){
////        return -1; // 움직일 수 없으면 -1
////    }
////    while(1){
////        if (cur_map[curLoc.first + direc.first][curLoc.second + direc.second] == 'R' ||
////            cur_map[curLoc.first + direc.first][curLoc.second + direc.second] == 'B'){
////            // 다른 공 만났을 경우
////            pair<int, int> diff_ball = make_pair(curLoc.first + direc.first, curLoc.second + direc.second);
////
////            int ret_val = go_ball(direc, diff_ball, cur_map); // 다른공이 움직일 수 있는지 확인
////            switch (ret_val) {
////                case 2: //공이 2개 다 들어가면 실패
////                    return -1;
////                case -1: // 다른 공이 못움직이면 나도 못움직인다.
////                    return -1;
////                case 1:
////                    curLoc.first = diff_ball.first - direc.first;
////                    curLoc.second = diff_ball.second - direc.second;
////
////                    cur_map[tmp_loc.first][tmp_loc.second] = '.';
////                    cur_map[curLoc.first][curLoc.second] = Color;
////                    return 1;
////            }
////        }
////        if(cur_map[curLoc.first + direc.first][curLoc.second + direc.second] == '#'){
////            // 움직이다가 멈춘 경우
////            return 1;
////        }
////        if(cur_map[curLoc.first + direc.first][curLoc.second + direc.second] == 'O'){
////            // 구멍을 찾은 경우
////            cur_map[curLoc.first][curLoc.second] = '.';
////            return 2;
////        }
////
////        cur_map[curLoc.first][curLoc.second] = '.';
////        curLoc.first += direc.first;
////        curLoc.second += direc.second;
////        cur_map[curLoc.first][curLoc.second] = Color;
////
////    }
////}
////
////void bfs() {
////    queue<item> q;
////    q.emplace(red,blue,0, -1);
////
////    int res = -1;
////
////    while(!q.empty()){
////        item tmp_i = q.front();
////        q.pop();
////
////        if(tmp_i.cnt > 10) {
////            cout << res << "\n";
////            return;
////        }
////
////        for(int i = 0 ; i < 4; i++){ // 아래, 위, 오, 왼
////            item second_tmp_i = tmp_i;
////            map[second_tmp_i.r_cur.first][second_tmp_i.r_cur.second] = 'R';
////            map[second_tmp_i.b_cur.first][second_tmp_i.b_cur.second] = 'B';
////            int red_val = go_ball(dir[i], second_tmp_i.r_cur, map);
////            int blue_val = go_ball(dir[i], second_tmp_i.b_cur, map);
////            if(red_val == 2 && blue_val != 2) {
////                res = tmp_i.cnt+1;
////                cout << res << "\n";
////                return;
////            }
////            if((red_val != 2 && blue_val == 2)) continue;
////            if((red_val == 1 || blue_val == 1) && (i != tmp_i.prev)) {
////                int prev;
////                switch (i) {
////                    case 0:
////                        prev = 1;
////                        break;
////                    case 1:
////                        prev = 0;
////                        break;
////                    case 2:
////                        prev = 3;
////                        break;
////                    case 3:
////                        prev = 2;
////                        break;
////                }
////                q.emplace(make_pair(second_tmp_i.r_cur.first,second_tmp_i.r_cur.second),
////                          make_pair(second_tmp_i.b_cur.first,second_tmp_i.b_cur.second),
////                          second_tmp_i.cnt+1, prev);
////            }
////            map[second_tmp_i.r_cur.first][second_tmp_i.r_cur.second] = '.';
////            map[second_tmp_i.b_cur.first][second_tmp_i.b_cur.second] = '.';
////        }
////    }
////
////    cout << res << "\n";
////}
////
////int main(){
////    ios::sync_with_stdio(false);
////    cin.tie(NULL);
////    cin >> N >> M;
////
////    for(int i = 0 ; i < N ; i++){
////        for(int j = 0 ; j < M ; j++){
////            cin >> map[i][j];
////            if(map[i][j] == 'R') {red.first = i; red.second = j;}
////            if(map[i][j] == 'B') {blue.first = i; blue.second = j;}
////        }
////    }
////
////    bfs();
////
////    return 0;
////}
//
