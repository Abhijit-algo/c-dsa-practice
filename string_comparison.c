# include <stdio.h>
int main(){
    char a[100];
    char b[100];
int flag=1;
    printf("enter string a : ");
    fgets(a,sizeof(a),stdin);

        printf("enter string b: ");
            fgets(b,sizeof(b),stdin);
            for(int i=0;a[i]!='\0'&& a[i]!='\n';i++){
                
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
            }
          
            if(flag==0){
                printf("two sring are not  same");

            }
            else{
                printf("two string are  same ");
            }

    return 0;

}