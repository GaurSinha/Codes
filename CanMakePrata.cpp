#include <iostream>
using namespace std;

bool canPlace(int * c, int mid, int n, int p){
	int k=0;
	int cnt=0;
    int s=1;
	for(int i=0;i<n;i++){
	     k=0;
		while(k+(c[i]*(s))<=mid){
			k=k+(c[i]*(s));
			cnt++;
			s++;
           cout<<" K:"<<k<<"\n";
		}
        s=1;
       if(cnt>=p)
		return true;
			
	}
	
	
		
	return false;
}

int main() {
	
	    int p,n;
		cin>>p>>n;
		int c[100];
		for(int i=0;i<n;i++)
		cin>>c[i];

		int s=0;
		int e=55;
       int ans=0;
		while(s<=e){
			int mid=(s+e)/2;
			cout<<mid<<"\n";
			if(canPlace(c,mid,n,p))
			{e=mid-1;
             ans=mid;
            }
			else{
			s=mid+1;
            }
		}
		cout<<ans<<endl;
	
	return 0;
}
