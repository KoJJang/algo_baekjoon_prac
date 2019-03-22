//#include <iostream>
//#include <queue>
//#include <deque>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N , K;
//    bool visitE[500001] = {false,};
//    bool visitO[500001] = {false,};
//    cin >> N >> K;
//
//    int cnt = 0;
//    deque<int> q;
//    q.push_back(N);
//    visitE[N] = true;
//    int nxtC = 0, curC = 1, isE = 1;
//    while(1){
//        if(K > 500000) {
//            cout << -1 << endl;
//            return 0;
//        }
//
//        if(isE == 1 && visitE[K]){
//            cout << cnt << endl;
//            return 0;
//        }
//        if(isE == -1 && visitO[K]) {
//            cout << cnt << endl;
//            return 0;
//        }
//        if(isE == -1){
//            for(int i = 0 ; i < curC; i++){
//                if(q.front()*2 <= 500000 && !visitE[q.front()*2] ){
//                    visitE[q.front()*2] = true;
//                    q.push_back(q.front()*2);
//                    nxtC++;
//                }
//                if(q.front() > 0 && !visitE[q.front()-1]){
//                    visitE[q.front()-1] = true;
//                    q.push_back(q.front()-1);
//                    nxtC++;
//                }
//                if(q.front() < 500000 && !visitE[q.front()+1]) {
//                    visitE[q.front()+1] = true;
//                    q.push_back(q.front()+1);
//                    nxtC++;
//                }
//                q.pop_front();
//            }
//        }
//        else {
//            for(int i = 0 ; i < curC; i++){
//                if(q.front()*2 <= 500000 && !visitO[q.front()*2] ){
//                    visitO[q.front()*2] = true;
//                    q.push_back(q.front()*2);
//                    nxtC++;
//                }
//                if(q.front() > 0 && !visitO[q.front()-1]){
//                    visitO[q.front()-1] = true;
//                    q.push_back(q.front()-1);
//                    nxtC++;
//                }
//                if(q.front() < 500000 && !visitO[q.front()+1]) {
//                    visitO[q.front()+1] = true;
//                    q.push_back(q.front()+1);
//                    nxtC++;
//                }
//                q.pop_front();
//            }
//        }
//        cnt ++;
//        K += cnt;
//        curC = nxtC;
//        nxtC = 0;
//        isE *= -1;
//    }
//}
//
