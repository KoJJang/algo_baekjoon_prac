//#include <iostream>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int N, val[3];
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> val[i];
//    }
//    
//    int min = 0x3f3f3f3f;
//    for(int i = 0 ; i < N; i++){
//        min = val[i] < min ? val[i] : min;
//    }
//    
//    for(int i = 1 ; i < min; i++){
//        bool istrue = true;
//        for(int j = 0; j < N; j++){
//            if(val[j] % i != 0) {
//                istrue = false;
//                break;
//            }
//        }
//        if(istrue) cout << i << "\n";
//    }
//}

