//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <string>
//
//using namespace std;
//
//map<string, set<string>> m;
//
//vector<string> solution(vector<string> v){
//    vector<string> ans;
//    string t_name, t_food;
//    
//    for(int i = 0 ; i < v.size(); i++){
//        int t_j = 0;
//        v[i].push_back(' ');
//        for(int j = 0 ; j < v[i].size(); j++){
//            if(v[i][j] != ' '){
//                t_name.push_back(v[i][j]);
//            }else {
//                t_j = j;
//                break;
//            }
//        }
//        for(int j = t_j +1 ; j < v[i].size(); j++){
//            if(v[i][j] != ' '){
//                t_food.push_back(v[i][j]);
//            }else {
//                m[t_name].insert(t_food);
//                t_food.clear();
//            }
//        }
//        t_name.clear();
//    }
//    
//    map<string, set<string>>::iterator it;
//    int max_val = -1;
//    for(it = m.begin(); it != m.end(); it++){
////        cout << it->second.size() << endl;
//        if((int)it->second.size() > max_val){
//            max_val = (int)(it->second.size());
//            ans.clear();
//            ans.push_back(it->first);
//        }else if ((int)it->second.size() == max_val) {
//            ans.push_back(it->first);
//        }
//    }
//    for(int i = 0 ; i < ans.size(); i++){
//        cout << ans[i] << " ";
//    }
//    return ans;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<string> v;
//    v.push_back("peter pizza hamburgur pasta");
//    v.push_back("bob pizza pizza pasta");
//    v.push_back("peter pizza rice bbq pasta");
//    v.push_back("choi pizza hamburgur pasta water juice");
//    solution(v);
//}
//// peter pizza

