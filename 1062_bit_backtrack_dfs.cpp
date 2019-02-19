//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int N, K, res = 0;
//string wordList[51];
//int word[27] = {}; //a c i n t
//int combi = 0;
//
//void check(){
//    int tmpres = 0;
//    for(int i = 0 ; i < N; i++){
//        bool isOk = true;
//        for(char c : wordList[i]){
//            if( (combi & ( 1 << (c - 'a'))) == 0) {
//                isOk = false;
//            }
//        }
//        if(isOk) tmpres++;
//    }
//    res = tmpres > res ? tmpres : res;
//}
//
//void dfs(int cnt, int idx){
//    if(cnt == 0) {
//        check();
//        return;
//    }
//    int tmpcombi = combi;
//    for(int i = idx + 1 ; i < 26; i++){
//        if( ((combi >> i) & 0x1) == 0){
//            combi = combi | (1 << i);
//            dfs( cnt - 1, i);
//            combi = tmpcombi;
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N >> K;
//
//    for(int i = 0 ; i < N; i++){ // 단어 입력
//        cin >> wordList[i];
//    }
//
//    for(int i = 0 ; i < N; i++){
//        string tmp_s;
//        for(int j  = 0; j < wordList[i].size(); j++){
//            if (wordList[i][j] == 'a' || wordList[i][j] == 'c' ||
//                wordList[i][j] == 'i'|| wordList[i][j] == 'n' ||
//                wordList[i][j] == 't'){
//                continue;
//            }
//            tmp_s.push_back(wordList[i][j]);
//        }
//        wordList[i] = tmp_s;
//        tmp_s.clear();
//    }
//
//    combi = combi | ( 1 << ('a'-'a'));
//    combi = combi | ( 1 << ('c'-'a'));
//    combi = combi | ( 1 << ('i'-'a'));
//    combi = combi | ( 1 << ('n'-'a'));
//    combi = combi | ( 1 << ('t'-'a'));
//
//    dfs(K-5, 0);
//
//    cout << res << "\n";
//    return 0;
//}

