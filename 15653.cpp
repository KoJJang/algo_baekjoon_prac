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
////#include <iostream>
////#include <queue>
////#include <vector>
////
////using namespace std;
////typedef pair<int, int> P;
////typedef pair<P, P> PP;
////
////int N, M;
////char b_map[11][11];
////P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}}; // 우, 좌, 하, 상
////vector<PP> visited;
////
////struct item{
////    pair<int, int> R_loc;
////    pair<int, int> B_loc;
////    int cnt;
////    item(pair<int, int> t_R, pair<int, int> t_B, int t_c):
////    R_loc(t_R), B_loc(t_B), cnt(t_c){};
////};
////
////int go_R(item &t_item){
////    bool R_goal = false, B_goal = false;
////    bool R_move = false, B_move = false;
////    if(t_item.R_loc.second > t_item.B_loc.second){
////        while(b_map[t_item.R_loc.first][t_item.R_loc.second + 1] == '.'){ // 갈 수 있을 때 까지 간다
////            t_item.R_loc.second++;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R'; // R 그려줌
////        if(b_map[t_item.R_loc.first][t_item.R_loc.second+1] == 'O'){ // 구멍에 들어갔으면
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.'; // R 지움
////        }
////        while(b_map[t_item.B_loc.first][t_item.B_loc.second + 1] == '.'){ // 갈 수 있을 때 까지 간다
////            t_item.B_loc.second++;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B'; // R 그려줌
////        if(b_map[t_item.B_loc.first][t_item.B_loc.second+1] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////    }
////    else{
////        while(b_map[t_item.B_loc.first][t_item.B_loc.second + 1] == '.'){
////            t_item.B_loc.second++;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first][t_item.B_loc.second+1] == 'O'){
////            B_goal = true;
////        }
////        while(b_map[t_item.R_loc.first][t_item.R_loc.second + 1] == '.'){
////            t_item.R_loc.second++;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first][t_item.R_loc.second+1] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////    }
////    b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////    b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////    if(R_goal && !B_goal) return 2; // 골인
////    for(int i = 0 ; i < visited.size(); i++){
////        if(visited[i].first == t_item.R_loc && visited[i].second == t_item.B_loc)
////            return -1;
////    }
////    if(B_goal) return -1;
////    if(R_move || B_move) return 1; // 둘중 하나라도 움직이면 큐_인
////    return -1;
////}
////int go_L(item &t_item){
////    bool R_goal = false, B_goal = false;
////    bool R_move = false, B_move = false;
////    if(t_item.R_loc.second < t_item.B_loc.second){
////        while(b_map[t_item.R_loc.first][t_item.R_loc.second - 1] == '.'){
////            t_item.R_loc.second--;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first][t_item.R_loc.second-1] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////        while(b_map[t_item.B_loc.first][t_item.B_loc.second - 1] == '.'){
////            t_item.B_loc.second--;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first][t_item.B_loc.second-1] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////    }
////    else{
////        while(b_map[t_item.B_loc.first][t_item.B_loc.second - 1] == '.'){
////            t_item.B_loc.second--;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first][t_item.B_loc.second-1] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////        while(b_map[t_item.R_loc.first][t_item.R_loc.second - 1] == '.'){
////            t_item.R_loc.second--;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first][t_item.R_loc.second-1] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////    }
////    b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////    b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////    if(R_goal && !B_goal) return 2; // 골인
////    for(int i = 0 ; i < visited.size(); i++){
////        if(visited[i].first == t_item.R_loc && visited[i].second == t_item.B_loc)
////            return -1;
////    }
////    if(B_goal) return -1;
////    if(R_move || B_move) return 1; // 둘중 하나라도 움직이면 큐_인
////    return -1;
////}
////int go_D(item &t_item){
////    bool R_goal = false, B_goal = false;
////    bool R_move = false, B_move = false;
////    if(t_item.R_loc.first > t_item.B_loc.first){
////        while(b_map[t_item.R_loc.first+1][t_item.R_loc.second] == '.'){
////            t_item.R_loc.first++;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first + 1][t_item.R_loc.second] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////        while(b_map[t_item.B_loc.first + 1][t_item.B_loc.second] == '.'){
////            t_item.B_loc.first++;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first + 1][t_item.B_loc.second] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////    }
////    else{
////        while(b_map[t_item.B_loc.first + 1][t_item.B_loc.second] == '.'){
////            t_item.B_loc.first++;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first + 1][t_item.B_loc.second] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////        while(b_map[t_item.R_loc.first + 1][t_item.R_loc.second] == '.'){
////            t_item.R_loc.first++;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first + 1][t_item.R_loc.second] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////    }
////    b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////    b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////    if(R_goal && !B_goal) return 2; // 골인
////    for(int i = 0 ; i < visited.size(); i++){
////        if(visited[i].first == t_item.R_loc && visited[i].second == t_item.B_loc)
////            return -1;
////    }
////    if(B_goal) return -1;
////    if(R_move || B_move) return 1; // 둘중 하나라도 움직이면 큐_인
////    return -1;
////}
////int go_U(item &t_item){
////    bool R_goal = false, B_goal = false;
////    bool R_move = false, B_move = false;
////    if(t_item.R_loc.first > t_item.B_loc.first){
////        while(b_map[t_item.R_loc.first-1][t_item.R_loc.second] == '.'){
////            t_item.R_loc.first--;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first - 1][t_item.R_loc.second] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////        while(b_map[t_item.B_loc.first - 1][t_item.B_loc.second] == '.'){
////            t_item.B_loc.first--;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first - 1][t_item.B_loc.second] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////    }
////    else{
////        while(b_map[t_item.B_loc.first - 1][t_item.B_loc.second] == '.'){
////            t_item.B_loc.first--;
////            B_move = true;
////        }
////        b_map[t_item.B_loc.first][t_item.B_loc.second] = 'B';
////        if(b_map[t_item.B_loc.first - 1][t_item.B_loc.second] == 'O'){
////            B_goal = true;
////            b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////        }
////        while(b_map[t_item.R_loc.first - 1][t_item.R_loc.second] == '.'){
////            t_item.R_loc.first--;
////            R_move = true;
////        }
////        b_map[t_item.R_loc.first][t_item.R_loc.second] = 'R';
////        if(b_map[t_item.R_loc.first - 1][t_item.R_loc.second] == 'O'){
////            R_goal = true;
////            b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////        }
////    }
////    b_map[t_item.B_loc.first][t_item.B_loc.second] = '.';
////    b_map[t_item.R_loc.first][t_item.R_loc.second] = '.';
////    if(R_goal && !B_goal) return 2; // 골인
////    for(int i = 0 ; i < visited.size(); i++){
////        if(visited[i].first == t_item.R_loc && visited[i].second == t_item.B_loc)
////            return -1;
////    }
////    if(B_goal) return -1;
////    if(R_move || B_move) return 1; // 둘중 하나라도 움직이면 큐_인
////    return -1;
////}
////
////void bfs(item my_i){
////    queue<item> q;
////    q.push(my_i);
////    visited.push_back(make_pair(my_i.R_loc, my_i.B_loc));
////    while(!q.empty()){
////        item t_i = q.front();
////        q.pop();
////
////        for(int i = 0 ; i < 4; i++){
////            item tmp_i = t_i; int w_num = -1;
////            switch (i) {
////                case 1:
////                    w_num = go_R(tmp_i);
////                    break;
////                case 2:
////                    w_num = go_L(tmp_i);
////                    break;
////                case 3:
////                    w_num = go_U(tmp_i);
////                    break;
////                case 0:
////                    w_num = go_D(tmp_i);
////                    break;
////            }
////            if(w_num == 2){
////                cout << t_i.cnt << "\n";
////                return;
////            }else if(w_num == 1){
////                q.emplace(tmp_i.R_loc, tmp_i.B_loc, tmp_i.cnt+1);
////                visited.push_back(make_pair(tmp_i.R_loc, tmp_i.B_loc));
////            }
////        }
////    }
////    cout << -1 << "\n";
////}
////
////int main(){
////    cin.tie(NULL);
////    ios::sync_with_stdio(false);
////
////    item my_i(make_pair(0, 0), make_pair(0, 0), 1);
////
////    cin >> N >> M;
////    for(int i = 0; i < N; i++){
////        for(int j = 0 ; j < M; j++){
////            cin >> b_map[i][j];
////            if(b_map[i][j] == 'R') {
////                my_i.R_loc.first = i;
////                my_i.R_loc.second= j;
////                b_map[i][j] = '.';
////            }
////            if(b_map[i][j] == 'B') {
////                my_i.B_loc.first = i;
////                my_i.B_loc.second= j;
////                b_map[i][j] = '.';
////            }
////        }
////    }
////    bfs(my_i);
////}
//
