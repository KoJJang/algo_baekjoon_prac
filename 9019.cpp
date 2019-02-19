//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//int T;
//int A, B;
//int visit[10001];
//
//struct item{
//    int i;
//    string his;
//    
//    item(int i, const string history) : i(i), his(history) {}
//};
//
//void bfs(){
//    queue<item> q;
//    q.emplace(A,"");
//    int num,d,s,l,r;
//    
//    while (!q.empty()) {
//        
//        string his = q.front().his;
//        num = q.front().i;
//        
//        if(q.front().i == B){
//            cout << q.front().his << endl;
//            return;
//        }
//        
//        d = 2*num < 10000 ? 2*num : 2*num - 10000;
//        s = num-1 < 0 ? 9999 : num-1;
//        l = (num%1000) * 10 + num/1000;
//        r = num / 10 + (num % 10) * 1000;
//        
//        if(!visit[d]){
//            q.emplace(d,his+"D");
//            visit[d] = 1;
//        }
//        if(!visit[s]){
//            q.emplace(s,his+"S");
//            visit[s] = 1;
//        }
//        if(!visit[l]){
//            q.emplace(l,his+"L");
//            visit[l] = 1;
//        }
//        if(!visit[r]){
//            q.emplace(r,his+"R");
//            visit[r] = 1;
//        }
//        q.pop();
//    }
//}
//
//int main(){
//    cin >> T;
//    for(int i = 0 ; i < T; i++){
//        cin >> A >> B;
//        bfs();
//        memset(visit, 0, sizeof(visit));
//    }
//    return 0;
//}

