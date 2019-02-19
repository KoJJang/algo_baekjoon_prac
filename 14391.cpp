//#include <iostream>
//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//
//int N, M, paper[5][5] = {}, visited[5][5] = {};
//int res = -1;
//
//void check(){
//    int tmpSum = 0, Sum = 0;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < M; j++){
//            if(visited[i][j] == 1){
//                tmpSum = tmpSum*10 + paper[i][j];
//            }else{
//                Sum += tmpSum;
//                tmpSum = 0;
//            }
//        }
//        Sum += tmpSum;
//        tmpSum = 0;
//    }
//
//    for(int i = 0 ; i < M; i++){
//        for(int j = 0 ; j < N; j++){
//            if(visited[j][i] == 0){
//                tmpSum = tmpSum*10 + paper[j][i];
//            }else{
//                Sum += tmpSum;
//                tmpSum = 0;
//            }
//        }
//        Sum += tmpSum;    
//        tmpSum = 0;
//    }
//
//    if(Sum > res) res = Sum;
//}
//
//void dfs(int i, int j){
//    if(i == N) {
//        check();
//        return;
//    }
//    if(j == M){
//        dfs(i+1, 0);
//        return;
//    }
//    visited[i][j] = 1;
//    dfs(i,j+1);
//    visited[i][j] = 0;
//    dfs(i,j+1);
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    cin >> N >> M;
//    memset(paper,   0,  sizeof(int)*5);
//    memset(visited, 0,  sizeof(int)*5);
//
//    for(int i = 0; i < N; i++){
//        for(int j = 0; j < M; j++){
//            scanf("%1d",&paper[i][j]);
//        }
//    }
//
//    dfs(0, 0);
//
//    cout << res << "\n";
//
//    return 0;
//}

