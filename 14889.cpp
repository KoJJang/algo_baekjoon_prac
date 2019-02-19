//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, prev_sum, next_sum, min_sum = 0x3f3f3f3f;
//int S[20][20];
//vector<int> combi;
//
//int main(){
//    cin >> N;
//    combi.resize(N);
//    
//    for(int i = 0; i < N; i++){
//        combi[i/2] = 1;
//        for(int j = 0 ; j < N; j++){
//            cin >> S[i][j];
//        }
//    }
//    do{
//        prev_sum = next_sum = 0;
//        
//        for(int i = 0; i < N; i++){
//            if(combi[i]){
//                for(int j = 0 ; j < N; j++){
//                    if(combi[j]){
//                        prev_sum += S[i][j];
//                    }
//                }
//            }
//        }
//        
//        for(int i = 0; i < N; i++){
//            if(!combi[i]){
//                for(int j = 0 ; j < N; j++){
//                    if(!combi[j]){
//                        next_sum += S[i][j];
//                    }
//                }
//            }
//        }
//        prev_sum = abs(prev_sum - next_sum);
//        if(prev_sum < min_sum) {
//            min_sum = prev_sum;
//        }
//        if( min_sum == 0 ) {
//            break;
//        }
//    }while(prev_permutation(combi.begin(), combi.end()));
//    
//    cout << min_sum << endl;
//    
//    return 0;
//}
//
