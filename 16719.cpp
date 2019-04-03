//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string s;
//string ans;
//
//void recur(int starti, int endi){
//    int idx = -1;
//    if(endi - starti != 1){
//        char minC = 'Z' + 1;
//        for(int i = starti; i < endi; i++){
//            if(minC > s[i]){
//                minC = s[i];
//                idx = i;
//            }
//        }
//        ans[idx] = minC;
//        for(int i = 0 ; i < s.size(); i++){
//            if(ans[i] >= 'A' && ans[i] <= 'Z') cout << ans[i];
//        }
//        cout << "\n";
//    }
//    else {
//        ans[starti] = s[starti];
//        for(int i = 0 ; i < s.size(); i++){
//            if(ans[i] >= 'A' && ans[i] <= 'Z') cout << ans[i];
//        }
//        cout << "\n";
//        return;
//    }
//    if(idx != endi-1) recur(idx+1, endi);
//    if(idx != starti) recur(starti, idx);
//    
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    cin >> s;
//    ans.resize(s.size());
//    recur(0,s.size());
//}

