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
