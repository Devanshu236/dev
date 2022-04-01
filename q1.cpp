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
        string s;
        cin>>s;
        int size=s.length();
        ll count1=0;
        ll count2=0;
        for(int i=0;i<size;i++){
            if(s[i]=='E'){
                count1++;

            }
            else if( s[i]=='N'){
                count2++;
            }
            ll ans=0;
            ans=abs(count1-count2);
            if(ans%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

}