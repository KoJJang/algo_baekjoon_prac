//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    cin.tie(0);
//    string s, t;
//    vector<string> v;
//    vector< vector<string> > vv;
//
//    getline(cin, s);
////    int i = 0;
////    for(; i < (int)s.size(); i++){
////        if(s[i] == ' ') {
////            v.push_back(t);
////            t.clear();
////            i++;
////            break;
////        }
////        else t.push_back(s[i]);
////    }
//    for(int i = 0; i < (int)s.size(); i++){
//        if(s[i] == ' ') {
//            if(t.empty()) continue;
//            v.push_back(t);
//            t.clear();
////            i++;
//        }
//        else if(s[i] == ';') {
//            v.push_back(t);
//            t.clear();
//            vv.push_back(v);
//            v.clear();
//        }
//        else t.push_back(s[i]);
//    }
//    for(int i = 0 ; i < (int)vv.size(); i++){
//        for(int j = 1 ; j < (int)vv[i].size(); j++){
//            cout << vv[i][0];
//            for(int k = (int)vv[i][j].size(); k >= 0; k--){
//                if(vv[i][j][k] == ',') continue;
//                if(vv[i][j][k] == ']') {
//                    cout << "[]";
//                    k--;
//                    continue;
//                }
//                if(vv[i][j][k] >= 'A'  && vv[i][j][k] <= 'z') {
//                    cout << " ";
//                    int t_i = 0;
//                    while(t_i != k){
//                        cout << vv[i][j][t_i];
//                        t_i++;
//                    }
//                    cout << vv[i][j][k];
//                    break;
//                }
//                cout << vv[i][j][k];
//            }cout << ";\n";
//        }
//    }
////
////    while(s.back() != '\n'){
////        cin >> s;
////        for(int z = 0; z < (int)s.size(); z++){
////            if(s[z] != ';') {
////                t.push_back(s[z]);
////            }
////            else {
////                v.push_back(t);
////                t.clear();
////            }
////        }
////    }
////    vector<string>::iterator it;
////    string t_f;
////    for(it = v.begin(); it != v.end(); it++){
////        t = *it;
////        int i;
////        for(i = 0 ; i < t.size(); i++){
////            if(t[i] != ' '){
////                t_f.push_back(t[i]);
////            }else {
////                break;
////            }
////        }
////        for(; i < (int)t.size(); i++){
////            if(t[i] == ' ') {
////                cout << t_f << " ";
////            }
////        }
//
////    }
////
////        while(t.back() != ';'){
////            cin >> t;
////            cout << s;
////            for(int i = (int)t.size() ; i >= 1; --i){
////                if(t[i] == ',') continue;
////                if(t[i] == ';') continue;
////                if(t[i] == ']') {
////                    cout << "[]";
////                    i--;
////                    continue;
////                }
////                cout << t[i];
////            }
////            cout << " " << t.front() << ';' << endl;
////        }
////    }
//}

