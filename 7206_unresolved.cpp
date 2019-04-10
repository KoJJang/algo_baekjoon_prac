//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int rf(int val, int cnt){
//    if(val < 10) return cnt;
//    int sz = 1, interval = 10; // sz = 빈칸갯수
//    for(int i = 1 ; i < 5; i++){
//        if (val / (interval*10) != 0) sz++;
//        else break;
//        interval *= 10;
//    }
//    vector<int> v;
//    v.resize(sz);
//    for(int i = 0 ; i < sz; i++){
//        v[0] = 1;
//        sort(v.begin(), v.end());
//        do{
//            int tmp_val = val;
//            vector<int> t_v;
//            for(int i = 0 ; i < sz; i++){
//                if(v[i] == 1){
//                    int inter = pow(10,i+1);
//                    t_v.push_back(tmp_val % inter);
//                    tmp_val /= pow(10,(i+1));
//                }
//                if(i == sz-1 && tmp_val != 0) t_v.push_back(tmp_val);
//            }
//            for(int i = 0 ; i < (int)t_v.size(); i++){
//                cout << t_v[i] << " " ;
//            }cout << "\n";
//        }while(next_permutation(v.begin(), v.end()));
//    }
//    return 0;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int val;
//    cin >> val;
//    cout << rf(val,0) << "\n";
//    return 0;
//}

