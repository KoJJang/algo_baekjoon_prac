//#include <iostream>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> P;
//
//int F,S,G,U,D;
//bool visited[1000001] = {false,};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> F >> S >> G >> U >> D;
//
//    queue<P> q;
//    q.push({S,0});
//    visited[S] = true;
//    while(!q.empty()){
//        if(q.front().first == G){
//            cout << q.front().second << endl;
//            return 0;
//        }
//        if(q.front().first + U <= F && !visited[q.front().first + U]){
//            q.push({q.front().first+U,q.front().second+1});
//            visited[q.front().first+U] = true;;
//        }
//        if(q.front().first - D > 0 && !visited[q.front().first - D]){
//            q.push({q.front().first-D,q.front().second+1});
//            visited[q.front().first-D] = true;;
//        }
//        q.pop();
//    }
//
//    cout <<"use the stairs\n";
//}

