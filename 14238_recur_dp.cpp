//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//deque<char> v;
//string ans;
//int a_i = 0, b_i = 0, c_i = 0;
//bool dp[51][51][51][3][3] = {false,};
//
//bool recur(int a, int b, int c, int p, int pp){
//    if(a == a_i && b == b_i && c == c_i) {
//        return true;
//    }
//    if(dp[a][b][c][p][pp]) return false;
//    
//    dp[a][b][c][p][pp] = true;
//    
//    
//    ans[a+b+c] = 'A';
//    if(a < a_i) {
//        if(recur(a+1,b,c,pp,0)){
//            return true;
//        }
//    }
//    ans[a+b+c] = 'B';
//    if(b < b_i && (pp != 1)) {
//        if(recur(a,b+1,c,pp,1)){
//            return true;
//        }
//    }
//    ans[a+b+c] = 'C';
//    if(c < c_i && p != 2 && pp != 2) {
//        if(recur(a,b,c+1,pp,2)){
//            return true;
//        }
//    }
//    return false;
//}
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    
//    char tmp = ' ';
//    while(tmp != '\n'){
//        scanf("%c", &tmp);
//        v.push_back(tmp);
//        switch (tmp) {
//            case 'A':
//                a_i++;
//                break;
//            case 'B':
//                b_i++;
//                break;
//            case 'C':
//                c_i++;
//                break;
//        }
//    }
//    v.pop_back();
//    ans.resize(v.size());
//    
//    if(recur(0,0,0,0,0)) {
//        for(char &a : ans){
//            printf("%c",a);
//        }
//    }else {
//        cout << -1 << endl;
//    }
//    
//}

