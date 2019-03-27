//#include <iostream>
//
//using namespace std;
//
//typedef pair<int, int> P;
//
//int N, M, r, c, d, ans = 0;
//P dir[4] = {{-1,0}, {0,1}, {1,0}, {0,-1}};
//int map[51][51];
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//
//    cin >> N >> M >> r >> c >> d;
//
//    P cur = {r,c};
//
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0; j < M; j++){
//            cin >> map[i][j];
//        }
//    }
//
//    while(1){
//        bool isFind = false;
//        if(map[cur.first][cur.second] == 0) { // 청소한다
////            cout <<"clean!! --> " <<  cur.first << " " << cur.second << endl;
//            ans++;
//            map[cur.first][cur.second] = 2;
//        }
//        for(int i = 1 ; i <= 4; i++){
//            if(map[cur.first +
//                   dir[(d-i+4)%4].first][cur.second + dir[(d-i+4)%4].second] == 0){
//                isFind = true; // 청소할 곳 찾았다
//                d = (d-i+4)%4; // 방향 바꿈
//                cur.first  += dir[d].first; // 위치 이동
//                cur.second += dir[d].second;
//                break;
//            }
//        }
//        if(isFind) continue; // 청소할 곳 찾으면 뒷부분 스킵
//        else { // 청소할 곳 못찾았다
//            if( map[cur.first +
//                    dir[(d-2+4)%4].first][cur.second + dir[(d-2+4)%4].second] == 1 ){
//                cout << ans << endl; // 후진 불가능 경우
//                return 0;
//            }else{ // 후진 가능한 경우
//                cur.first  += dir[(d-2+4)%4].first; // 위치 이동
//                cur.second += dir[(d-2+4)%4].second;
//            }
//        }
//    }
//}

