//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef pair<char, char> Pc;
//char surface[6][3][3]; // U D F B L R
//char prev_s[6][3][3]; // U D F B L R
//vector<Pc> v;
//
//void input(){
//    int n; Pc p;
//    cin >> n;
//    for(int i = 0 ; i < 3; i++){
//        for(int j = 0 ; j < 3; j++){
//            surface[0][i][j] = 'w';surface[1][i][j] = 'y';surface[2][i][j] = 'r';
//            surface[3][i][j] = 'o';surface[4][i][j] = 'g';surface[5][i][j] = 'b';
//            prev_s[0][i][j] = 'w';prev_s[1][i][j] = 'y';prev_s[2][i][j] = 'r';
//            prev_s[3][i][j] = 'o';prev_s[4][i][j] = 'g';prev_s[5][i][j] = 'b';
//        }
//    }
//    
//    for(int i = 0 ; i < n; i++){
//        cin >> p.first >> p.second;
//        v.push_back(p);
//    }
//
//}
//
//void curve90(char a){
//    int whatS = 0;
//    if(a == 'U') whatS = 0;if(a == 'D') whatS = 1;if(a == 'F') whatS = 2;
//    if(a == 'B') whatS = 3;if(a == 'L') whatS = 4;if(a == 'R') whatS = 5;
//    for(int i = 0 ; i < 3; i++){
//        for(int j = 0 ; j < 3; j++){
//            surface[whatS][i][j] = prev_s[whatS][2-j][i];
//        }
//    }
//    if(whatS == 0){ // 윗면 변화
//        for(int i = 0 ; i < 3; i++){
//            surface[2][0][i] = prev_s[5][0][i];surface[3][0][i] = prev_s[4][0][i];
//            surface[4][0][i] = prev_s[2][0][i];surface[5][0][i] = prev_s[3][0][i];
//        }
//    }
//    else if(whatS == 1){ // 아랫면 변화
//        for(int i = 0 ; i < 3; i++){
//            surface[2][2][i] = prev_s[4][2][i];surface[3][2][i] = prev_s[5][2][i];
//            surface[4][2][i] = prev_s[3][2][i];surface[5][2][i] = prev_s[2][2][i];
//        }
//    }
//    else if(whatS == 2){ // 앞면 변화 0145
//        for(int i = 0 ; i < 3; i++){
//            //위쪽은 20 21 22 <== 왼쪽면 22 12 02 // 아랫면 00 01 02 <== 오른쪽면 20 10 00
//            //왼쪽면은 02 12 22 <== 아랫면 00 01 02 // 오른쪽면은 00 10 20 <== 윗면 20 21 22
//            surface[0][2][i] = prev_s[4][2-i][2];surface[1][0][i] = prev_s[5][2-i][0];
//            surface[4][i][2] = prev_s[1][0][i];surface[5][i][0] = prev_s[0][2][i];
//        }
//    }
//    else if(whatS == 3){ // 뒷면 변화 0145
//        for(int i = 0 ; i < 3; i++){
//            //윗면은 00 01 02 <== 오른쪽면 02 12 22 // 아랫면은 20 21 22 <== 왼쪽 00 10 20
//            //왼쪽면은 00 10 20 <== 윗면 02 01 00 // 오른쪽면은 02 12 22 <== 아랫면 22 21 20
//            surface[0][0][i] = prev_s[5][i][2];surface[1][2][i] = prev_s[4][i][0];
//            surface[4][i][0] = prev_s[0][0][2-i];surface[5][i][2] = prev_s[1][2][2-i];
//        }
//    }
//    else if(whatS == 4){ // 왼쪽면 변화 0123
//        for(int i = 0 ; i < 3; i++){
//            //윗면은 00 10 20 <==  뒤쪽면 22 12 02 // 아랫면 00 10 20 <== 앞면 00 10 20
//            //뒤쪽 22 12 02 <== 아랫면 00 10 20// 앞쪽면 00 10 20 <== 윗면 00 10 20
//            surface[0][i][0] = prev_s[3][2-i][2];surface[1][i][0] = prev_s[2][i][0];
//            surface[3][2-i][2] = prev_s[1][i][0];surface[2][i][0] = prev_s[0][i][0];
//        }
//    }
//    else if(whatS == 5){ // 오른쪽면 변화 0123
//        for(int i = 0 ; i < 3; i++){
//            //윗면은 02 12 22 <==  앞면 02 12 22  // 아랫면 22 12 02 <== 뒷면 00 10 20
//            //뒤쪽 20 10 00 <== 위쪽 02 12 22// 앞쪽면 02 12 22 <== 아랫면 02 12 22
//            surface[0][i][2] = prev_s[2][i][2];surface[1][2-i][2] = prev_s[3][i][0];
//            surface[3][2-i][0] = prev_s[0][i][2];surface[2][i][2] = prev_s[1][i][2];
//        }
//    }
//    
//    for(int i = 0 ; i < 3; i++){
//        for(int j = 0 ; j < 3; j++){
//            prev_s[0][i][j] = surface[0][i][j];prev_s[1][i][j] = surface[1][i][j];
//            prev_s[2][i][j] = surface[2][i][j];prev_s[3][i][j] = surface[3][i][j];
//            prev_s[4][i][j] = surface[4][i][j];prev_s[5][i][j] = surface[5][i][j];
//        }
//    }// 다 바꾸고 값 옮겨줌
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int T;
//    cin >> T;
//    for(int t = 0; t < T; t++){
//        input();
//        for(int i = 0 ; i < (int)v.size(); i++){
//            curve90(v[i].first);
//            if(v[i].second == '-') {
//                curve90(v[i].first);
//                curve90(v[i].first);
//            }
//        }
//        v.clear();
//        for(int i = 0 ; i < 3; i++){
//            for(int j = 0 ; j < 3; j++){
//                cout << surface[0][i][j];
//            }cout << "\n";
//        }
//    }
//}

