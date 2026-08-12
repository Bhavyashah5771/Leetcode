bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    if(1073741824%n==0) return true;
    return false;
}