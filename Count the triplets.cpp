//Method 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,j,count,s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            
        }
        count=0;
        s=0;
        sort(a,a+n);
        
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                
                s=a[i]+a[j];
                if(binary_search(a+j+1, a + n, s)){
                    count++;
                }
                s=0;
            }
        }
        if(count!=0)
        cout<<count<<endl;
        else
        cout<<"-1"<<endl;
        
        
    }
}

// Method 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,j,k,count;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            
        }
        count=0;
        sort(a,a+n);
        
        for(i=n-1;i>=0;i--){
                k=i-1;
                j=0;
                while(j<k){
                    if(a[i]==a[j]+a[k]){
                        count++;
                        k--;
                        j++;
                    }
                    else if(a[i]>a[j]+a[k]){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
            if(count!=0)
            cout<<count<<endl;
            else
            cout<<"-1"<<endl;
        }
}
