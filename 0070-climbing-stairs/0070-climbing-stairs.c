int climbStairs(int n) {
    int ans=0,f1=0,f2=1;

    for(int i=0;i<n;i++){
        ans=f1+f2;
        f1=f2;
        f2=ans;
    }

    return ans;
}