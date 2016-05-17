#include <stdio.h>
#include <iostream>
int main()
{
    int n=0;
    int score =0;
    int score_hight = 0;
    int score_low = 101;
    char name [10]={0};
    char name_low [10]={0};
    char name_hight [10]={0};
    char id [10]={0};
    char id_low [10]={0};
    char id_hight [10]={0};
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%s%s%d",name,id,&score);
        if(score > score_hight )
        {    score_hight = score ;
            sprintf(name_hight,"%s",name);
            sprintf(id_hight,"%s",id);
        }
        if(score < score_low )
        {
            score_low = score;
            sprintf(name_low,"%s",name);
            sprintf(id_low,"%s",id);
        }
        
    }

    printf("%s %s\n",name_hight,id_hight);
    printf("%s %s\n",name_low,id_low);

    return 0;

}