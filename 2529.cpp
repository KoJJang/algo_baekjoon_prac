//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int used_num[10] = {0,};
//bool is_bigger[10] = {false,};
//int k;
//long long min_num = 0x3f3f3f3f3f3f3f3f, max_num = 0;
//string min_str, max_str;
//
//int dfs(int a, int cnt, string s){
//    used_num[a] = 1;
//    int is_good = -1;
//    if(cnt == k) {
//        long long tmp_num = stoll(s);
//        if(min_num >= tmp_num) {min_num = tmp_num; min_str = s;}
//        if(max_num <= tmp_num) {max_num = tmp_num; max_str = s;}
//
//        used_num[a] = 0;
//        return 1;
//    }
//
//    if(is_bigger[cnt]) {
//        for(int i = a+1; i < 10; i++) {
//            if( used_num[i] == 0 ) is_good = dfs(i,cnt+1, s + to_string(i));
//        }
//        if(is_good == -1) { used_num[a] = 0; return -1; }
//    }else {
//        for(int i = a-1; i >= 0; i--) {
//            if( used_num[i] == 0 ) is_good = dfs(i, cnt+1, s + to_string(i));
//        }
//        if(is_good == -1) { used_num[a] = 0; return -1; }
//    }
//
//    used_num[a] = 0;
//    return 0;
//}
//
//int main(){
//    char tmp_ch;
//
//    cin >> k;
//    for(int i = 0 ; i < k; i++){
//        cin >> tmp_ch;
//        if(tmp_ch == '<'){ // 뒤에가 더 크면 true
//            is_bigger[i] = true;
//        }else is_bigger[i] = false;
//    }
//
//    for(int i = 0 ; i < 10; i++){
//        dfs(i,0,to_string(i));
//    }
//
//    cout << max_str << endl;
//    cout << min_str << endl;
//
//    return 0;
//}

