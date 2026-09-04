# include <stdio.h>
int main(){
    char str[20];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    int vowel=0;
    int conconent=0;
    int digit=0;
    int special_char=0;
    int count=0;
    while(str[count]!='\0'){
        if(str[count]=='a'||str[count]=='e'||str[count]=='i'||str[count]=='o'||str[count]=='u'||str[count]=='A'||str[count]=='E'||str[count]=='I'||str[count]=='O'||str[count]=='U'){
            vowel++;

        }
        else if(str[count]>='a'&& str[count]<='z'||str[count]>='A'&& str[count]<='Z'){
          conconent++;
        }
        else if (str[count]>='0'&&str[count]<='9'){
            digit++;
        }
        else if(str[count]!='\n'){
            special_char++;
        }
        count++;
    }
    printf("no of vowel : %d\n",vowel);
    printf("no of conconent : %d\n",conconent);
    printf("no ofdigit : %d\n",digit);
    printf("no of special char : %d\n",special_char);
    return 0;
   

}