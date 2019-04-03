//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//typedef pair<int, int> P;
//stack <int> s;
//
//int N;
//bool mp[101][101] = {false,};
//P dir[4] = {{0,1}, {-1,0}, {0,-1}, {1,0}}; // x+ y- x- y+
//
//void make_dc(int g){
//    stack<int> t_s;
//    for(int i = 0 ; i < g; i++){
//        t_s = s;
//        while(!t_s.empty()){
//            s.push(t_s.top()+1 <= 3 ? t_s.top()+1 : 0);
//            t_s.pop();
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//    int t_x, t_y, t_d, t_g;
//
//    for(int i = 0 ; i < N ; i++){
//        cin >> t_x >> t_y >> t_d >> t_g;
//        s.push(t_d);
//        stack<int> tmp_s;
//        make_dc(t_g);
//        while(!s.empty()){
//            tmp_s.push(s.top());
//            s.pop();
//        }
//        mp[t_y][t_x] = true;
//        while(!tmp_s.empty()) {
//            t_x += dir[tmp_s.top()].second;
//            t_y += dir[tmp_s.top()].first;
//            if(t_x >= 0 && t_x <= 100 && t_y >= 0 && t_y <= 100) {
//                mp[t_y][t_x] = true;
//            }
//            tmp_s.pop();
//        }
//    }
//    int ans = 0;
//    for(int i = 0 ; i < 100; i++){
//        for(int j = 0 ; j < 100; j++){
//            if(mp[i][j] && mp[i+1][j] && mp[i][j+1] && mp[i+1][j+1]){
//                ans++;
//            }
//        }
//    }
//
//    cout << ans << "\n";
//}

