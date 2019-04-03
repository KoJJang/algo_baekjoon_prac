//#include <iostream>
//#include <queue>
//#include <cmath>
//
//using namespace std;
//typedef pair<int, char> P;
//queue<P> v;
//
//int N, K, L;
//int mp[101][101] = {0, };
//int dx[4] = {0, 1, 0 , -1};
//int dy[4] = {-1, 0, 1, 0};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> N >> K;
//    int t_i, t_j;
//    for(int i = 0 ; i < K; i++){
//        cin >> t_i >> t_j;
//        mp[t_i-1][t_j-1] = -1;
//    }
//    cin >> L;
//    char t_c;
//    for(int i = 0 ; i < L; i++){
//        cin >> t_i >> t_c;
//        v.push({t_i, t_c});
//    }
//    int ans = 0, cur_d = 1;
//    pair <int, int> cur = {0,0};
//    pair<int, int> next_cur, tail_cur = {0,0};
//    mp[cur.first][cur.second] = 2;
//    while(1){
//        ans++;
//        next_cur.first = cur.first + dy[cur_d];
//        next_cur.second = cur.second + dx[cur_d];
//        if(mp[next_cur.first][next_cur.second] > 0 || next_cur.first >= N ||
//           next_cur.second >= N || next_cur.first < 0 || next_cur.second < 0) { // 벽이나 스스로에 부딪히는 경우
//            cout << ans << endl;
//            return 0;
//        }
//        else {
//            if(mp[next_cur.first][next_cur.second] != -1){ // 사과 안먹은 경우
////                mp[cur.first][cur.second] = 0;
//                pair<int, int> prev_tail = tail_cur;
//                int n_f, n_s;
//                n_f = tail_cur.first + dy[mp[tail_cur.first][tail_cur.second]-1];
//                n_s = tail_cur.second + dx[mp[tail_cur.first][tail_cur.second]-1];
////                tail_cur.first += dy[mp[tail_cur.first][tail_cur.second]-1]; // 여기서 문제가 잘못됐었다.. 잘 찾아서 다행 앞으로 주의하자 별표 백개
////                tail_cur.second += dx[mp[tail_cur.first][tail_cur.second]-1];
//                tail_cur = {n_f, n_s};
//                mp[prev_tail.first][prev_tail.second] = 0;
//            }
//            mp[next_cur.first][next_cur.second] = cur_d + 1;
//        }
//        cur = next_cur;
//        if(v.empty()) continue;
//        if(ans == v.front().first){
//            if(v.front().second == 'D'){
//                cur_d = ( cur_d + 1 ) % 4;
//            }else {
//                if (cur_d == 0) cur_d = 3;
//                else cur_d --;
//            }
//            mp[next_cur.first][next_cur.second] = cur_d + 1;
//            v.pop();
//        }
//    }
//}

