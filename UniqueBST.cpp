//given n,how many structurally unique BST's(binary search trees) that storr values 1...n?
int numTrees(int n){
	vector<int> dp(n+1,0);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
			dp[i]+=dp[j]*dp[i-j-1];
		}
	}
	return dp[n];
}
