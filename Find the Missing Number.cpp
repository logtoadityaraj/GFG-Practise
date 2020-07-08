#include <iostream>
using namespace std;

int main() {
	int t,n,i,sum,p,q;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    p=0;
	    q=0;
	    for(i=1;i<n;i++){
	        cin>>a[i];
	        p=p^a[i];
	   
	        
	    }    
	    for(i=1;i<=n;i++){
	        q=q^i;
	   
	        
	    }    
	    cout<<(p^q)<<endl;
	    
	}
}
