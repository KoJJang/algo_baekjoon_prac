//#include <iostream>
//
//using namespace std;
//int tab[9][9];
//int row[9], col[9], thbyth[3][3];
//
//int chkLine(int line_num, int isRow = 0){
//    int tmp[9] = {0, }, zero_loc = 0;
//    if(isRow){
//        for(int i = 0 ; i < 9; i++){
//            if(tab[line_num][i]) tmp[tab[line_num][i]-1]++;
//            else zero_loc = i;
//        }
//        for(int i = 0 ; i < 9; i++){
//            if(!tmp[i]) {
//                tab[line_num][zero_loc] = i+1;
//                thbyth[line_num/3][zero_loc/3]--;
//                return (zero_loc);
//            }
//        }
//    }else{
//        for(int i = 0 ; i < 9; i++){
//            if(tab[i][line_num]) tmp[tab[i][line_num]-1]++;
//            else zero_loc = i;
//        }
//        for(int i = 0 ; i < 9; i++){
//            if(!tmp[i]) {
//                tab[zero_loc][line_num] = i+1;
//                thbyth[zero_loc/3][line_num/3]--;
//                return (zero_loc);
//            }
//        }
//    }
//    return 0;
//}
//
//void chkRec(int a, int b){
//    int tmp[9] = {0, }, tmp_i, tmp_j;
//    for(int i = 0 ; i < 3; i++){
//        for(int j = 0 ; j < 3; j++){
//            if(tab[a*3 + i][b*3 + j]) tmp[tab[a*3 + i][b*3 + j]-1]++;
//            else {
//                tmp_i = i; tmp_j = j;
//            }
//        }
//    }
//    for(int i = 0 ; i < 9; i++){
//        if(!tmp[i]) {
//            tab[a*3 + tmp_i][b*3 + tmp_j] = i+1;
//            row[a*3 + tmp_i] --;
//            col[b*3 + tmp_j] --;
//            return;
//        }
//    }
//}
//
//int main(){
//
//    for(int i = 0 ; i < 9; i++){
//        for(int j = 0 ; j < 9; j++){
//            cin >> tab[i][j];
//            if(!tab[i][j]){
//                row[i]++; col[j]++; thbyth[i/3][j/3]++;
//            }
//        }
//    }
//
//    bool isEnd;
//
//    while(1){
//        isEnd = true;
//        for(int i = 0; i < 9; i++){
//            if(row[i] || col[i]){
//                isEnd = false; break;
//            }
//        }
//        if(isEnd) break;
//
//        for(int i = 0 ; i < 9; i++){
//            if(row[i] == 1) {
//                col[chkLine(i,1)]--;
//                row[i]--;
//            }
//            if(col[i] == 1) {
//                row[chkLine(i,0)]--;
//                col[i]--;
//            }
//        }
//        for(int i = 0 ; i < 3; i++){
//            for(int j = 0 ; j < 3; j++){
//                if(thbyth[i][j] == 1){
//                    chkRec(i, j);
//                }
//            }
//        }
//
//    }
//    for(int i = 0 ; i < 9; i++){
//        for(int j = 0 ; j < 9; j++){
//            cout << tab[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//
