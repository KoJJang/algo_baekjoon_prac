//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int N, S[21][21], ans = 0x3f3f3f3f;
//vector<int> combi;
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        combi.push_back(0);
//        for(int j = 0 ; j < N; j++) cin >> S[i][j];
//    }
//
//    for(int i = 0 ; i < N-1 ; i++){
//        combi[N-1-i] = 1;
//        sort(combi.begin(), combi.end());
//        do{
//            int Ateam = 0, Bteam = 0;
//            vector<int> A, B;
//            for(int a = 0 ; a < N; a++){
//                if(combi[a] == 0) A.push_back(a); // 0이면 A팀
//                else              B.push_back(a); // 1이면 B팀
//            }
//            for(int z = 1; z < A.size(); z++){
//                for(int x = 0; x < z; x++){
//                    Ateam += S[A[z]][A[x]];
//                    Ateam += S[A[x]][A[z]];
//                }
//            }
//            for(int z = 1; z < B.size(); z++){
//                for(int x = 0; x < z; x++){
//                    Bteam += S[B[z]][B[x]];
//                    Bteam += S[B[x]][B[z]];
//                }
//            }
//            ans = ans > abs(Ateam - Bteam) ? abs(Ateam - Bteam) : ans;
//        }
//        while(next_permutation(combi.begin(), combi.end()));
//    }
//    cout << ans << endl;
//}

