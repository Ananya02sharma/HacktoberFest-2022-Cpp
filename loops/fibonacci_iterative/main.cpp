#include<bits/stdc++.h>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
   
 vector<int>dp(n+1,0);

       if(n == 0 ) return 0;
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<=n ; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
