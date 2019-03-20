//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int N, A, B, C;
//long long ans;
//queue<int> q;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> A;
//        q.push(A);
//    }
//    cin >> B >> C;
//    ans = N;
//
//    for(int i = 0 ; i < N; i++){
//        int tmp = q.front() - B;
//        q.pop();
//        if( tmp <= 0 ) continue;
//        ans += tmp/C;
//        if(tmp%C != 0) ans++;
//    }
//    cout << ans <<"\n";
//    return 0;
//}

