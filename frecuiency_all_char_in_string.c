# include <stdio.h>
int main(){
    char str[20];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
  
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
        int count=0;
    int already_count=0;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                already_count=1;
                break;
            }
        }
        if(already_count==1){
            continue;
        }
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
    
    printf("frecuiency of a character %c=%d\n",str[i],count);
    }
    return 0;
}