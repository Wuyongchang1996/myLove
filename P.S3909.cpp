#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n,i,l;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        
        gets(s);
        if(s[0]=='A'&&s[1]=='C')
        printf("Accepted\n");
        if(s[0]=='P'&&s[1]=='E')
        printf("Presentation Error\n");
        if(s[0]=='W'&&s[1]=='A')
        printf("Wrong Answer\n");
        if(s[0]=='R'&&s[1]=='E')
        printf("Runtime Error\n");
        if(s[0]=='T'&&s[1]=='L'&&s[2]=='E')
        printf("Time Limit Exceeded\n");
        if(s[0]=='M'&&s[1]=='L'&&s[2]=='E')
        printf("Memory Limit Exceeded\n");
        if(s[0]=='O'&&s[1]=='L'&&s[2]=='E')
        printf("Output Limit Exceeded\n");
        if(s[0]=='C'&&s[1]=='E')
        printf("Compilation Error\n");
        
    }
}
