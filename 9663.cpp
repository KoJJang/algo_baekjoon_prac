//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//int col[15], inc[30], des[30];
//int result = 0;
//
//bool chkQ(int a, int b){
//    if(col[b]) return false;
//    if(inc[a+b]) return false;
//    if(des[N+(a-b)]) return false;
//    return true;
//}
//
//void dfs(int cnt){
//    for(int i = 0 ; i < N; i++){
//        if(chkQ(cnt, i)){
//            if(cnt == N - 1){
//                result++;
//            }else{
//                col[i] = 1; inc[cnt+i] = 1;des[N+(cnt-i)] = 1;
//                dfs(cnt+1);
//                col[i] = 0; inc[cnt+i] = 0;des[N+(cnt-i)] = 0;
//            }
//        }
//    }
//}
//
//int main(){
//    cin >> N;
//    
//    dfs(0);
//    cout << result << endl;
//    
//    return 0;
//}

