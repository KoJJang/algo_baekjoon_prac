//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> P;
//typedef pair<int, P> PP;
//
//string v[9][3];
//vector <PP> combi;
//
//bool comp3S(string a, string b, string c){
//    if (a == b && b == c && a == c) return true;
//    if (a != b && b != c && a != c) return true;
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for(int i = 0 ; i < 9; i++){
//        for(int j = 0 ; j < 3; j++){
//            cin >> v[i][j];
//        }
//    }
//    
//    for(int i = 0 ; i < 7; i++){
//        for(int j = i + 1; j < 8; j++){
//            for(int k = j+1; k < 9; k++){
//                if(comp3S(v[i][0], v[j][0], v[k][0]) && comp3S(v[i][1], v[j][1], v[k][1])
//                   &&comp3S(v[i][2], v[j][2], v[k][2])){
//                    combi.push_back({i,{j,k}});
//                }
//            }
//        }
//    }
//    
//    int t, ans = 0, Hcombi[3] = {0,};
//    bool visited[27] = {false,} , isG = false;
//    char command;
//    cin >> t;
//    for(int i = 0 ; i < t; i++){
//        cin >> command;
//        if(command == 'H') {
//            for(int j = 0 ; j < 3; j++){
//                cin >> Hcombi[j];
//                Hcombi[j]--;
//            }
//            sort(Hcombi, Hcombi+3);
//            bool isFind = false;
//            for(int j = 0 ; j < combi.size(); j++){
//                if(Hcombi[0] == combi[j].first && Hcombi[1] == combi[j].second.first
//                   && Hcombi[2] == combi[j].second.second && !visited[j]){
//                    ans ++;
//                    visited[j] = true;
//                    isFind = true;
//                    break;
//                }
//            }
//            if(!isFind) ans--;
//        }else {
//            if(isG) ans--;
//            else {
//                bool isFind = false;
//                for(int j = 0 ; j < combi.size(); j++){
//                    if(!visited[j]) {
//                        ans --;
//                        isFind = true;
//                        break;
//                    }
//                }if(!isFind){
//                    ans += 3;
//                    isG = true;
//                }
//            }
//        }
//    }
//    
//    cout << ans << "\n";
//}

