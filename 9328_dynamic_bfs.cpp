//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int T, H, W, finRes = 0;
//char map[102][102];
//queue<char> key;
////vector<pair<int, int>> loc = {{1,0}, {0,1}, {-1,0}, {0,-1}};
//int loc[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
//int visit[102][102];
//
//void openDoor(char t_key){
//    for(int i = 1 ; i <= H; i++){
//        for(int j = 1 ; j <= W; j++){
//            if(map[i][j] == (t_key)){
//                map[i][j] = '.';
//            }
//        }
//    }
//}
//
//bool canGo(pair<int,int> cur){
//    if(cur.first < 0 || cur.first > H+1) return false;
//    if(cur.second < 0 || cur.second > W+1) return false;
//    char t_char = map[cur.first][cur.second];
//    if(t_char == '*') return false;
//    if(t_char >='A' && t_char <='Z') return false;
//    if(visit[cur.first][cur.second] == 1) return false;
//    if(t_char == '$') {finRes++; map[cur.first][cur.second] = '.'; return true;}
//    if(t_char >='a' && t_char <='z') {
//        key.push(t_char - 32); map[cur.first][cur.second] = '.'; return true;
//    }
//    return true;
//}
//
//void findDoc(){
//    for(int i = 0 ; i < 102; i++){
//        memset(visit[i], 0, sizeof(int)*102);
//    }
//    visit[0][0] = 1;
//    queue<pair<int, int>> q;
//    q.push({0,0});
//    pair<int, int> cur;
//    while(!q.empty()){
//        cur = q.front();
//        q.pop();
//        for(int i = 0 ; i < 4; i++){ // 오, 왼, 하, 상
//            pair<int, int> tmp_pos = make_pair(cur.first + loc[i][0], cur.second + loc[i][1]);
//            if(canGo(tmp_pos)){
//                visit[tmp_pos.first][tmp_pos.second] = 1;
//                q.push(tmp_pos);
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    string tmp_char;
//    cin >> T;
//    for(int t = 0 ; t < T; t++){
//        finRes = 0;
//        for(int i = 0; i < 102; i++) memset(map[i], 0, sizeof(char)*102);
//
//        cin >> H >> W;
//        for(int i = 0 ; i <= H+1; i++){ // 외곽 만듬
//            map[i][0] = map[i][W+1] = '.';
//        }
//        for(int i = 0 ; i <= W+1; i++){ // 외곽 만듬
//            map[0][i] = map[H+1][i] = '.';
//        }
//        for(int i = 1 ; i <= H; i++){ // 입력
//            for(int j = 1 ; j <= W; j++){
//                cin >> map[i][j];
//            }
//        }
//        cin >> tmp_char;
//        for(int i = 0 ; i < tmp_char.size(); i++){ // 키 입력
//            if(tmp_char[i] !='0') key.push((tmp_char[i])-32);
//        }
//
//        while(1){
//            if(!key.empty()){ // 갖고 있는 열쇠 이용해 지도 문 연다
//                openDoor(key.front());
//                key.pop();
//            }
//            else{//문서 & 열쇠 찾으러 간다
//                findDoc(); //::TODO
//                if(key.empty()) break;
//            }
//        }
////
////        for(int i = 0 ; i <= H+1; i++){
////            for(int j = 0 ; j <= W+1; j++){
////                cout <<  map[i][j] << " ";
////            }
////            cout << endl;
////        }
//        cout << finRes << "\n";
//    }
//    return 0;
//}

