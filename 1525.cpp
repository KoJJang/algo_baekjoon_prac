// 위에건 메모리 초과(내가 짠거) 아마 구조체 때문인듯

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//#include <string>
//#include <map>
//
//using namespace std;
//
//string tab = "";
//int zeroLoc;
//int loc[4] = {-3, -1, 1, 3};
//vector<string> visit;
//
//struct item{
//    int zero_pos;
//    int cnt;
//    string puz;
//    item(int zero_pos, int c, string puz)
//    : zero_pos(zero_pos), cnt(c), puz(puz) {}
//    item(){}
//};
//
//bool chk(string a){
//    if(a.compare("123456780") == 0) return true;
//    return false;
//}
//
//bool canGo(item item, int l) {
//    if(item.zero_pos + l < 0 ) return false;
//    if(item.zero_pos + l > 8 ) return false;
//    if(item.zero_pos % 3 == 2 && l == 1) return false;
//    if(item.zero_pos % 3 == 0 && l == -1) return false;
//
//    for(string s : visit){
//        if(s == item.puz) return false;
//    }
//    return true;
//}
//
//void bfs(){
//    queue<item> q;
//    q.emplace(zeroLoc, 0, tab);
//    visit.push_back(tab);
//    item tmp_item;
//
//    while(!q.empty()){
//
//        if(chk(q.front().puz)) {
//            cout << q.front().cnt << endl;
//            return;
//        }
//
//        for(int l : loc){
//            tmp_item = q.front();
//            string tmp_s = tmp_item.puz;
//            tmp_s[tmp_item.zero_pos] = tmp_s[tmp_item.zero_pos+l];
//            tmp_s[tmp_item.zero_pos+l] = '0';
//            tmp_item.puz = tmp_s;
//            if(canGo(tmp_item, l)){
//                tmp_item.zero_pos = tmp_item.zero_pos + l;
//                tmp_item.cnt = tmp_item.cnt + 1;
//                q.push(tmp_item);
//                visit.push_back(tmp_item.puz);
//            }
//        }
//        q.pop();
//    }
//    cout << -1 << endl;
//}
//
//int main(){
//    string tmp = "";
//    for(int i = 0 ; i < 9; i++){
//        cin >> tmp;
//        if(stoi(tmp) == 0) zeroLoc = i;
//        tab += tmp;
//    }
//    bfs();
//
//    return 0;
//}

//
//#include <iostream>
//#include <string>
//#include <queue>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// 각 방향마다 0과 바꿔야 할 숫자와의 위치 번호 차
//// 0이 위, 아래, 왼쪽, 오른쪽으로 이동
//const int oppo[4] = {-3, 3, -1, 1};
//const int roff[4] = {-1, 1, 0, 0};
//const int coff[4] = {0, 0, -1, 1};
//
//int main(){
//    string start = "", dest = "123456780";
//    // start 값을 입력받으면서 만듦
//    for(int i=0; i<9; i++){
//        int input;
//        cin >> input;
//        start += input+'0';
//    }
//
//    set<string> visited;
//    visited.insert(start);
//    queue<string> Q;
//    Q.push(start);
//
//    int result = 0;
//    while(!Q.empty()){
//        int qSize = Q.size();
//        for(int i=0; i<qSize; i++){
//            string current = Q.front();
//            Q.pop();
//            // 목적지에 도달했다면 결과 출력하고 프로그램 종료
//            if(current == dest){
//                cout << result << endl;
//                return 0;
//            }
//
//            // pos0은 0의 위치
//            int pos0 = 0;
//            for(; current[pos0]!='0'; pos0++);
//            // r, c는 pos0의 퍼즐상에서의 행 번호와 열 번호
//            int r = pos0/3;
//            int c = pos0%3;
//
//            /*
//             4개 방향을 각각 코딩하지 말고,
//             oppo 배열을 사용하여 한번에 처리한다.
//             nr은 next r, nc는 next c를 의미한다.
//             */
//            for(int d=0; d<4; d++){
//                int nr = r+roff[d];
//                int nc = c+coff[d];
//                // 범위 밖: 이동할 수 없는 경우
//                if(nr<0 || nr>=3 || nc<0 || nc>=3) continue;
//
//                string next = current;
//                swap(next[pos0], next[pos0+oppo[d]]);
//
//                // 아직 visit하지 않았을 때만 추가로 방문한다.
//                if(visited.find(next) == visited.end()){
//                    visited.insert(next);
//                    Q.push(next);
//                }
//            }
//        }
//
//        // 매 루프마다 이동 횟수가 증가
//        result++;
//    }
//    cout << -1 << endl;
//    return 0;
//}

