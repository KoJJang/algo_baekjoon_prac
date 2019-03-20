//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <stack>
//
//using namespace std;
//
//typedef pair<int, int> P;
//#define MAX_VAL 500*500 - 500/2 + 1
//int N;
//int tb[1001][1001];
//int visit[MAX_VAL];
//bool visit2[1001][1001];
//
//int WHAT_NUM(int a,int b) {
//    return ((N*a)-(a/2)+(b/2)+1);
//}
//
//struct item{
//    P p;
//    int cnt;
//    item(P p, int c) : p(p), cnt(c) {};
//};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        if(i%2 == 0){
//            for(int j = 0; j < 2*N; j++){
//                cin >> tb[i][j];
//            }
//        }else{
//            for(int j = 1; j < 2*N-1; j++){
//                cin >> tb[i][j];
//            }
//        }
//    }
//
//    int max_v = -1;
//    P max_p; int max_c = -1;
//    visit[1] = -1; visit2[0][0] = true;
//    queue<item> q;
//    q.emplace(make_pair(0, 0),0);
//    while(!q.empty()){
//        P tmp = q.front().p;
//        int cnt = q.front().cnt;
//        q.pop();
//
//        if(N%2 == 0 && tmp.first == N-1 && tmp.second == 2*N-2) {
//            break;
//        }
//        if(N%2 == 1 && tmp.first == N-1 && tmp.second == 2*N-1){
//            break;
//        }
//
//        int t_num;
//
//        if(tmp.first%2 == 0) t_num = WHAT_NUM(tmp.first, tmp.second);
//        else                 t_num = WHAT_NUM(tmp.first, tmp.second-1);
//
////        cout << tmp.first << ", " << tmp.second << ": " << t_num << " : " << cnt << endl;
//
//        // 이동하면서 푸쉬
//        if(tmp.first > 0){
//            if(tb[tmp.first][tmp.second] == tb[tmp.first-1][tmp.second]
//               && !visit2[tmp.first-1][tmp.second]) { // 위로 이동
//                q.emplace(make_pair(tmp.first-1,tmp.second), cnt+1);
//                int next_t;
//                if(tmp.first%2 == 1) next_t = WHAT_NUM(tmp.first-1, tmp.second);
//                else                 next_t = WHAT_NUM(tmp.first-1, tmp.second-1);
//                visit[next_t] = t_num;
//                visit2[tmp.first-1][tmp.second] = true;
//            }
//        }
//        if(tmp.first < N-1){
//            if(tb[tmp.first][tmp.second] == tb[tmp.first+1][tmp.second]
//               && !visit2[tmp.first+1][tmp.second]) { // 아래로 이동
//                q.emplace(make_pair(tmp.first+1,tmp.second), cnt+1);
//                int next_t;
//                if(tmp.first%2 == 1) next_t = WHAT_NUM(tmp.first+1, tmp.second);
//                else                 next_t = WHAT_NUM(tmp.first+1, tmp.second-1);
//                visit[next_t] = t_num;
//                visit2[tmp.first+1][tmp.second] = true;
//                max_v = max_v < next_t ? next_t : max_v;
//                max_c = max_v == next_t ? max_c + 1 : max_c;
//            }
//        }
//        if(tmp.first % 2 == 0){ // 0,2,4,.. 줄
//            if(tmp.second % 2 == 0 && !visit2[tmp.first][tmp.second+1]){
//                q.emplace(make_pair(tmp.first, tmp.second+1), cnt); // 같은 타일
//                visit2[tmp.first][tmp.second+1] = true;
//            }
//            else if(tmp.second < 2*N - 1 && !visit2[tmp.first][tmp.second+1])
//            { //오른쪽
//                if(tb[tmp.first][tmp.second] == tb[tmp.first][tmp.second+1]){
//                    visit[WHAT_NUM(tmp.first, tmp.second+1)] = t_num;
//                    visit2[tmp.first][tmp.second+1] = true;
//                    q.emplace(make_pair(tmp.first, tmp.second+1), cnt+1); // 다른 타일
//                    if(max_v < WHAT_NUM(tmp.first, tmp.second+1)){
//                        max_v = WHAT_NUM(tmp.first, tmp.second+1);
//                        max_c = cnt+1;
//                    }
//                }
//                continue;
//            }
//            if(tmp.second % 2 == 1 && !visit2[tmp.first][tmp.second-1]){
//                q.emplace(make_pair(tmp.first, tmp.second-1), cnt);
//                visit2[tmp.first][tmp.second-1] = true;
//            }
//            else if(tmp.second >= 1 && !visit2[tmp.first][tmp.second-1])
//            { // 왼쪽 이동
//                if(tb[tmp.first][tmp.second] == tb[tmp.first][tmp.second-1]){
//                    q.emplace(make_pair(tmp.first, tmp.second-1),cnt+1);
//                    visit2[tmp.first][tmp.second-1] = true;
//                    visit[WHAT_NUM(tmp.first, tmp.second-1)] = t_num;
//                }
//            }
//        }else{ // 1,3,5,.. 줄
//            if(tmp.second % 2 == 1 && !visit2[tmp.first][tmp.second+1]){
//                q.emplace(make_pair(tmp.first, tmp.second+1), cnt); // 같은 타일
//                visit2[tmp.first][tmp.second+1] = true;
//            }
//            else if(tmp.second < 2*N - 2 && !visit2[tmp.first][tmp.second+1])
//            { //오른쪽
//                if(tb[tmp.first][tmp.second] == tb[tmp.first][tmp.second+1]){
//                    visit[WHAT_NUM(tmp.first, tmp.second+1)] = t_num;
//                    visit2[tmp.first][tmp.second+1] = true;
//                    q.emplace(make_pair(tmp.first, tmp.second+1), cnt+1); // 다른 타일
//                    if(max_v < WHAT_NUM(tmp.first, tmp.second+1)){
//                        max_v = WHAT_NUM(tmp.first, tmp.second+1);
//                        max_c = cnt+1;
//                    }
//                }
//                continue;
//            }
//            if(tmp.second % 2 == 0 && !visit2[tmp.first][tmp.second-1]){
//                q.emplace(make_pair(tmp.first, tmp.second-1), cnt);
//                visit2[tmp.first][tmp.second-1] = true;
//            }
//            else if(tmp.second >= 2 && !visit2[tmp.first][tmp.second-1]){ // 왼쪽
//                if(tb[tmp.first][tmp.second] == tb[tmp.first][tmp.second-1]){
//                    visit2[tmp.first][tmp.second-1] = true;
//                    visit[WHAT_NUM(tmp.first, tmp.second-1)] = t_num;
//                    q.emplace(make_pair(tmp.first, tmp.second-1),cnt+1);
//                }
//            }
//        }
//    }
//    stack<int> s;
//    s.push(max_v);
//    while(visit[max_v] != -1){
//        s.push(visit[max_v]);
//        max_v = visit[max_v];
//    }
//    cout << s.size() << endl;
//    while(!s.empty()){
//        cout << s.top() << " ";
//        s.pop();
//    }
//}
////4
////1 4
////4 5
////3 4
////5 4
////4 2
////5 6
////4 4
////2 4
////5 1
////6 1
////1 6
////4 2
////5 3
////1 2
////10
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
////1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
//
