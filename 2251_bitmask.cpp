//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int lim[3] = {0, };
//int wat[3] = {0, };
//int from[3] = {0,1,2};
//int   to[3] = {0,1,2};
//vector<int> visit;
//vector<int> result_val;
//
//void printResult(){
//    sort(result_val.begin(), result_val.end());
//    result_val.erase(unique(result_val.begin(), result_val.end()), result_val.end());
//    for(int i : result_val) cout << i << " ";
//}
//
//unsigned int chk(int val, int loc){
//    return val >> (2 - loc)*8 & 0xff;
//}
//
//int swap_val(int from, int to, int cur){
//    int v_f = 0, v_t = 0, result = 0;
//    v_f = cur >> (2 - from)*8 & 0xff;
//    v_t = cur >> (2 -  to )*8 & 0xff;
//    
//    if(v_f == 0) return -1;
//    if(v_t == lim[to]) return -1;
//    if(to == from) return -1;
//    
//    int rest_val = (v_f <<(2 - from)*8 | v_t << (2-to)*8) ^ cur; // ok
//    
//    if(v_f >= lim[to] - v_t){
//        v_f = v_f - (lim[to] - v_t);
//        v_t = lim[to];
//    }else{
//        v_t += v_f;
//        v_f = 0;
//    }
//    
//    v_f = v_f << (2 - from)*8;
//    v_t = v_t << (2 -  to )*8;
//
//    result = (rest_val | v_t) | v_f;
//    return result;
//}
//
//int main(){
//    unsigned int cur = 0x0;
//    int tmp;
//    
//    for(int i = 0 ; i < 3; i ++){
//        cin >> tmp;
//        lim[i] = tmp;
//    }
//    wat[2] = lim[2];
//    cur = wat[2];
//    
////    for(int i = 31; i >= 0; i--){
////        int ab = (1<<i);
////        printf("%d",(cur&ab) ? 1 : 0);
////        if(i%8 == 0) printf(" ");
////    }
////    cout << endl;
//    
//    queue<int> q;
//    q.push(cur);
//    visit.push_back(cur);
//    
//    while(!q.empty()){
//        cur = q.front();
//        
//        if(chk(cur,0) == 0) result_val.push_back(chk(cur,2));
//        
//        for(int i = 0 ; i < 3; i ++){
//            for(int j = 0 ; j < 3; j++){
//                bool canGo = true;
//                int tmp_i = swap_val(from[i],to[j],cur);
//                if(tmp_i != -1){
//                    for(int t : visit){
//                        if((t<<8) == (tmp_i<<8)) {
//                            canGo = false;
//                            break;
//                        }
//                    }
//                    if(canGo) {
//                        visit.push_back(tmp_i);
//                        q.push(tmp_i);
//                    }
//                }
//            }
//        }
//        q.pop();
//    }
//    
//    printResult();
//    cout << endl;
//    
//    return 0;
//}

