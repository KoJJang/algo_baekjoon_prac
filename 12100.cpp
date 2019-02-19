//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <stack>
//
//using namespace std;
//
//int game[21][21];
//int N;
//int max_val = -1;
//
//void find_max(stack<int> combi, int tmp_map[][21]){
//    while(!combi.empty()){
//        switch (combi.top()) {
//            case 0: // 왼
////                cout << "L";
//                for(int i = 0; i < N; i++){
//                    for(int j = 0; j < N-1; j++){
//                        for(int k = j+1; k < N; k++){
//                            if(tmp_map[i][k] == tmp_map[i][j]){
//                                tmp_map[i][j] *= 2;
//                                tmp_map[i][k] = 0;
//                                break;
//                            }else if (tmp_map[i][k] > 0) break;
//                        }
//                    }
//                    for(int j = 0; j < N-1; j++){
//                        if(tmp_map[i][j] == 0){
//                            for(int k = j+1; k < N; k++){
//                                if(tmp_map[i][k] > 0){
//                                    tmp_map[i][j] = tmp_map[i][k];
//                                    tmp_map[i][k] = 0;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                }
//                break;
//            case 1: // 오
////                cout << "R";
//                for(int i = 0; i < N; i++){
//                    for(int j = N-1; j > 0; j--){
//                        for(int k = j-1; k >= 0; k--){
//                            if(tmp_map[i][k] == tmp_map[i][j]){
//                                tmp_map[i][j] *= 2;
//                                tmp_map[i][k] = 0;
//                                break;
//                            }else if (tmp_map[i][k] > 0) break;
//                        }
//                    }
//                    for(int j = N-1; j > 0; j--){
//                        if(tmp_map[i][j] == 0){
//                            for(int k = j-1; k >= 0; k--){
//                                if(tmp_map[i][k] > 0){
//                                    tmp_map[i][j] = tmp_map[i][k];
//                                    tmp_map[i][k] = 0;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                }
//                break;
//            case 2: // 위
////                cout << "U";
//                for(int j = 0; j < N; j++){
//                    for(int i = 0; i < N-1; i++){
//                        for(int k = i+1; k < N; k++){
//                            if(tmp_map[i][j] == tmp_map[k][j]){
//                                tmp_map[i][j] *= 2;
//                                tmp_map[k][j] = 0;
//                                break;
//                            }else if (tmp_map[k][j] > 0) break;
//                        }
//                    }
//                    for(int i = 0; i < N-1; i++){
//                        if(tmp_map[i][j] == 0){
//                            for(int k = i+1; k < N; k++){
//                                if(tmp_map[k][j] > 0){
//                                    tmp_map[i][j] = tmp_map[k][j];
//                                    tmp_map[k][j] = 0;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                }
//                break;
//            case 3: // 아래
////                cout << "D";
//                for(int j = 0; j < N; j++){
//                    for(int i = N-1; i > 0; i--){
//                        for(int k = i-1; k >= 0; k--){
//                            if(tmp_map[i][j] == tmp_map[k][j]){
//                                tmp_map[i][j] *= 2;
//                                tmp_map[k][j] = 0;
//                                break;
//                            }else if (tmp_map[k][j] > 0) break;
//                        }
//                    }
//                    for(int i = N-1; i > 0; i--){
//                        if(tmp_map[i][j] == 0){
//                            for(int k = i-1; k >= 0; k--){
//                                if(tmp_map[k][j] > 0){
//                                    tmp_map[i][j] = tmp_map[k][j];
//                                    tmp_map[k][j] = 0;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                }
//                break;
//            default:
//                cout << "wrong val \n";
//                break;
//        }
//        combi.pop();
//    }
////    cout<<"\n";
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N ; j++){
//            if(tmp_map[i][j] > max_val){
//                max_val = tmp_map[i][j];
//            }
//        }
//    }
//}
//
//void make_combi(stack<int> combi, int cnt){ // 좌 , 우 , 위 , 아래
//    if(cnt == 5){
//        int tmp_map[21][21];
//        for(int i = 0 ; i < 21 ; i++){
//            memset(tmp_map[i], 0, sizeof(int)*21);
//        }
//        for(int i = 0 ; i < N ; i++){
//            for(int j = 0 ; j < N ; j ++){
//                tmp_map[i][j] = game[i][j];
//            }
//        }
//        find_max(combi, tmp_map);
//
////        for(int i = 0 ; i < N ; i++){
////            for(int j = 0 ; j < N ; j++){
////                cout <<  tmp_map[i][j] << " ";
////            }
////            cout << "\n";
////        }cout << "\n";
//
//        return;
//    }
//    combi.push(0);
//    make_combi(combi, cnt+1);
//    combi.pop();
//    combi.push(1);
//    make_combi(combi, cnt+1);
//    combi.pop();
//    combi.push(2);
//    make_combi(combi, cnt+1);
//    combi.pop();
//    combi.push(3);
//    make_combi(combi, cnt+1);
//    combi.pop();
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    for(int i = 0 ; i < 21; i++){
//        memset(game[i], 0, sizeof(int)*21);
//    }
//    cin >> N;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            cin >> game[i][j];
//        }
//    }
//    stack<int> tmp;
//    make_combi(tmp, 0);
//    cout << max_val << "\n";
//}

