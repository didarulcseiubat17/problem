#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int n1=n-1;
long long int A[n1];
for(long long int i=0;i<n1;i++)
{
cin>>A[i];

}
sort(A,A+n1);
for(long long int i=0;i<n1;i++){
if(i+1==A[i]&&i<n1-1){


}

else if (i+1==A[i]&&i==n1-1){
cout<<i+2<<endl;


}
else if (A[i]!=i+1){
cout<<i+1<<endl;
break;


}


}


}


}


###################################################################
//Practice makes me better everytime
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long int n;
		scanf("%ld",&n);
		
		long int sum=0;
		for(long int i=0;i<n-1;i++)
		{
			long int a;
			scanf("%ld",&a);
			sum = sum + a;
		}
		printf("%ld\n",((n)*(n+1))/2 - (sum));
	}
	return 0;
}
//Only thing which survive(s) till end is   ?
//  Pure Hardwork  :)
 
 
 ###########################
    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    #define test(t) int t; scanf("%d", &t); while(t--)
    #define forr(I, a, b) for(int I = a; I < b; I++)
     
    int main(){
    	test(T){
    		vector<int> v;
    		int N;
    		scanf("%d", &N);
    		int k = N - 1;
    		while(k--){
    			int x;
    			scanf("%d", &x);
    			v.push_back(x);
    		}
    		sort(v.begin(), v.end());
    		forr(i, 0, N){
    			if(v[i] != i + 1){
    				printf("%d\n", i + 1);
    				break;
    			if(i == N - 1)
    				printf("%d\n", N - 1);
    		}
    			}
    		
    	}
    } 
                            ##############################################

    #include <iostream>
    #include <algorithm>
    #include <vector>
    #define f(a) for(i=1;i<a;i++)
    #define c(a) cout<<a<<endl
     
    using namespace std;
     
    int main(){
    	int t,inp,n,i;
    	int arr[1001];
    	cin>>t;
    	while(t--){
            for(i=0;i<1001;i++){
                arr[i]=0;
            }
    		cin>>n;
    		f(n){
    			cin>>inp;
    			arr[inp]++;
    		}
    		
    		for(i=1;i<=n;i++){
    			if(arr[i]==0){
    				cout<<i<<endl;
    				break;
    			}
    		}
    	}
    	return 0;	
    } 
