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
    ll arr[10001];
    ll brr[10001];
    ll g1,g2,l;
    while(t--){
        ll n;
        cin>>n;
        
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>1){
                l=arr[i];
                g1=i;
            }
        }
        l=INT_MIN;

        for(int i=0;i<n;i++){
            cin>>brr[i];
             if(brr[i]>1){
                l=brr[i];
                g1=i;
            }
        }
        int a1=*max_element(arr,arr+n);
        int a2=*max_element(brr,brr+n);
        if(a1>a2){
            for(int i=0;i<n;i++){
                if(arr[i]<brr[i]){
                    int t=arr[i];
                    arr[i]=brr[i];
                    brr[i]=t;
                }
            }
            cout<<((*max_element(arr,arr+n))*(*max_element(brr,brr+n)))<<endl;
        }
            else if(a1<a2){
            for(int i=0;i<n;i++){
                if(arr[i]>brr[i]){
                    int t=brr[i];
                    brr[i]=arr[i];
                    arr[i]=t;
                }
            }
            cout<<((*max_element(arr,arr+n))*(*max_element(brr,brr+n)))<<endl;
        }
    }
  

}