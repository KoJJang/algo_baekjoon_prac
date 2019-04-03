//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <set>
//
//using namespace std;
//typedef long long ll;
//typedef pair<ll , ll> P;
//typedef pair<ll , P> PP;
//set< PP > visited;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<ll> v;
//    int t_i;
//    for(int i = 0 ; i < 3; i++){
//        cin >> t_i;
//        v.push_back(t_i);
//    }
//    sort(v.begin(), v.end());
//    queue<PP> q;
//    q.push({v[0], {v[1], v[2]}});
//    ll st1, st2, st3;
//    while(!q.empty()){
//        st1 = q.front().first;
//        st2 = q.front().second.first;
//        st3 = q.front().second.second;
//        q.pop();
//        v[0] = st1; v[1] = st2; v[2] = st3;
//        sort(v.begin(), v.end()); // v[0], v[1], v[2] 오름차순 정렬
//        if(visited.find(make_pair(v[0], make_pair(v[1], v[2]))) != visited.end()) continue;
//        visited.insert(make_pair(v[0], make_pair(v[1], v[2])));
//
//        if(st1 == st2 && st2 == st3) {
//            cout << 1 << "\n";
//            return 0;
//        }
//        if(v[0] != v[1] ) {
//            q.push({v[0] * 2, {v[1] - v[0],v[2]}});
//        }
//        if(v[0] != v[2] ) {
//            q.push({v[0] * 2, {v[1],v[2] - v[0]}});
//        }
//        if(v[1] != v[2] ) {
//            q.push({v[0], {v[1]*2,v[2] - v[1]}});
//        }
//    }
//    cout << 0 << "\n";
//}
//
