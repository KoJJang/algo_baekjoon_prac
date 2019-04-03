//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int N, M, ans = 0;
//char tb[51][51];
//bool visited[51][51] = {false,};
//int  cnt[51][51] = {0,};
//int dx[4] = {0, 0, 1, -1};
//int dy[4] = {1, -1, 0, 0};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N >> M;
//
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < M; j++){
//            cin >> tb[i][j];
//            if(tb[i][j] == '.') ans++;
//            if(tb[i][j] == 'X') {
//                visited[i][j] = true;
//                cnt[i][j] = -1;
//            }
//        }
//    }
//
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < M; j++){
//            if(visited[i][j]) continue;
//            for(int d = 0 ; d < 4; d++){ // 아래 위 오 왼
//                int n_x = j + dx[d], n_y = i + dy[d];
//                if(tb[n_y][n_x] == 'X' || n_x < 0 || n_y < 0 || n_x >=M || n_y >= N)
//                    cnt[i][j]++;
//            }
//        }
//    }
//
////    int Csize = 3;
//    for(int Csize = 3; Csize >= 1; Csize--){ // 심각한 곳 부터 타일 2개 놓는다
//        for(int i = 0 ; i < N; i++){
//            for(int j = 0 ; j < M; j++){
//                if(visited[i][j] || cnt[i][j] != Csize) continue;
//                visited[i][j] = true;
//                for(int d = 0 ; d < 4; d++){ // 아래 위 오 왼
//                    int n_x = j + dx[d], n_y = i + dy[d];
//                    if(tb[n_y][n_x] == 'X' || n_x < 0 || n_y < 0 ||
//                       n_x >=M || n_y >= N || visited[n_y][n_x])
//                        continue;
//                    else {
//                        visited[n_y][n_x] = true;
//                        ans--;
////                        cout << i << ", " << j << " -- " << n_y << ", " << n_x << "\n";
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    cout << ans << "\n";
//}

