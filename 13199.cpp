//#include <iostream>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int D, S, M, P, T, F, C, Dans, Sans;
//    cin >> T;
//    for(int i = 0; i < T; i++){
//        cin >> P >> M >> F >> C;
//        D = S = Dans = Sans = 0;
//        int pC = M/P;
//        D = S = pC * C;
//        if(D/F >= 1){
//            Dans += D/F;
//            D %= F;
//        }
//        while(S/F >= 1){
//            int ckNum = S/F;
//            Sans += S/F;
//            S %= F;
//            S += ckNum * C;
//        }
//        cout << Sans - Dans << endl;
//    }
//    return 0;
//}
