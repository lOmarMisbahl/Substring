#include <stdio.h>
#include <string.h>
int substring(char s1[],char s2[]){
    printf("Enter First String : ");
    getchar();
    gets(s1);
    printf("Enter Second String : ");
    getchar();
    gets(s2);
    char *p1,*p2,*p3;
    int i=0,j=0,ans=0;
    p1=s1;
    p2=s2;
    for(i=0;i<strlen(s1);i++)
    {
        if(*p1==*p2)
        {
            p3=p1;
            for(j=0;j<strlen(s2);j++)
            {
                if(*p3==*p2)
                {
                    p3++;
                    p2++;
                }
                else
                    break;
            }
            p2=s2;
            if(j==strlen(s2))
            {
                return 1;
            }
        }
        p1++;
    }
    return 0;
}

int main()
{
    int i;
    int j;
    do{
    printf("Enter First String Size : ");
    scanf("%d",&i);
    printf("Enter Second String Size : ");
    scanf("%d",&j);
    if(i<=0||j<=0)
        printf("Please Enter A Valid Stings Size (1-->n)\n");
    }while(i<=0||j<=0);
    char iStr[i];
    char jStr[j];
    int Answer;
    Answer=substring(iStr,jStr);
    if (Answer==0)
        printf("Second String isn't a Substring from First String");
    else if (Answer==1)
        printf("Second String is a Substring from First String");
    return 0;
}
