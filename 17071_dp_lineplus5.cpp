#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N , K;
    bool visit[500001] = {false,};
    cin >> N >> K;
    
    int cnt = 0;
//    queue<int> q;
    deque<int> q;
    q.push_back(N);
    visit[N] = true;
    int nxtC = 0;
    int curC = 1;
    while(1){
        if(K > 500000) {
            cout << -1 << endl;
            return 0;
        }
        if(visit[K]) {
            cout << cnt << endl;
            return 0;
        }
//        tmp_q = q;
        for(int i = 0 ; i < q.size(); i++){
            visit[q[i]] = false;
        }
//
        for(int i = 0 ; i < curC; i++){
            if(q.front() > 0 && !visit[q.front()-1]){
                visit[q.front()-1] = true;
                q.push_back(q.front()-1);
                nxtC++;
            }
            if(q.front() < 500000 && !visit[q.front()+1] ) {
                visit[q.front()+1] = true;
                q.push_back(q.front()+1);
                nxtC++;
            }
            if(q.front()*2 <= 500000 && !visit[q.front()*2] ){
                visit[q.front()*2] = true;
                q.push_back(q.front()*2);
                nxtC++;
            }
            q.pop_front();
        }
        cnt ++;
        K += cnt;
        curC = nxtC;
        nxtC = 0;
    }
}
