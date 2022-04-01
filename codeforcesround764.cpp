#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define mp make_pair
#define pii pair<int,int>
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define nl "\n"
#define vi vector<ll>
#define pb push_back
#define vb(a) a.begin()
#define ve(a) a.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1000000007;
const ll N=1e7+2;


int main(){
    fio;
    ll t;
    cin>>t;
    while(t--){
     ll n,k;
     cin>>n>>k;
     ll a[n];
     ll b[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
         
     }
     vector <pair<int,int>> p;
     for(int i=0;i<n;i++){
         cin>>b[i];
         p.push_back(make_pair(a[i],b[i]));
         
     }
     sort(p.begin(),p.end());
     long long ans=k;
     for(int i=0;i<n;i++){
        if(p[i].first<=ans){
            ans=ans+p[i].second;

        }
        else if(p[i].first>ans){
            break;
        }

        
     }
     cout<<ans<<endl;



    }
}