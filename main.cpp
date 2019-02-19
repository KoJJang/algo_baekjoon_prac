//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int M, N, H;
//vector <pair<int, int>> q;
//vector <int> q_i;
//
//int dfs(int curcol, int currow, int start){ // col : 세로 줄, row : 가로 줄
//    bool notfound = true;
//    for(int j = 0 ; j < q.size() ; j++){
//        if((q[j].second == curcol || q[j].second == curcol - 1)
//           && q[j].first >= currow){
//            if(q[j].second == curcol){
//                curcol = q[j].second + 1;
//            }else {
//                curcol = q[j].second;
//            }
//            currow = q[j].first;
//            notfound = false; // 다른 줄이 없으면
//            return dfs(curcol,currow + 1,start);
//        }
//    }
//    if(notfound){
//        if(curcol == start){
//            return 1;
//        }
//    }
//    return -1;
//}
//
//int main(int argc, const char * argv[]) {
//    cin >> N >> M >> H;
//
//    for(int i = 0 ; i < M ; i++){ // 입력
//        int tmp1, tmp2;
//        cin >> tmp1 >> tmp2;
//        q.push_back(make_pair(tmp1 - 1, tmp2 - 1));
//    }
//    bool isrealTrue = false;
//
//    for(int num_line = 0; num_line < 4; num_line++){ // 추가 안한거 부터 3개 라인까지 추가
//        if(isrealTrue){
//            break;
//        }
//        q_i.assign((N-1)*H, 0);
//        for(int i = 0 ; i < num_line; i++){
//            q_i[i] = 1;
//        } // 갯수만큼 추가
//        sort(q_i.begin(),q_i.end());
//
//        do{
//            for(int i = 0 ; i < q_i.size(); i++){ // 라인 추가
//                bool ck = true;
//                if(q_i[i] == 1){
//                    for(int j = 0 ; j < q.size(); j++){
//                        if(((q[j].second == i%(N-1) -1 ) || (q[j].second == i%(N-1) + 1))
//                            && q[j].first == i/(N-1)){
//                            ck = false;
//                        }
//                    }
//                    if(ck){
//                        q.push_back(make_pair(i/(N-1),i%(N-1)));
//                    }
//                }
//            }
//
//            for(int i = 0 ; i < q_i.size(); i++){ // 정렬
//                pair<int, int> tmp;
//                for(int j = i ; j < q_i.size(); j++){
//                    if(q[i].first > q[j].first){
//                        tmp = q[j];
//                        q[j] = q[i];
//                        q[i] = tmp;
//                    }
//                }
//            }
//
//            // 사다리 타면서 확인
//            bool isTrue = true;
//            for(int col = 0 ; col < N; col++){
//                int tmp = dfs(col, 0, col);
//                if (tmp == -1){
//                    isTrue = false; // 틀린 라인이 나오면 넘어감
//                    break;
//                }
//            }
//
//            if (isTrue){ // 모든 라인에서 맞게 나오면
//                cout << num_line << endl;
//                isrealTrue = true;
//                break;
//            }
//
//            for(int i = 0 ; i < num_line; i++){ // 만들었던 라인 지움
//                q.pop_back();
//            }
//        }while(next_permutation(q_i.begin(), q_i.end()));
//    }
//    if(!isrealTrue){
//        cout << "-1";
//    }
//}
//
