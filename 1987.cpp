//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int R, C;
//vector<char> used_ch;
//char tab[20][20];
//int max_val = -1;
//bool is_go[20][20];
//pair<int, int> Loc[4];
//
//bool chkGo(int row, int col){
//    if(row >= R || col >= C) return false;
//    if(row < 0 || col < 0) return false;
//    if(is_go[row][col]) return false;
//    for(char c : used_ch) {
//        if ( c == tab[row][col] ) return false;
//    }
//    return true;
//}
//
//void dfs(int cnt, int row, int col){
//    bool isEnd = true;
//    used_ch.push_back(tab[row][col]);
//    for(int i = 0 ; i < 4; i++){
//        if(chkGo(row+Loc[i].first, col+Loc[i].second)){
//            isEnd = false;
//            is_go[row+Loc[i].first][col+Loc[i].second] = true;
//            dfs(cnt+1, row + Loc[i].first, col+Loc[i].second);
//            is_go[row+Loc[i].first][col+Loc[i].second] = false;
//        }
//    }
//    
//    if(isEnd) {
//        if(cnt > max_val) {
//            max_val = cnt;
//            used_ch.pop_back();
//            return;
//        }
//    }
//    used_ch.pop_back();
//    return ;
//}
//
//int main(){
//    cin >> R >> C;
//    string tmp_s; int tmp_i;
//    
//    for(int i = 0 ; i < R; i++){
//        tmp_i = 0;
//        cin >> tmp_s;
//        for(char c : tmp_s) tab[i][tmp_i++] = c;
//    }
//    
//    Loc[0] = make_pair(1, 0);Loc[1] = make_pair(0, 1);
//    Loc[2] = make_pair(-1, 0);Loc[3] = make_pair(0, -1);
//    is_go[0][0] = true;
//    
//    dfs(1,0,0);
//    
//    cout << max_val;
//    
//    return 0;
//}

