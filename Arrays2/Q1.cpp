#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ins insert
#define int long long
#define vii vector<int>
#define pii pair<int,int>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void print(vii &a){
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
}
int32_t main()
{
    FAST;
    int n,d;cin>>n>>d;
    vii a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.pb(x);
    }
    int maxElement=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int ptr=(i+d);
        ptr%=n;
        

        a[i]=a[i]+(a[ptr]%maxElement)*maxElement;
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]/maxElement;
    }
    print(a);
    return 0;
}