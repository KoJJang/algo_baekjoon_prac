//// 비트마스크로 하는 거 실패
//#include <iostream>
//#include <cstdio>
//#include <deque>
//#include <algorithm>
//
//using namespace std;
//
//deque<int> Tire[5];
//int K, tmp, T_num, loc, ans = 0;
//bool meetP[3];
//
//void RIGHT(int idx){ // 시계방향 회전
//    Tire[idx-1].push_front(Tire[idx-1].back());
//    Tire[idx-1].pop_back();
//}
//
//void LEFT(int idx){ // 반시계방향 회전
//    Tire[idx-1].push_back(Tire[idx-1].front());
//    Tire[idx-1].pop_front();
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    for(int i = 0 ; i < 4; i++){
//        Tire[i].resize(8);
//        for(int j = 0 ; j < 8; j++){
//            scanf("%1d", &Tire[i][j]);
//        }
//    }
//
//    cin >> K;
//    for(int i = 0 ; i < K; i++){
//        meetP[0] = (Tire[0][2]) == ((Tire[1][6])); // 가장 먼저 맞닿은 부분 확인
//        meetP[1] = (Tire[1][2]) == ((Tire[2][6]));
//        meetP[2] = (Tire[2][2]) == ((Tire[3][6]));
//        cin >> T_num >> loc;
//        if(loc == 1) { RIGHT(T_num); } // 첫번째 바퀴는 무조건 회전
//        else{ LEFT(T_num); }
//        int t_loc = loc;
//        for(int a = T_num-1; a >= 1; a--){ // 왼쪽으로 이동하면서 확인
//            t_loc = t_loc*(-1);
//            if(meetP[a-1]) {break;} // 같은 극이면 멈춤
//            else if(t_loc == 1) {RIGHT(a);}
//            else{LEFT(a);}
//        }
//        t_loc = loc;
//        for(int a = T_num+1; a <5; a++){ // 오른쪽으로 이동하면서 확인
//            t_loc = t_loc*(-1);
//            if(meetP[a-2]) {break;} // 같은 극이면 멈춤
//            else if(t_loc == 1) { RIGHT(a); }
//            else{LEFT(a);}
//        }
//        for(int j = 0; j < 4; j++){
//            for(int k = 0; k < 8; k++){
//                cout << Tire[j][k];
//            }cout << endl;
//        }
//    }
//
//    if(Tire[0][0] == 1) ans+=1;
//    if(Tire[1][0] == 1) ans+=2;
//    if(Tire[2][0] == 1) ans+=4;
//    if(Tire[3][0] == 1) ans+=8;
//
//    cout << ans;
//    return 0;
//}
//
////#include<cstdio>
////#include<vector>
////#include<deque>
////#include<algorithm>
////#include <iostream>
////
////using namespace std;
////int k;
////deque<int> ns[5];
////void rotate(bool v[5],int idx,bool clk){
////    v[idx] = true;
////    if(idx-1>=1 && !v[idx-1] && ns[idx-1][2]!=ns[idx][6]) rotate(v,idx-1,!clk);
////    if(idx+1<=4 && !v[idx+1] && ns[idx+1][6]!=ns[idx][2]) rotate(v,idx+1,!clk);
////    if(clk){
////        ns[idx].push_front(ns[idx].back());
////        ns[idx].pop_back();
////    }else{
////        ns[idx].push_back(ns[idx].front());
////        ns[idx].pop_front();
////    }
////}
////
////int main(){
////    for(int i=1;i<=4;++i){
////        ns[i].resize(8);
////        for(int j=0;j<8;++j)
////            scanf("%1d",&ns[i][j]);
////    }
////
////    scanf("%d",&k);
////    for(int i=0;i<k;++i){
////        int x, y;
////        scanf("%d%d",&x,&y);
////        bool v[5] = {0};
////        rotate(v,x,y==1);
////        for(int j = 1; j < 5; j++){
////            for(int k = 0; k < 8; k++){
////                cout << ns[j][k];
////            }cout << endl;
////        }
////    }
////    int ans = 0;
////    if(ns[1][0]==1) ans += 1;
////    if(ns[2][0]==1) ans += 2;
////    if(ns[3][0]==1) ans += 4;
////    if(ns[4][0]==1) ans += 8;
////    printf("%d",ans);
////    return 0;
////}
//
