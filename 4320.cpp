//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int N;
//    while(cin >> N && N){
//        
//        int xx = fabs(N), r = 0, p;
//        for(int b = 2; (r=b*b) <= xx; b++) {
//            for(p = 2; r<xx; p++) r*=b;
//            if(r == xx) {
//                if ( N > 0 || p%2 ) {
//                    cout << p << endl;
//                    goto done;
//                }
//            }
//        }
//        cout << 1 << endl;
//    done:;
//    }
//}

