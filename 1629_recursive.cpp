#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int A, B, C;

int rf(int a, int b){
    if(b == 0) return 1;
    
    int tmp = rf(a, b/2);
    int result = 1LL * tmp * tmp % C;
    
    if(b%2) result = 1LL * result * a % C;
    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> A >> B >> C;
    cout << rf(A,B);
}
