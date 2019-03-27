//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef pair<int, int> P;
//
//int N, K;
//int tab[10][10], G[21], M[21], Zidx = 0, Gidx = 0, Midx = 0; // Z - 지우, G - 경희, M - 민호
//int record[3][21], idx[3] = {0,}, win_num[3] = {0,};
//vector<int> Z;
//
//bool rf(int ziu, int gye, int min, P match){
//    // 지우가 N번 나오면 false
//    while(1){
//        int first = record[match.first][idx[match.first]];
//        int second = record[match.second][idx[match.second]];
//        if(tab[first][second] == 2 || // 앞사람이 이기거나
//           (tab[first][second] == 1 && match.first > match.second)){ // 비겼는데 앞사람이 나중 순번
//            idx[match.first]++; // 내는 순서 한계식 증가
//            idx[match.second]++;
//            win_num[match.first]++; // 이긴 사람 횟수 증가
//            for(int i = 0 ; i < 3; i++){ // 진 사람은 경기 안나온 사람으로 대체
//                if( i != match.first && i != match.second ) {
//                    match.second = i;
//                    break;
//                }
//            }
//        }else{ // 뒷사람이 이겼으면
//            idx[match.first]++;
//            idx[match.second]++;
//            win_num[match.second]++;
//            for(int i = 0 ; i < 3; i++){
//                if( i != match.first && i != match.second ) {
//                    match.first = i;
//                    break;
//                }
//            }
//        }
//        if(win_num[0] == K) return true;
//        if(win_num[1] == K || win_num[2] ==K) return false;
//        if(idx[0] == N) return false;
//    }
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N >> K;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            cin >> tab[i][j];
//        }
//    }
//    for(int i = 0 ; i < 20; i++){
//        cin >> record[1][i]; record[1][i]--;
//    }
//    for(int i = 0 ; i < 20; i++){
//        cin >> record[2][i]; record[2][i]--;
//    }
//    for(int i = 0 ; i < N; i++){
//        Z.push_back(i);
//    }
//    
//    do{
//        for(int i = 0 ; i < N; i++){
//            record[0][i] = Z[i];
////            cout << Z[i] << " ";
//        }
////        cout << endl;
//        
//        for(int i = 0 ; i < 3; i++){
//            win_num[i] = 0; idx[i] = 0;
//        }
//        
//        if(rf(0,0,0,{0,1})){
//            cout << 1 << endl;
//            return 0;
//        }
//        
//    }while(next_permutation(Z.begin(), Z.end()));
//    cout << 0 << endl;
//}

