#include <stdio.h>

main()
{
int day,month,year,sum,leap;
printf("\nplease input year,month,day\n");
scanf("%d,%d,%d",&year,&month,&day);
switch(month)/*先计算某月以前月份的总天数*/
{
　case 1:-Sum=0;break;
　case 2:-Sum=31;break;
　case 3:-Sum=59;break;
　case 4:-Sum=90;break;
　case 5:-Sum=120;break;
　case 6:-Sum=151;break;
　case 7:-Sum=181;break;
　case 8:-Sum=212;break;
　case 9:-Sum=243;break;
　case 10:-Sum=273;break;
　case 11:-Sum=304;break;
　case 12:-Sum=334;break;
　default:-Printf("data error");break;
}
sum=sum+day; 　/*再加上某天的天数*/
　if(year%400==0||(year%4==0&&year%100!=0))/*判断是不是闰年*/
　　leap=1;
　else
　　leap=0;
if(leap==1&&month>2)/*如果是闰年且月份大于2,总天数应该加一天*/
sum++;
printf("It is the %dth day.",sum);}

