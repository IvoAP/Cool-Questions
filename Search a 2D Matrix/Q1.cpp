#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>M;

bool binary_search(vector<int> &a, int &target){
    int l = 0;
    int r = a.size() - 1;

    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == target){
            return true;
        }

        if(a[m] > target){
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return false;
}

int main(){

    int n, m, target;
    vector<vector<int>>M;
    cin >> n >>  m >> target;
    M.resize(n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int x; cin >> x;
            M[i].push_back(x);
        }
    }

    bool flag = false;
    for(int i = 0; i<n; i++){
        flag = binary_search(M[i], target);
        if( flag) break;
    }

    if(flag) cout << "true\n";
    else cout << "false\n";
    return 0;
}

