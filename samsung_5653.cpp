//#include<iostream>
//#include<map>
//#include<vector>
//
//using namespace std;
//typedef pair<int, int> P;
//
//map<P, int> m, in_time;
//vector< vector<P> > vt, vd;
//int N, M, K;
//P dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
//
//void qjstlr(){
//    map<P, int> ::iterator it;
//    for(int ti = 1 ; ti <= K; ti++){
//        map<P, int> tmpM;
//        for(int vi = 0 ; vi < (int)vt[ti].size(); vi++){
//            for(int i = 0 ; i < 4; i++){
//                P np = {vt[ti][vi].first + dir[i].first,
//                    vt[ti][vi].second + dir[i].second};
////                if(m.find(np) == m.end() || (in_time[np] == ti && m[np] < m[vt[ti][vi]])){
////                    m[np] = m[vt[ti][vi]]; //빈 그리드에 추가
////                    vd[(m[vt[ti][vi]])*2+ti].push_back(np);
////                    vt[(m[vt[ti][vi]])+ti+1].push_back(np);
////                    in_time[np] = ti;
////                }
//                if(m.find(np) == m.end()){ // 동시에 추가하는 것 고려 안하고 그냥 추가 한게 통과 됨..
//                                            // 동시에 추가하는 것 고려하면 시간초과.. 읭?
//                    m[np] = m[vt[ti][vi]]; //빈 그리드에 추가
//                    vd[(m[vt[ti][vi]])*2+ti].push_back(np);
//                    vt[(m[vt[ti][vi]])+ti+1].push_back(np);
//                }
////                if(tmpM.find(np) == tmpM.end()) { //추가된 게 없으면
////                    tmpM[np] = m[vt[ti][vi]];
////                }else { // 이미 추가되어 있으면 비교
////                    if(tmpM[np] < m[vt[ti][vi]]) {
////                        tmpM[np] = m[vt[ti][vi]]; // 동시에 추가되는 세포 중 생명력이 더 강한놈
////                    }
////                }
//            }
//        }
////        for(it = tmpM.begin(); it != tmpM.end(); it++){
////            if(m.find(it->first) == m.end()){
////                m[it->first] = it->second; //빈 그리드에 추가
////                vd[(it->second)*2+ti].push_back(it->first);
////                vt[(it->second)+ti+1].push_back(it->first);
////            }
////        }
////        tmpM.clear();
//    }
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    vt.resize(301); vd.resize(301);
//    cin>>T;
//    for(test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> N >> M >> K;
//        for(int i = 0 ; i < N ; i++){
//            for(int j = 0 ; j < M ; j++){
//                int tmpN;
//                cin >> tmpN;
//                if(tmpN > 0){
//                    m[{i,j}] = tmpN; // 생명력
//                    in_time[{i,j}] = 0;
//                    // 번식 시간
//                    vt[tmpN+1].push_back({i,j});
//                    // 죽는 시간
//                    vd[2*tmpN].push_back({i,j});
//                }
//            }
//        }
//        qjstlr();
//        int ans = 0;
//        for(int i = K+1; i < 301; i++){
//            ans += (int)vd[i].size();
//        }
//        m.clear();
//        vt.clear(); vt.resize(301); vd.clear(); vd.resize(301);
//        
//        cout << '#' << test_case << " " << ans << "\n";
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
//
