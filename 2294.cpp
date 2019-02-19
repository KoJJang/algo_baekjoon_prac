//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//    
//    int n, k, d[100001], price[101];
//    memset(d,-1,sizeof(int)*100001);
//    
//    cin >> n >> k;
//    for(int i = 0 ; i < n ; i ++){
//        cin >> price[i];
//    }
//    
//    sort(price, price+n);
//    
//    for(int i = 0 ; i < n ; i++){
//        d[price[i]] = 1;
//        for(int j = price[i]+1 ; j <= k; j++){
//            if( j % price[i] == 0) {
//                d[j] = j / price[i];
//            }else {
//                if(d[j-price[i]] == -1){}
//                else {
//                    if(d[j] == -1) {
//                        d[j] = d[j - price[i]] + 1;
//                    }else{
//                        d[j] = d[j - price[i]] + 1 > d[j] ? d[j] : d[j - price[i]] + 1;
//                    }
//                }
//            }
////            cout << d[j] << " ";
//        }
////        cout << "\n";
//    }
//    
//    cout << d[k] << endl;
//}

