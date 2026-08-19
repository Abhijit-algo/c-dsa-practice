# include <stdio.h>
# include <string.h>
int main(){
char a[100];
char b[100];
int flag=1;
printf("enter first string :  ");
fgets(a,sizeof(a),stdin);
printf("enter second string :  ");
fgets(b,sizeof(b),stdin);
int lenght1=strlen(a);
int lenght2=strlen(b);
if(a[lenght1-1]=='\n'){
    lenght1--;
}
if(b[lenght2-1]=='\n'){
    lenght2--;
}
if(lenght1!=lenght2){
    printf("string are not same");
}
else{
    int i=0;
    while(a[i]!='\0'&& a[i]!='\n'&& b[i]!='\0'&&b[i]!='\n'){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
        i++;
    }
    if(flag==0){
    printf("string are no same");
    }
    else{
        printf("string are same");
    }
}
   return 0;
}