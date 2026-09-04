# include <stdio.h>
int main (){
    char str[100];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    int flag=0;
    char non_rep;
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        int count=0;
        for(int j=0;str[j]!='\0'&&str[j]!='\n';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
            if(count==1){
            non_rep=str[i];
                flag=1;
                break;
            }
        
    }
    if(flag==1){
    printf("first non repeating char : %c",non_rep);
}
else{
    printf("all char is repeted");
}

    return 0;


}