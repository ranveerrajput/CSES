#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i) continue;
            else{
                dp[i]=((dp[i]%MOD)+(dp[i-j]%MOD))%MOD;
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}