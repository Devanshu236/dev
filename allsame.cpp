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
       ll n;
       cin>>n;
       vi arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       sort(arr.begin(),arr.end());
       ll ans=0;
       if(arr[0]==arr[n-1]){
           cout<<-1<<endl;
       }
       else{
       for(int i=1;i<n;i++){
           ans=__gcd(ans,arr[i]-arr[0]);
       }
cout<<ans<<endl;
       }
   }
     
    }
  

