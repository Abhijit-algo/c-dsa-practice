# include <stdio.h>
int main(){
    char str[20];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
  
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
         int already_count=0;
        int count=0;
  
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
       
        
    
    if(count>1){
            printf("duplicate char is %c\n",str[i]);
        }
    }
    return 0;
}