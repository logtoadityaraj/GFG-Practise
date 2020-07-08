using namespace std;

int main() {
	int i,sum,t,n,s,index,index_last,flag=0;
	cin>>t;
	while(t--){
	    cin>>n>>sum;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	   }
	   
	   s=0;
	   i=0;
	   index=0;
	   while(i<n){
	       flag=0;
	       if(s<sum)
	       s+=a[i];
	       
	       
	       
	       if(s==sum){
	           index_last = i;
	           cout<<index+1<<" "<<index_last+1<<endl;
	           //if(i==0){
	           //    cout<<index+1<<" "<<index_last+1<<endl;
	           //}
	           flag=1;
	           break;
	       }
	       
	       if(s>sum){
	           
	           s=s-a[index];
	           
	           index++;
	           
	       }
	       
	        if(s<sum){
	            i++;
	        }
	       
	       
	   }
	   
	   if(flag==0){
	       cout<<"-1"<<endl;
	   }
	   
	   
	   
	}
}
