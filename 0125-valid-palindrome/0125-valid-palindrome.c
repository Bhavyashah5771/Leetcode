#include<ctype.h>
#include<string.h>
#include<stdlib.h>
bool isPalindrome(char* s) {
    int i=0,j=0,len=strlen(s);
    bool an=true;

    char *ans=malloc((len+1)*sizeof(char));

    for(i=0;i<len;i++){
        s[i]=tolower(s[i]);
        if(isalnum(s[i])){
            ans[j++]=s[i];
        }
    }
    ans[j]='\0';

    len=strlen(ans);
    int l=0,r=len-1;

    while(l<r){
        if(ans[l++]==ans[r--]){
            an=true;
        }
        else{
            an=false;
            break;
        }

    }
    free(ans);
    return an;
}