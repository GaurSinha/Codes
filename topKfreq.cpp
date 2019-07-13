#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> ppi;

struct Compare{
   ppi a;
   ppi b;
    
    bool operator()(ppi a, ppi b){
        if(a.second=b.second){
            return a.first<b.first;
        } 
            return a.second>b.second;
    }
    
};

set<ppi,Compare> pq;
void print(set<ppi,Compare> & pq){
    for(auto x : pq)
    cout<<x.first<<" "<<endl;
}



int main() {
    int n;
    cin>>n;
    unsigned int k;
    cin>>k;
    int ip[n];
    for(int i=0;i<n;i++)
    cin>>ip[i];
    int freq[100]={0};
   
    for(int i=0;i<n;i++){
    ppi data = make_pair(ip[i],freq[ip[i]]);
    freq[ip[i]]++;
    if(pq.size()<k){
    pq.insert(data);
    print(pq);
}
else if(pq.size()==k){
    ppi max_ele = *pq.rbegin();
    if(max_ele.first>data.first){
    pq.erase(max_ele);
    pq.insert(data);
    print(pq);
    }
    else if()
    else{
        print(pq);
		print("hello");
    }
        }
    
   
    }


    

	return 0;
}
