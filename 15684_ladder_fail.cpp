//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <deque>
//using namespace std;
//
//typedef pair<int, int> P;
//typedef pair<P, int> PP;
//typedef pair<P, deque<PP>> PPP;
//
//int N, M, H, ans = 0;
//int mp[31][11] = {0,};
//int ladder[3][2] = {{1,0}, {1,1}, {1,-1}};
//
//bool add_ladder(P cur, int add_ladder_num){
//    if(cur.second == N) {
//        cout << add_ladder_num << "\n";
//        return true;
//    }
//    bool visited[31][11][4] = {false,};
//    for(int i = 0 ; i < 31; i++){
//        memset(visited[i], false, sizeof(bool)*44);
//    }
//    queue<PPP> q;
//    deque<PP> dq;
//    q.push({cur, dq});
//    visited[0][cur.second][0] = true;
//    int cur_num, ladd_num = 0, start_j = cur.second;
//    while(!q.empty()){
//        cur_num = mp[q.front().first.first][q.front().first.second];
//        cur = q.front().first;
//        dq = q.front().second;
//        ladd_num = (int)dq.size();
//        q.pop();
//        if(cur.first == H && cur.second == start_j){
//            for(int d = 0; d < (int)dq.size(); d++){
//                mp[dq[d].first.first][dq[d].first.second] = dq[d].second;
//                if(dq[d].second == 1) {
//                    mp[dq[d].first.first][dq[d].first.second+1] = 2;
//                }else {
//                    mp[dq[d].first.first][dq[d].first.second-1] = 1;
//                }
//            }
//            bool isFind = add_ladder({0,start_j+1}, add_ladder_num + ladd_num);
//            for(int d = 0; d < (int)dq.size(); d++){
//                mp[dq[d].first.first][dq[d].first.second] = 0;
//                if(dq[d].second == 1) {
//                    mp[dq[d].first.first][dq[d].first.second+1] = 0;
//                }else {
//                    mp[dq[d].first.first][dq[d].first.second-1] = 0;
//                }
//            }
//            if(isFind){
//                return true;
//            }
//            continue;
//        } // 맨 밑에 도착
//
//        if(cur_num !=0 ) { // 이미 다리가 놓여 져 있다면
//            P tmp_cur = {cur.first + ladder[cur_num][0],
//                cur.second + ladder[cur_num][1] };
//            if(!visited[tmp_cur.first][tmp_cur.second][ladd_num]){
//                visited[tmp_cur.first][tmp_cur.second][ladd_num] = true;
//                q.push({tmp_cur, dq});
//            }
//        }else {
//            //다리가 없다면
//            if(!visited[cur.first+1][cur.second][ladd_num]){
//                // 밑으로 내려가고
//                q.push({{cur.first+1, cur.second}, dq});
//                visited[cur.first+1][cur.second][ladd_num]= true;
//            }
//            if(ladd_num == 3 - add_ladder_num) continue; // 다리 이미 3개 뒀으면 끝
//            if(cur.second != N-1){
//                if(mp[cur.first][cur.second+1] == 0) {
//                    //오른쪽 사다리에 다리가 안놓아 져 있으면
//                    if(!visited[cur.first+1][cur.second+1][ladd_num+1]){
//                        // 오른쪽 아래에 간 적 없다
//                        visited[cur.first+1][cur.second+1][ladd_num+1] = true;
//                        dq.push_back({cur, 1});
//                        q.push({{cur.first+1, cur.second+1}, dq});
//                        dq.pop_back();
//                    }
//                }
//            }
//            if(cur.second != 0){
//                if(mp[cur.first][cur.second-1] == 0) {
//                    //왼쪽 사다리에 다리가 안놓아 져 있으면
//                    if(!visited[cur.first+1][cur.second-1][ladd_num+1]){
//                        // 왼쪽 아래에 간 적 없다
//                        visited[cur.first+1][cur.second-1][ladd_num+1] = true;
//                        dq.push_back({cur,2});
//                        q.push({{cur.first+1, cur.second-1}, dq});
//                        dq.pop_back();
//                    }
//                }
//            }
//        }
//    }
//   return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N >> M >> H; // 가로길이 N, 세로길이 H
//    for(int i = 0 ; i < 31; i++){
//        memset(mp[i], 0, sizeof(int)*11);
//    }
//    int a, b;
//    for(int i = 0 ; i < M ; i++){
//        cin >> a >> b;
//        mp[a-1][b-1] += 1; // 오른쪽 갈 수 있으면 + 1
//        mp[a-1][b] += 2; // 왼쪽 갈 수 있으면 + 2
//    }
//    if(!add_ladder({0,0}, 0)) cout << -1 << endl;
//
//    return 0;
//}

