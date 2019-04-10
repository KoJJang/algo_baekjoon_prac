//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> P;
//#define Y first
//#define X second
//int mp[13][13], N;
//int max_core = -1, min_line = 0x3f3f3f3f;
//vector<P> core;
//P dir[5] = { {1,0}, {0,1}, {-1,0}, {0,-1}, {0,0}};
//
//struct item{
//    int core_Num, line_Num, core_idx;
//};
//
//void dfs(int core_idx, int line_Num, int core_Num){
//
//    if(core_idx == (int)core.size()){ // 모든 코어 다 돌았으면
//        if(max_core == core_Num){
//            if(min_line > line_Num) min_line = line_Num;
//        }
//        else if(max_core < core_Num){
//            min_line = line_Num;
//            max_core = core_Num;
//        }
//        return;
//    }
//
//    P cur = {core[core_idx].Y, core[core_idx].X};
//    if(cur.Y == 0 || cur.X == 0 || cur.Y == N-1 || cur.X == N-1){
//        // 가장자리에 붙어있다면 바로추가
//        dfs(core_idx+1, line_Num, core_Num+1);
//        return;
//    }
//
//    for(int i = 0 ; i < 4; i++){ // 4방향 다 연결해본다
//        P np = cur;
//        int need_line = 0;
//        bool isFind = true;
//        do{
//            np = {np.Y + dir[i].Y, np.X + dir[i].X};
//            if(mp[np.Y][np.X] != 0){
//                isFind = false;
//                break;
//            }
//            need_line++;
//        }while(np.Y != 0 && np.X != 0 && np.Y != N-1 && np.X != N-1);
//        if(isFind){
//            // 라인이 성공적으로 그어질 수 있다면
//            P nnp = cur;
//            for(int l = 0; l < need_line; l++){ // 맵 그리고
//                nnp = {nnp.Y + dir[i].Y, nnp.X + dir[i].X};
//                mp[nnp.Y][nnp.X] = 2;
//            }
//            dfs(core_idx+1, line_Num+need_line, core_Num+1); // 넘겨주고
//            nnp = cur;
//            for(int l = 0; l < need_line; l++){ // 다시 맵 지운다
//                nnp = {nnp.Y + dir[i].Y, nnp.X + dir[i].X};
//                mp[nnp.Y][nnp.X] = 0;
//            }
//        }
//    }
//    //4방향 다 해보고 연결 안하고 그냥 넘기는것도 준다
//    dfs(core_idx+1, line_Num, core_Num);
//    return;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int T;
//    cin >> T;
//    for(int testcase = 1; testcase <= T; testcase++){
//        cin >> N;
//        for(int i = 0 ; i < N ; i++){
//            for(int j = 0 ; j < N; j++){
//                cin >> mp[i][j];
//                if(mp[i][j] == 1) core.push_back({i,j});
//            }
//        }
//        dfs(0,0,0);
//        cout << "#" << testcase << " " <<min_line << "\n";
//        for(int i = 0 ; i < N ; i++){
//            for(int j = 0 ; j < N; j++){
//                mp[i][j] = -1;
//            }
//        }
//        max_core = -1; min_line = 0x3f3f3f3f;
//        core.clear();
//    }
//}
//
//
