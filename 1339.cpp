//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//string word[10];
//int N;
//char alpha[256];
//long long max_result = -1, tmp_result;
//vector<int> used_num;
//vector<char> letters;
//
//int main(){
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> word[i];
//        for(char x : word[i]){
//            letters.push_back(x);
//        }
//    }
//    
//    sort(letters.begin(), letters.end());
//    letters.erase(unique(letters.begin(), letters.end()), letters.end());
//    
//    int tmp_idx = 9;
//    for(int i =0; i < letters.size(); i++){
//        used_num.push_back(tmp_idx--);
//    }
//    
//    do{
//        for(int i = 0 ; i < letters.size(); i++){
//            alpha[letters[i]] = used_num[i];
//        }
//        
//        for(string s : word){
//            int now_result = 0;
//            for(char c : s){
//                now_result = now_result * 10 +  alpha[c];
//            }
//            tmp_result += now_result;
//        }
//
//        if(tmp_result > max_result) {
//            max_result = tmp_result;
//        }
//        
//        tmp_result = 0;
//    }
//    while(prev_permutation(used_num.begin(), used_num.end()));
//    cout << max_result << endl;
//    return 0;
//}

