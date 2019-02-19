//#include <iostream>
//#include <queue>
//#include <vector>
//#include <string.h>
//
//using namespace std;
//
//int N;
//long tab[101][101];
//long visit[101][101];
//pair<int, int> loc[2] = {make_pair(0, 1), make_pair(1, 0)};
//
////void dfs(long x, long y){ //dfs로 하니깐 시간초과.. 어떻게 줄일 수 있나?
////    if(x == N-1 && y == N-1) return;
////
////    if(tab[y][x] == 0) return;
////
////    for(pair<int, int> p : loc){
////        long next_x = x + tab[y][x] * p.second;
////        long next_y = y + tab[y][x] * p.first;
////        if(next_x >= N || next_y >= N) continue;
////        visit[next_y][next_x] += visit[x][y];
////        if(visit[next_y][next_x] == visit[x][y]) dfs(next_x, next_y);
////    }
////}
//
//int main(){
//    cin >> N;
//    for(int i = 0 ; i < 101; i++){
//        memset(visit[i],0,sizeof(long)*101);
//    }
//    
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            cin >> tab[i][j];
//        }
//    }
//    visit[0][0] = 1;
////    dfs(0,0);
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            if(visit[i][j] == 0) continue;
//            else if(tab[i][j] == 0) continue;
//            else{
//                for(pair<int, int> p : loc){
//                    long next_i = i + tab[i][j] * p.second;
//                    long next_j = j + tab[i][j] * p.first;
//                    if(next_i >= N || next_j >= N) continue;
//                    visit[next_i][next_j] += visit[i][j];
//                }
//            }
//        }
//    }
//    
//    cout << visit[N-1][N-1] << endl;
//    return 0;
//}

