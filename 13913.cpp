//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//
//using namespace std;
//
//queue<int> q_bfs;
//int start, goal;
//int visited[100002] = {0,};
//int parents[100002] = {0,};
//
//bool isOk(int n){
//    if( n >= 0 && n <=100000) return true;
//    return false;
//}
//
//int main(){
//    cin >> start >> goal;
//
//    q_bfs.push(start);
//    int s = start;
//    visited[s] = 1;
//
//    while(1){
//        if(s == goal){
//            cout << visited[s] - 1 << endl;
//            break;
//        }
//        if(isOk(s-1) && !visited[s-1]) {
//            q_bfs.push(s-1);
//            visited[s-1] = visited[s] + 1;
//            parents[s-1] = s;
//        }
//        if(isOk(s+1) && !visited[s+1]){
//            q_bfs.push(s+1);
//            visited[s+1] = visited[s] + 1;
//            parents[s+1] = s;
//        }
//        if(isOk(s*2) && !visited[s*2]) {
//            q_bfs.push(s*2);
//            visited[s*2] = visited[s] + 1;
//            parents[s*2] = s;
//        }
//
//        q_bfs.pop();
//
//        s = q_bfs.front();
//    }
//
//    stack<int> tmp_result;
//    tmp_result.push(s);
//
//    while(1){
//        if(s == 0) break;
//        tmp_result.push(parents[s]);
//        s = parents[s];
//    }
//    if(start) tmp_result.pop();
//    while(!tmp_result.empty()){
//        cout << tmp_result.top() << " ";
//        tmp_result.pop();
//    }
//
//    if ( goal == 0 ) {
//        while (start >= 0){
//            cout << start << " ";
//            start--;
//        }
//    }
//
//    return 0;
//}
//
//
//
