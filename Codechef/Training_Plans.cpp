#include <iostream>
#include<bits/stdc++.h>
#define llint long long int 
#define io ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ve vector<long long int>
#define vp vector<pair<long long int,long long int>>
#define ff first
#define ss second
#define mp make_pair
#define input for(i=0;i<n;i++){cin>>x;v.push_back(x);}
#define inputa for(i=0;i<n;i++){cin>>x;a.push_back(x);}
#define inputb for(i=0;i<n;i++){cin>>x;b.push_back(x);}
#define input_sum for(i=0;i<n;i++){cin>>x;v.push_back(x);sum+=x;}
using namespace std;


bool sortbysecdesc(const pair<ll,ll> &a, const pair<ll,ll> &b){
       if(a.first == b.first) return a.second > b.second;
       return a.first < b.first;
}

void aman(){
    llint n, k, i, x, m, answer = 0, j;
    cin>>n;
    vector<llint> a,b;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n;i++){
        cin>>x;
        b.push_back(x);
    }
    if(n > 1000){   
        vector<pair<llint,llint>> p;
        for(llint i = 0 ; i < n ; i++){
            p.push_back({b[i],a[i]});
        }
        priority_queue<double> pq;
        sort(p.begin(),p.end(),sortbysecdesc);
         
        double ans = 0, sum = 0, cnt = 0, temp;
        for(llint i = 0 ; i < n ;){
            j = i;
            while(j<n && p[j].ff <= cnt){
                pq.push(p[j].second);
                j++;        
            }
            if(!pq.empty()){
                temp = pq.top();
                ans += temp;
                sum = max((double)ans/cnt,sum);
                cnt++;
                pq.pop();
            }
            else{
                answer = sum;
                break;
            }
            i = j;
        }
        answer = sum;
    }
    else{
        unordered_map<llint,llint> m;
        priority_queue<llint> q;
        for(int i=0;i<n;i++){
            if(b[i]==0) q.push(a[i]);
            b[i]--;
        }
        double ans = 0, k=1, sum=0;
        while(!q.empty()){
            int x =q.top();
            q.pop();
                sum+=x;
                ans=max(ans,sum/k);
                k++;
            for(int i=0;i<n;i++){
                if(b[i]==0) q.push(a[i]);
                b[i]--;
            }
        }
        answer = ans;
    }

}
 
int main()
{
   io;
   llint t;
   cin >> t;
    while(t--){
        aman();
    }
   
   return 0;
}