#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> sets(n);
        vector<vector<int>> elemSets(m+1);
        for(int i = 0; i < n; i++){
            int li;
            cin >> li;
            sets[i].resize(li);
            for(int j = 0; j < li; j++){
                cin >> sets[i][j];
                elemSets[sets[i][j]].push_back(i);
            }
        }
        int flag = 0;
        for(int j = 1; j <= m; j++){
            if(elemSets[j].empty()){
                cout << "NO
";
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        vector<int> count(m+1);
        for(int j = 1; j <= m; j++){
            count[j] = elemSets[j].size();
        }
        vector<int> chosen(n, 0);
        vector<int> covered(m+1, 0);
        long long cov_cnt = 0;
        queue<int> q;
        for(int j = 1; j <= m; j++){
            if(count[j] == 1){
                int setIdx = elemSets[j][0];
                q.push(setIdx);
            }
        }
        long long cho_cnt = 0;
        while(!q.empty()){
            int i = q.front(); q.pop();
            if(chosen[i]) continue;
            chosen[i] = 1;
            cho_cnt++;
            for(int x : sets[i]){
                if(!covered[x]){
                    covered[x] = 1;
                    cov_cnt++;
                    for(int k : elemSets[x]){
                        if(!chosen[k]){
                        }
                    }
                }
            }
        }
        if(cov_cnt < m){
            cout << "YES
";
        } else {
            long long res = n - cho_cnt;
            if(res >= 2) cout << "YES
";
            else cout << "NO
";
        }
    }
    return 0;
}