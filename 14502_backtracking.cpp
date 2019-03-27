//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> P;
//
//int N , M, ans = 0, min_v = 0x3f3f3f3f;
//int map[9][9];
//vector<P> v;
//P dir[4] = {{0,1},{0,-1},{1,0},{-1,0}};
//
//int bfs(P cur){
//    queue<P> q;
//    int num_v = 0;
//    q.push(cur);
//    while(!q.empty()){
//        cur = q.front();
//        for(int i = 0 ; i < 4; i++){
//            P tmp_p = {cur.first + dir[i].first, cur.second + dir[i].second};
//            if(tmp_p.first < 0 || tmp_p.second < 0) continue;
//            if(tmp_p.first >= N || tmp_p.second >= M) continue;
//            if(map[tmp_p.first][tmp_p.second] == 0){
//                map[tmp_p.first][tmp_p.second] = 2;
//                num_v++;
//                q.push(tmp_p);
//            }
//        }
//        q.pop();
//        if(num_v > min_v) break;
//    }
//    return num_v;
//}
//
//void clean_map(){
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < M ; j++){
//            if(map[i][j] == 2) map[i][j] = 0;
//        }
//    }
//    for(int a = 0; a < v.size(); a++){
//        map[v[a].first][v[a].second] = 2; // 지도에 처음 바이러스 위치 그려줌
//    }
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    cin >> N >> M;
//
//    for(int i = 0 ; i < 9; i++){
//        memset(map[i], -1, sizeof(int)*9);
//    }
//
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < M ; j++){
//            cin >> map[i][j];
//            if(map[i][j] == 2) v.push_back({i,j});
//            else if(map[i][j] == 0) ans++;
//        }
//    }
//
//    for(int i = 0 ; i < N*M-2; i++){
//        if(map[i/M][i%M] != 0) continue;
//        map[i/M][i%M] = 1;
//
//        for(int j = i+1; j < N*M-1; j++){
//            if(map[j/M][j%M] != 0) continue;
//            map[j/M][j%M] = 1;
//
//            for(int k = j+1; k < N*M; k++){
//                if(map[k/M][k%M] == 0) {
//                    map[k/M][k%M] = 1;
//                    int tmp_v = 0;
//
//                    for(int a = 0; a < v.size(); a++){
//                        tmp_v += bfs(v[a]); // 찾은 바이러스 갯수 더함
//                        if(tmp_v > min_v) break;
//                    }
//
//                    clean_map(); // 지도에 그린 바이러스 다 지움
//
//                    if(tmp_v < min_v) { // 만약 바이러스 갯수가 최소라면
//                        min_v = tmp_v;
//                    }
//                    map[k/M][k%M] = 0;
//                }
//            }
//            map[j/M][j%M] = 0;
//        }
//        map[i/M][i%M] = 0;
//    }
//    cout << ans - min_v - 3<< endl;
//
//}

