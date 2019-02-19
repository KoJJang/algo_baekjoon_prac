//#include <iostream>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int N, S, L, H;
//    int data_num[100001];
//
//    cin >> N >> S;
//
//    for(int i = 0 ; i < N; i++){
//        cin >> data_num[i];
//    }
//
//    int tmp_sum = data_num[0], tmp_result= 0x3f3f3f3f;
//    L = 0; H = 0;
//    while(H != N){
//        if(tmp_sum >= S){
//            tmp_result = tmp_result > H - L + 1 ? H - L + 1 : tmp_result;
//            if(tmp_result == 1) {
//                cout << 1 << "\n";
//                return 0;
//            }
//            tmp_sum -= data_num[L];
//            L++;
//        }
//        else {
//            if( H < N - 1) {
//                H++;
//                tmp_sum += data_num[H];
//            }
//            else break;
//        }
//    }
//
//    tmp_result = tmp_result == 0x3f3f3f3f ? 0 : tmp_result;
//    cout << tmp_result << "\n";
//
//    return 0;
//}

