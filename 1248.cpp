//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//int dat[10][10];
//int used_num[21];
//vector<int> using_num;
//
//int chk_int(int beg, int fin){
//    int tmp_result = 0;
//    for(int i = beg; i <= fin; i++){
//        tmp_result += using_num[i];
//    }
//    if(tmp_result > 0 ) return 1;
//    if(tmp_result == 0 ) return 0;
//    if(tmp_result < 0 ) return -1;
//
//    return 0;
//}
//
//bool dfs(int cnt){
//    if(cnt == N){
//        for(int i = 0 ; i < N; i++){
//            for(int j = i; j < N; j++){
//                if(chk_int(i, j) != dat[i][j]){
//                    using_num.pop_back();
//                    return false;
//                }
//            }
//        }과//        return true;
//    }else {
//        // 아래 처럼 하면 백준 시간초과
//        if(dat[cnt][cnt] == 1){
//            for(int i = 11; i < 21; i++){
//                using_num.push_back(used_num[i]);
//                if(dfs(cnt+1)) return true;
//            }
//        }else if(dat[cnt][cnt] == -1){
//            for(int i = 0; i < 10; i++){
//                using_num.push_back(used_num[i]);
//                if(dfs(cnt+1)) return true;
//            }
//        }else {
//            using_num.push_back(0);
//            if(dfs(cnt+1)) return true;
//        }
//        // 아래처럼 하면 백준 통과
////        for(int i = 0; i <= 21; i++){
////            using_num.push_back(used_num[i]);
////            bool isItOk = true;
////
////            for(int k = 0 ; k < cnt+1; k++){ // 중간점검
////                for(int j = k; j < cnt+1; j++){
////                    if(chk_int(k, j) != dat[k][j]){
////                        using_num.pop_back();
////                        isItOk = false;
////                        break;
////                    }
////                }
////                if(!isItOk) break;
////            }
////
////            if(isItOk){
////                if(dfs(cnt+1)) return true;
////            }
////        }
//    }
//
//    using_num.pop_back(); // 중간 점검은 통과했는데 뒤에서 문제있는경우
//    cout << "asd" << endl;
//    return false;
//}
//
//int main(){
//    cin >> N;
//    int tmp_num = -10;
//    char tmp;
//    for(int i = 0 ; i < N; i++){
//        for(int j = i ; j < N; j++){
//            cin >> tmp;
//            if(tmp == '-'){
//                dat[i][j] = -1;
//            }else if(tmp == '+'){
//                dat[i][j] = 1;
//            }else{
//                dat[i][j] = 0;
//            }
//        }
//    }
//
//    for(int i = 0 ; i < 21; i++){
//        used_num[i] = tmp_num++;
//    }
//    dfs(0);
//
//    for(int i : using_num) cout << i << " ";
//    cout << endl;
//
//    return 0;
//}

