//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define MAXVAL 100000
//using namespace std;
//
//int N, K;
//int visited[100001] = {0, };
//
//queue<pair<int, int>> q;
//
//void bfs(){
//    int result = 0;
//    bool isFind = false;
//    int min_sec = -1;
//    
//    while(!q.empty()){
//        int cur = q.front().first;
//        int cnt = q.front().second;
//        visited[cur] = 1;
//        q.pop();
//        
//        if(isFind && cur == K && cnt == min_sec){
//            result ++;
//            continue;
//        }
//        
//        if(!isFind && cur == K){
//            result ++; isFind = true; min_sec = cnt;
//            cout << cnt << endl;
//            isFind = true;
//            continue;
//        }
//        
//        if(cur-1 >= 0 && !visited[cur-1]){
//            q.push(make_pair(cur-1, cnt+1));
//        }
//        if(cur+1 <= MAXVAL && !visited[cur+1]){
//            q.push(make_pair(cur+1, cnt+1));
//        }
//        if(cur*2 <= MAXVAL && cur != 0 && !visited[cur*2]){
//            q.push(make_pair(cur*2, cnt+1));
//        }
//    }
//    cout << result << endl;
//}
//
//int main(){
//    cin >> N >> K;
//    
//    q.push(make_pair(N, 0));
//    
//    bfs();
//    
//    return 0;
//}

