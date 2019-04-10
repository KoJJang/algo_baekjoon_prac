//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int D, W, K;
//int film[13][20], tmp_film[13][20];
//vector<int> medicine;
//
//bool chkf(){
//    for(int i = 0 ; i < W; i++){
//        int prev = -1;
//        int cnt = 0;
//        bool isFind = false;
//        for(int j = 0 ; j < D; j++){
//            if(tmp_film[j][i] != prev){
//                prev = tmp_film[j][i];
//                cnt = 1;
//            }else {
//                cnt++;
//                if(cnt == K){
//                    isFind = true;
//                    break;
//                }
//            }
//        }
//        if(!isFind) return false;
//    }
//    return true;
//}
//
//bool make_medicine(int sta, int m_num, int cnt){
//    bool isFind = false;
//    for(int i = 0; i < W; i++){
//        tmp_film[sta][i] = 1;
//    }
//    if(m_num == cnt){
//        isFind = chkf();
//        if(isFind) return true;
//    }
//    else {
//        for(int j = sta+1 ; j < D; j++){
//            if(medicine[j]) {
//                isFind = make_medicine(j, m_num, cnt+1);
//                if(isFind) return true;
//            }
//        }
//    }
//
//    for(int i = 0; i < W; i++){
//        tmp_film[sta][i] = 0;
//    }
//    if(m_num == cnt){
//        isFind = chkf();
//        if(isFind) return true;
//    }
//    else {
//        for(int j = sta+1 ; j < D; j++){
//            if(medicine[j]) {
//                isFind = make_medicine(j, m_num, cnt+1);
//                if(isFind) return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main(){
//    int T;
//    cin >> T;
//    for(int testcase = 1; testcase <= T; testcase++){
//        cin >> D >> W >> K;
//        for(int i = 0 ; i < D; i++){
//            for(int j = 0 ; j < W; j++){
//                cin >> film[i][j];
//                tmp_film[i][j] = film[i][j];
//            }
//        }
//
//        if(chkf()) { // 약 필요 없다
//            cout << "#" << testcase << " " << 0 << "\n";
//            medicine.clear();
//            continue;
//        }
//        if(K==1) {
//            cout << "#" << testcase << " " << 0 << "\n";
//            medicine.clear();
//            continue;
//        }
//        //한개씩 약 넣어보자
//        medicine.resize(D);
//        bool isFind = false;
//        int ans = -1;
//
//        for(int i = 0 ; i < D; i++){
//            medicine[0] = 1; // 약을 넣어야 하는 줄 한 줄 추가
//            sort(medicine.begin(), medicine.end());
//            if(i+1 == K) {
//                ans = K;
//                break;
//            }
//            do{
//                for(int j = 0 ; j < D; j++){
//                    if(medicine[j]) {
//                        if(make_medicine(j, i+1, 1)){ // 한줄씩 약 쳐본다
//                            isFind = true;
//                            ans = i+1;
//                            break;
//                        }
//                    }
//                }
//
//                for(int j = 0 ; j < D; j++){ // 원래값으로 변경
//                    if(medicine[j]) {
//                        for(int k = 0 ; k < W; k++){
//                            tmp_film[j][k] = film[j][k];
//                        }
//                    }
//                }
//
//                if(isFind) break;
//            }while(next_permutation(medicine.begin(), medicine.end()));
//            if(isFind) break;
//        }
//        cout << "#" << testcase << " " << ans << "\n";
//        medicine.clear();
//    }
//}

