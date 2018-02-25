//524 uva
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for (int i = 2; i*i <= x; i++){
        if (!(x % i)) return false;
    }
    return true;
}

int n;
vector<int> tmp;
vector<vector<int>> ans;
void rec() {
    if (tmp.size() == n) {
    	// if the first and last nums have a prime sum
        if (isPrime(tmp.front() + tmp.back())) ans.push_back(tmp);
        return;
    }
    for (int i = 2; i <= n; i++){
    	// if this num will result in a prime sum with the prv num && this num wasn't chosen before
        if (isPrime(tmp.back() + i) && find(tmp.begin(), tmp.end(), i) == tmp.end()) {
            tmp.push_back(i); // mark
            rec();
            tmp.pop_back(); // backtrack
        }
    }
}

int main() {
    int cnt = 0;
    tmp.push_back(1);
    while (cin >> n){
        if (cnt) cout << endl;
        cnt++;
        rec();
        cout << "Case " << cnt << ":" << endl;
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < n; j++){
                if (j) cout << " ";
                cout << ans[i][j];
            }
            cout << endl;
        }
        ans.clear();
    }
}
