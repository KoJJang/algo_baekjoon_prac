//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//
//#define MAX(a, b) (a > b ? a : b)
//using namespace std;
//
//int N, M, tmp_num;
//int candy_table[1002][1002] = {0,};
//int result_table[1002][1002] = {0,};
//
//bool isOk(int n) {
//    if(n >= 0) return true;
//    return false;
//}
//
//int main(){
//    cin >> N >> M ;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < M; j++){
//            cin >> tmp_num;
//            candy_table[i][j] = tmp_num;
//        }
//    }
//    result_table[0][0] = candy_table[0][0];
//
//    int i = 0, j = 1;
//    while(1){
//        if(isOk(i-1) && isOk(j-1) && (i-1) < N && (j-1) < M){
//            result_table[i][j] = MAX(result_table[i-1][j], result_table[i][j-1]) + candy_table[i][j];
//        }else if (isOk(i-1) && (i-1) < N){
//            result_table[i][j] = result_table[i-1][j] +candy_table[i][j];
//        }else if (isOk(j-1) && (j-1) < M){
//            result_table[i][j] = result_table[i][j-1] +candy_table[i][j];
//        }else break;
//        if(i >= N-1 && j >= M-1) break;
//        if(j >= M-1){
//            j = 0;
//            i++;
//        }else {
//            j++;
//        }
//    }
//    cout << result_table[N-1][M-1] << endl;
//    return 0;
//}

