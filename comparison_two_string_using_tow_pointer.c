# include<stdio.h>
# include <string.h>
int main(){
    int flag=1;
    char str1[100];
    printf("enter firest string : ");
    fgets(str1,sizeof(str1),stdin);
    int lenght1=strlen(str1);
    if(str1[lenght1-1]=='\n'){
        lenght1--;
    }
    char str2[100];
    printf("enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    int lenght2=strlen(str2);
    if(str2[lenght2-1]=='\n'){
        lenght2--;
    }
    if(lenght1!=lenght2){
      printf("string are not same");
        return 0;
    }
    int i=0;
    int j=0;
    while(str1[i]!='\0' && str1[i]!='\n' && str2[j]!='\0' && str2[j]!='\n'){
    if(str1[i]!=str2[j]){
        flag=0;
        break;
    }
    i++;
    j++;
    }
    if(flag==0){
        printf("string are not same ");
    }
    else{
        printf(" two string are same : %s %s",str1,str2);
    }
    return 0;
}