#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int knapsack(int *wt,int *val,int n,int W){
			for (int i=0;i<=n;i++){
			for (int j=0;j<=W;j++){
                if (i==0 || j==0){
                	dp[i][j]=0;
                }
				else if (wt[i-1]<=j){
					dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
				}
			 
			    else{
			    	dp[i][j]=dp[i-1][j];
			    }
			}
			}
			return dp[n][W];
		}

	

	int main()
	{    
		
		int val[]={60,100,120};
		int wt[]={10,20,30};
		int W=50;
		
		cout<<knapsack(wt,val,3,W);


	return 0;
	}
