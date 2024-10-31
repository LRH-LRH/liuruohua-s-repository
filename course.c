/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    if(str[0]=='\0'){
        printf("你输入的是空串！");
    }
    else{
        printf("你输入的是：%s",str);
    }
    return 0;
}*/
/*#include<stdio.h>
错误例子int main(){
int a[7];
scanf("%d %d %d %d %d %d %d",a);
char b=45;
printf("%d%c%d ",a[1]-a[0],b,a[2]-a[1]);
printf("%d%c%d ",a[3]-a[2],b,a[4]-a[3]);
printf("%d%c%d ",a[5]-a[4],b,a[6]-a[5]);
   return 0;
}*/
/*#include<stdio.h>
int main(){
int a;
printf("姑娘对我的好感度：");
scanf("%d",&a);
if(a>=60){
    printf("我就去表白");
}
else{
    printf("我就去表白别的姑娘");
}
}*/
/*#include<stdio.h>
int main(){
    /*int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("我坐第%d排第%d座",a,b);
    printf("小诗坐第%d排第%d座",c,d);
    if(a==c&&(b==d+1||b==d-1)){
        printf("我会很开兴的看电影");
    }
    else {
        printf("我会很开心的打游戏");
    }
}*/
/*int i,sum=0;
for(i=1;i<=5;i++){
    sum+=i;
}
printf("%d",sum);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main (){
    char str[100];
    printf("请输入一个字符串：");
    scanf("%s",str);
    int length=strlen(str);
    char max=str[0];
    for(int i=1;i<length;i++){
        if(str[i]>max){
            max=str[i];
        }
        printf("ASCII码中最大的字符为：%c",max);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
char str[100];//假设输入的字符串长度不会超过99
printf("请输入一个字符串：");
fgets(str,sizeof(str),stdin);
char max=0;
for(int i=0;str[i]=='\0';i++){
    if(str[i]>max){
        max=str[i];
    }printf("ASCII最大的字符为：%c\n", max);
}

return 0;
}
