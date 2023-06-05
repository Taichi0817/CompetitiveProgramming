#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)

int main(){
    int X;
    cin>>X;

    int ans=1;
    for(int i=2;i<=X;i++){
        for(int j=2;;j++){
            if(pow(i,j)>X) break;
            ans=max(ans,(int)pow(i,j));
        }
    }

    cout<<ans<<endl;
}
