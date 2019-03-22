#include <iostream>
#include <vector>

using namespace std;

int N = 1, K;
vector<int> v;

bool rf(int s, int f, int cnt, int alpha){ // start, finish, count, what_alphabet
    if(K == (f-s-(cnt)) * (cnt)){ // 제일 끝 바꿨을 때 딱맞으면
        v[f-cnt] = alpha;
        return true;
    }
    else if ( K < (f-s-cnt) * cnt){ // 제일 끝 바꾼거보다 작으면
        v[s+ K - (f-s-(cnt-1)) * (cnt-1) + (cnt-1)] = alpha;
        return true;
    }
    else { // 제일 끝 바꾼거 보다 크면
        v[f-cnt] = alpha;
        if(cnt >= (f - s + 1)/2){ // 절반 이상으로 바꿨으면
            if(alpha == 2) return false;
            K -= (f-s-cnt) * cnt;
            return rf(f-cnt, f, 1, alpha+1);
        }
        return rf(s, f, cnt+1, alpha);
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while( N != 0){
        cin >> N >> K;
        v.clear();
        v.resize(N);
        
        if(rf(0,N,1,1)){
            for(int i = 0 ; i < N; i++){
                switch(v[i]){
                    case 0:
                        cout << "A";
                        break;
                    case 1:
                        cout << "B";
                        break;
                    case 2:
                        cout << "C";
                        break;
                }
            }cout << "\n";
        }else {
            cout << -1 << "\n";
        };
        int tmp_cnt = 0, tmp_sum = 0;
        for(int i = 0 ; i < v.size(); i++){
            if(v[i] == 0) tmp_cnt++;
            else tmp_sum += tmp_cnt;
        }
        tmp_cnt = 0;
        for(int i = 0 ; i < v.size(); i++){
            if(v[i] == 1) tmp_cnt++;
            else if(v[i] == 2) tmp_sum += tmp_cnt;
        }
        cout << K << " == SUM ==> " << tmp_sum << "\n";
    }
}
