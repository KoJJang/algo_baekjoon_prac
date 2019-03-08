//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//typedef pair<int, int> P;
//typedef pair<int, P> PP;
//
//int N, M;
//int tab_val[501][501];
//int visited[501][501];
//int res = -1;
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}}; // 우, 좌, 하, 상
//
//void dfs(int cnt, int tmp_res, int xpos, int ypos){
//    if (cnt >= 5) {
//        res = tmp_res > res ? tmp_res : res;
//        return;
//    }
//    for(int i = 0 ; i < 4; i++){
//        int n_xpos = xpos + dir[i].first;
//        int n_ypos = ypos + dir[i].second;
//        if(n_xpos >= N || n_ypos >= M) continue;
//        if(n_xpos < 0 || n_ypos < 0) continue;
//        if(visited[n_xpos][n_ypos]) continue;
//        visited[xpos][ypos] = true;
//        dfs(cnt+1, tmp_res + tab_val[xpos][ypos], n_xpos, n_ypos);
//        visited[xpos][ypos] = false;
//    }
//}
//
//void otherForm(int xpos, int ypos){
//    int tmp_res = -1, t_sum = 0;
//    if(ypos-1 >= 0 && xpos -1 >= 0 && xpos +1 <N){
//        for(int i = 0 ; i < 3; i++){
//            t_sum += tab_val[xpos-1 + i][ypos-1];
//        }
//        tmp_res = tmp_res > t_sum ? tmp_res : t_sum;
//    }
//    if(ypos+1 < M && xpos -1 >= 0 && xpos +1 <N){
//        t_sum = 0;
//        for(int i = 0 ; i < 3; i++){
//            t_sum += tab_val[xpos-1 + i][ypos+1];
//        }
//        tmp_res = tmp_res > t_sum ? tmp_res : t_sum;
//    }
//    if(xpos-1 >= 0 && ypos -1 >= 0 && ypos +1 <M){
//        t_sum = 0;
//        for(int i = 0 ; i < 3; i++){
//            t_sum += tab_val[xpos-1][ypos-1 + i];
//        }
//        tmp_res = tmp_res > t_sum ? tmp_res : t_sum;
//    }
//    if(xpos+1 < N && ypos -1 >= 0 && ypos +1 <M){
//        t_sum = 0;
//        for(int i = 0 ; i < 3; i++){
//            t_sum += tab_val[xpos+1][ypos-1 + i];
//        }
//        tmp_res = tmp_res > t_sum ? tmp_res : t_sum;
//    }
//    res = tmp_res + tab_val[xpos][ypos] > res ? tmp_res + tab_val[xpos][ypos] : res;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    cin >> N >> M;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < M; j++){
//            cin >> tab_val[i][j];
//        }
//    }
//
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < M; j++){
//            visited[i][j] = true;
//            dfs(1, 0, i, j);
//            visited[i][j] = false;
//            otherForm(i,j);
//        }
//    }
//
//    cout << res << "\n";
//}

