# include <stdio.h>
# include <string.h>
int main(){
    char str[100];
    printf("enter string: ");
    fgets(str,sizeof(str),stdin);
    int freq[256]={0};
    int left=0;
    int max=0;
    for(int right=0;str[right]!='\0'&& str[right]!='\n';right++){
      
            freq[str[right]]++;
        
        while(freq[str[right]]>1){
            freq[str[left]]--;
            left++;
        }
        int lenght=right-left+1;
        if(max<lenght){
            max=lenght;
        }

        
    }
printf("longest substring without repecting char:%d ",max);
return 0;
}