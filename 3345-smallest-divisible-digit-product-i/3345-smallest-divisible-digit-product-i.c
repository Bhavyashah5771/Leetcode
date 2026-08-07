int smallestNumber(int n, int t) {
    int mul=1,temp=0,rem=0,ans=0;
    for(int i=n;i<=n+10;i++){
        temp=i;
        mul=1;
        while(temp!=0){
            rem=temp%10;
            mul*=rem;
            temp=temp/10;
        }
        if(mul%t==0){
            ans=i;
            break;
        }
    }
    return ans;
}