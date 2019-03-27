//#include <iostream>
//
//using namespace std;
//
//int map[101][101];
//int N, L, ans = 0;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N >> L;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            cin >> map[i][j];
//        }
//    }
//    for(int i = 0 ; i < N; i++){
//        int same_num = 0, gap;
//        bool isOk = true;
//        for(int j = 0; j < N-1; ++j){
//            gap = map[i][j] - map[i][j+1];
//            if(gap == 0) same_num++;
//            else if (gap == 1){ // 현재가 다음보다 높다
//                if (j + L >= N) { // L이 범위 밖이면
//                    isOk = false; break;
//                }
//                for(int a = j+1; a < j + L + 1; a++){
//                    if(map[i][j] - map[i][a] != 1) { // 다음 범위까지 같은 경사가 아니면
//                        isOk = false; break;
//                    }
//                }
//                if(!isOk) break;
//                j += L;
//                same_num = 0;
//                if(j < N-1){ // 경사 만들자 마자 다음에 높은 경사 만들어야하면
//                    if(map[i][j] - map[i][j+1] == -1){
//                        isOk = false; break;
//                    }
//                }
//            }else if (gap == -1){ // 현재가 다음보다 낮다
//                same_num++;
//                if(same_num < L) { // 낮은 길이가 충분치 않으면
//                    isOk = false;
//                    break;
//                }
//                same_num = 0;
//            }else { // 차이가 1 이상
//                isOk = false;
//                break;
//            }
//        }
//        if(isOk) {
////            cout << i << ", ";
//            ans++;
//        }
//    }
//    
//    for(int i = 0 ; i < N; i++){
//        int same_num = 0, gap;
//        bool isOk = true;
//        for(int j = 0; j < N-1; ++j){
//            gap = map[j][i] - map[j+1][i];
//            if(gap == 0) same_num++;
//            else if (gap == 1){ // 현재가 다음보다 높다
//                if (j + L >= N) { // L이 범위 밖이면
//                    isOk = false; break;
//                }
//                for(int a = j+1; a < j + L + 1; a++){
//                    if(map[j][i] - map[a][i] != 1) { // 다음 범위까지 같은 경사가 아니면
//                        isOk = false; break;
//                    }
//                }
//                if(!isOk) break;
//                j += L;
//                same_num = 0;
//                if(j < N-1){ // 경사 만들자 마자 다음에 높은 경사 만들어야하면
//                    if(map[j][i] - map[j+1][i] == -1){
//                        isOk = false; break;
//                    }
//                }
//            }else if (gap == -1){ // 현재가 다음보다 낮다
//                same_num++;
//                if(same_num < L) { // 낮은 길이가 충분치 않으면
//                    isOk = false;
//                    break;
//                }
//                same_num = 0;
//            }else { // 차이가 1 이상
//                isOk = false;
//                break;
//            }
//        }
//        if(isOk) {
////            cout << i << ", ";
//            ans++;
//        }
//    }
//
//    cout << ans << endl;
//}

