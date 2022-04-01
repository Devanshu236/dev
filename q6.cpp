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
        ll a,b,c;
        cin>>a>>b>>c;
        if( (b-a)== (c-b) || (a==b && b==c)){
            cout<<"YES"<<endl;
        }
        else if( (2*b -a)%c ==0 && (2*b-a >0)){
            cout<<"YES"<<endl;
        }
         else if( (2*b -c)%a ==0 && (2*b-c >0)){
            cout<<"YES"<<endl;
        }
        else if((a+c)%(2*b)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}