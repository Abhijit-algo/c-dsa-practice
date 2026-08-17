# include <stdio.h>
int main(){
    char str[100];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    int max_freq=0;
    char max_char=' ';
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        int count=0;
        for(int j=0;str[j]!='\0' && str[j]!='\n';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
            if(count>max_freq){
                max_freq=count;
                max_char=str[i];

            }
        }
     printf("most frecuent char : %c",max_char);
    printf("no of freq in char : %d\n",max_freq);
  
    return 0;
}