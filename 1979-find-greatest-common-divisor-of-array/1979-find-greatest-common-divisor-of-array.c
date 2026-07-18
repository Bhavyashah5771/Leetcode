int gcd(int a,int b){
    while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
    }
    return a;
}
int findGCD(int* nums, int numsSize) {
    int max=0,min=1001;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
    }

    return gcd(max,min);
}