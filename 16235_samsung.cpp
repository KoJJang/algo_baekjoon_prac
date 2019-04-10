//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <deque>
//
//using namespace std;
//typedef pair<int, int> P;
//
//struct tree{
//    int ypos, xpos, ages;
//};
//
//int N, M, K;
//int A[11][11] = {0,}, plus_a[11][11]= {0,};
//vector<tree> add_tree;
//deque<int> v_m[11][11], v_dt[11][11];
//P dir[8] = {{0,1}, {0,-1}, {1,0}, {-1,0},
//    {1,1}, {1,-1}, {-1,1}, {-1,-1}};
//
//void spring(){
//    deque<int>::iterator it2;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            for(it2 = v_m[i][j].begin(); it2 != v_m[i][j].end(); it2++){
//                if(*it2 <= A[i][j]){
//                    A[i][j] -= *it2;
//                    (*it2)++;
//                }else {
//                    v_dt[i][j].insert(v_dt[i][j].begin(), it2, v_m[i][j].end());
//                    v_m[i][j].erase(it2, v_m[i][j].end());
//                    break;
//                }
//            }
//        }
//    }
//
//}
//void summer(){
//    deque<int>::iterator it2;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            for(it2 = v_dt[i][j].begin(); it2 != v_dt[i][j].end(); it2++){
//                A[i][j] += (*it2)/2;
//            }
//            v_dt[i][j].clear();
//        }
//    }
//}
//
//void fall(){
//    vector<tree>::iterator it;
//    deque<int>::iterator it2;
//    tree t_tree;
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0 ; j < N; j++){
//            for(it2 = v_m[i][j].begin(); it2 != v_m[i][j].end(); it2++){
//                if(*it2 % 5 == 0){
//                    for(int z = 0 ; z < 8; z++){ // 8방향 돌아다니면서
//                        P np = {i + dir[z].first, j + dir[z].second};
//                        //만약 범위를 벗어나면 추가 안한다
//                        if(np.first <0 || np.second <0 || np.first >= N || np.second >= N) continue;
//                        t_tree.ypos = np.first; t_tree.xpos = np.second; t_tree.ages = 1;
//                        add_tree.push_back(t_tree);
//                    }
//                }
//            }
//        }
//    }
//    for(it = add_tree.begin(); it != add_tree.end(); it++){
//        v_m[it->ypos][it->xpos].push_front(1);
//    }
//    add_tree.clear();
//}
//void winter(){
//    for(int i = 0 ; i < N; i++) for(int j = 0 ; j < N; j++){
//        A[i][j] += plus_a[i][j];
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N >> M >> K;
//    for(int i = 0 ; i < N; i++) for(int j = 0 ; j < N; j++){
//        cin >> plus_a[i][j];
//        A[i][j] = 5;
//    }
//    tree t;
//    for(int i = 0 ; i < M ; i++){
//        cin >> t.ypos >> t.xpos >> t.ages;
//        t.xpos--; t.ypos--;
//        v_m[t.ypos][t.xpos].push_back(t.ages);
//    }
//
//    for(int i = 0 ; i < K; i++){
//        spring();
//        summer();
//        fall();
//        winter();
//    }
//
//    int ans = 0;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++){
//            ans += (int)v_m[i][j].size();
//        }
//    }
//    cout << ans << endl;
//}
//
