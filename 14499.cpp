//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//int N, M, x, y, K;
//int t_map[21][21];
//deque<int> vert, hori;
//
//int comm1(){ // 동쪽으로 이동
//    int tmp_val = *(vert.end()-1);
//    vert[3] = hori[2];
//    vert[1] = hori[0];
//    hori.pop_back();
//    hori.push_front(tmp_val);
//
//    cout << vert[1] << "\n";
//    return vert[3];
//}
//
//int comm2(){ // 서쪽으로 이동
//    int tmp_val = *(vert.end()-1);
//    vert[1] = hori[2];
//    vert[3] = hori[0];
//    hori.pop_front();
//    hori.push_back(tmp_val);
//
//    cout << vert[1] << "\n";
//    return vert[3];
//}
//
//int comm3(){ // 서쪽으로 이동
//    hori[1] = vert[2];
//
//    vert.push_back(vert.front());
//    vert.pop_front();
//
//    cout << vert[1] << "\n";
//    return vert[3];
//}
//
//int comm4(){ // 서쪽으로 이동
//    hori[1] = vert[0];
//
//    vert.push_front(vert[3]);
//    vert.pop_back();
//
//    cout << vert[1] << "\n";
//    return vert[3];
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N >> M >> x >> y >> K;
//    pair<int, int> cur_loc = {x,y};
//    for(int i = 0 ; i < N; i++){
//        for(int j = 0; j < M; j++){
//            cin >> t_map[i][j];
//        }
//    }
//    vert.push_back(0);vert.push_back(0);vert.push_back(0);vert.push_back(0);
//    hori.push_back(0);hori.push_back(0);hori.push_back(0);
//
//    for(int i = 0 ; i < K ; i++){
//        int whatComm, bot_res = 0;
//        cin >> whatComm;
//        switch(whatComm){
//            case 1:
//                if(cur_loc.second == M-1) continue;
//                bot_res = comm1();
//                cur_loc.second++;
//                break;
//            case 2:
//                if(cur_loc.second == 0) continue;
//                bot_res = comm2();
//                cur_loc.second--;
//                break;
//            case 3:
//                if(cur_loc.first == 0) continue;
//                bot_res = comm3();
//                cur_loc.first--;
//                break;
//            case 4:
//                if(cur_loc.first == N-1) continue;
//                bot_res = comm4();
//                cur_loc.first++;
//                break;
//        }
//        if(t_map[cur_loc.first][cur_loc.second] == 0){
//            t_map[cur_loc.first][cur_loc.second] = bot_res;
//        }else {
//            vert[3] = t_map[cur_loc.first][cur_loc.second];
//            t_map[cur_loc.first][cur_loc.second] = 0;
//        }
//    }
//
//    return 0;
//}

