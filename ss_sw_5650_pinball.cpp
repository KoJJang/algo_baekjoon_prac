//#include<iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef pair<P, int> PP;
//typedef pair<P, P> PPP;
//
//vector<PPP> wormhole;
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
//int mp[101][101], N;
//int block[6][4] = {{}, {1,3,0,2}, {1,2,3,0} , {2,0,3,1},
//                {3,0,1,2}, {1,0,3,2}};
//int bfs(P cur){
//    int max_val = -1;
//    for(int i = 0 ; i < 4; i++){ // 동, 서, 남, 북
//        P tmp_C = cur;
//        int tmp_dir = i;
//        int cnt = 0;
//        int nexNum = -1;
//        do{
//            tmp_C = {tmp_C.first+dir[tmp_dir].first, tmp_C.second + dir[tmp_dir].second};
//            if(tmp_C.first == -1 || tmp_C.second == -1||
//               tmp_C.first == N || tmp_C.second == N){
//                cnt++;
//                tmp_dir = block[5][tmp_dir];
//                continue;
//            }
//            nexNum = mp[tmp_C.first][tmp_C.second];
//            if(nexNum >= 6){
//                if(wormhole[nexNum].first == tmp_C) {
//                    tmp_C = wormhole[nexNum].second;
//                }else tmp_C = wormhole[nexNum].first;
//            }else if(nexNum >= 1){
//                cnt++;
//                tmp_dir = block[nexNum][tmp_dir];
//            }
//        }while(tmp_C != cur && nexNum != -1);
//        max_val = max_val < cnt ? cnt : max_val;
//    }
//    return max_val;
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    cin>>T;
//    wormhole.resize(11);
//    for(test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> N;
//        for(int i = 0 ; i < 101; i++){
//            memset(mp[i], -1, sizeof(int)*101);
//        }
//        bool hole[11] = {false,};
//        for(int i = 0 ; i < N; i++){
//            for(int j = 0 ; j < N ; j++){
//                cin >> mp[i][j];
//                if(mp[i][j] >=6){
//                    if(!hole[mp[i][j]]){
//                        wormhole[mp[i][j]].first = {i,j};
//                        hole[mp[i][j]] = true;
//                    }else{
//                        wormhole[mp[i][j]].second = {i,j};
//                    }
//                }
//            }
//        }
//        int ans = -1;
//        for(int i = 0 ; i < N; i++){
//            for(int j = 0 ; j < N ; j++){
//                if(mp[i][j] == 0){
//                    int tmp_ans = bfs({i,j});
//                    ans = tmp_ans > ans ? tmp_ans : ans;
//                }
//            }
//        }
//        cout << "#" <<test_case << " " << ans << endl;
//        wormhole.clear();
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}

