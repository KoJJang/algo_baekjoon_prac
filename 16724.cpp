//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//enum dir {D=0, U, L, R};
//
//typedef pair<int, int> P;
//int N, M, ans = 0;
//char map[1001][1001];
//bool visited[1001][1001] = {false,}, total_visited[1001][1001] = {false,};
//int dx[4] = {0, 0, -1, 1};
//int dy[4] = {1, -1, 0, 0};
//
//queue<P> q;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N >> M;
//    
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0; j < M ; j++){
////            scanf("%c",&map[i][j]);
//            cin >> map[i][j];
//        }
//    }
//    
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0; j < M; j++){
//            if(!total_visited[i][j]){
//                ans++;
//                q.push({i,j});
//                queue<P> path;
//                path.push({i,j});
//                while(!q.empty()){
//                    P cur = q.front();
//                    visited[cur.first][cur.second] = true;
//                    P next_cur;
//                    switch (map[cur.first][cur.second]) {
//                        case 'D':
//                            next_cur = {cur.first + dy[0], cur.second + dx[0]};
//                            break;
//                        case 'U':
//                            next_cur = {cur.first + dy[1], cur.second + dx[1]};
//                            break;
//                        case 'L':
//                            next_cur = {cur.first + dy[2], cur.second + dx[2]};
//                            break;
//                        case 'R':
//                            next_cur = {cur.first + dy[3], cur.second + dx[3]};
//                            break;
//                    }
//                    if(total_visited[next_cur.first][next_cur.second]) {
//                        q.pop();
//                        ans--;
//                        break;
//                    }
//                    if(!visited[next_cur.first][next_cur.second]) {
//                        q.push(next_cur);
//                        path.push(next_cur);
//                    }
//                    q.pop();
//                }
//                int ps = path.size();
//                for(int p = 0; p < ps; p++){
//                    total_visited[path.front().first][path.front().second] = true;
//                    visited[path.front().first][path.front().second] = false;
//                    path.pop();
//                }
//            }
//        }
//    }
//    cout << ans << endl;
//}

