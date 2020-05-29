#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n,x,y,mx,mn,ans;
    cin>>n;
    while(n--){
        cin>>x>>y;
        mx = x>y?x:y;
        mn = x<y?x:y;
        mn *= 2;
        ans = mx>mn?mx:mn;
        ans *= ans;
        cout<<ans<<endl;
    }
}
