#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
void solve(){
    ll n,m,x,y,i,j;
    string s;
    cin>>n>>m>>x>>y;
    vector<string> v;
    for(i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    ll sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;){
            if(j<m-1 && v[i][j] == '.' && v[i][j+1] == '.'){
                sum=sum+min(2*x,y);
                j=j+2;
            }
            else if(v[i][j] == '*'){
                j++;
            }
            else{
                sum=sum+x;
                j=j+2;
            }
        }
    }
    cout<<sum<<"\n";
    return;
}
int main(){
    ll t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        solve();
    }
}