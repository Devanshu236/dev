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
       ll arr[n];
       
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int first = arr[0];
       ll ans=0;
      
       for (int i = 0; i < n - 1; i++) {
           if(arr[i]==first){
               if(n%2==0){
                   ans=n/2;
               }
               else {
                   ans=n/2-1;
               }
           }

           
 
        
        else if (arr[i] == arr[i + 1])
            ans++;
    }
       
       cout<<ans<<endl;




    }
}