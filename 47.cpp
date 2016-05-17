#include <stdio.h>
#include <string.h>
int next_num(int x)
{
    char s[10];
    int a,b,n;
    sprintf(s,"%d",x);
    n=strlen(s);
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (s[i]>s[j]) {
                char t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    sscanf(s, "%d",&a);
    //printf("%d",a);
    for(int i=0;i<n/2;i++)
    {
        char t = s[i];
        s[i]= s[n-1-i];
        s[n-1-i]= t;
    }
    sscanf(s, "%d",&b);
   // printf("%d",b);

    return b-a;
    
    printf("%d",b-a);

}


int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",x);
  while(x != 6174)
    {
      printf("-->");
      printf("%d",next_num(x));
      x=next_num(x);
    }
  printf("\n");

//sprintf(s,"%d",x); 的目的数将数字x转换成字符串s
//sscanf(s, "%d",&b); 目的是将字符s转换成数字b
}