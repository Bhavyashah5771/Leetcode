#include<string.h>
#include<stdlib.h>
char* convert(char* s, int numRows) {
    if(numRows==1){
            return s;
    }

    char **rows=malloc(numRows*sizeof(char *));

    int i=0,cr=0,len=strlen(s);

    int *pos=malloc(numRows*sizeof(int));

    char dir='d';

    for(i=0;i<numRows;i++){
        rows[i]=malloc((len+1)*sizeof(char));
        pos[i]=0;
    }

    for(i=0;i<len;i++){
        
        rows[cr][pos[cr]]=s[i];
        pos[cr]+=1;

        
        if(cr==numRows-1){
            dir='u';
        }
        
        if(cr==0){
            dir='d';
        }

        if(dir=='d'){
            cr++;
        }
        else{
            cr--;
        }
    }

    char *ans=malloc((len+1)*sizeof(char));
    ans[0]='\0';
    for(i=0;i<numRows;i++){
        rows[i][pos[i]]='\0';
        strcat(ans,rows[i]);
    }

    return ans;
}