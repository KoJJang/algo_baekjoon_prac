//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//
//ll tb[250001] = {0,}, tmp[250001] = {0,}, n, m, k;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m >> k;
//    
//    for(int i = 0 ; i <= n; i++){
//        tb[i] = 1;
//    }
//    int cnt = n;
//    for(int i = 0 ; i < m-1; i++){ // 한개의 승 씩 더함
//        for(int k = 0; k <= cnt; k++){
//            tmp[k] = tb[k];
//            tb[k] = 0;
////            cout << tmp[k] << " ";
//        }
////        cout << endl;
//        cnt += n;
//        tb[0] = tmp[0];
//        for(int j = 1; j <= cnt; j++){
//            if(j <= n){
//                tb[j] = (ll)((ll)tb[j-1] + (ll)tmp[j]) % 1000000009;
//            }else {
//                if(tb[j-1] - tmp[j-(n+1)] + tmp[j] < 0) {
//                    tb[j] = (ll)(1000000009 + tb[j-1] + tmp[j] - tmp[j-(n+1)]) % 1000000009;
//                }
//                else tb[j] = (ll)((ll)tb[j-1] - (ll)tmp[j-(n+1)] + (ll)tmp[j]) % 1000000009;
//            }
//        }
//    }
//    cout << tb[k];
//}

