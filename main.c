/*#include <stdio.h>
#include <string.h>
int main (){
char input[100];
FILE*fp;
printf("请输入字符串：");
fgets(input,sizeof(input) ,stdin);
input[strcspn(input,"\n")]='\0';
fp=fopen("output.txt","w");
if(fp==NULL){
    printf("无法打开文件！\n");
    return 1;
}
for(int i=0;i<strlen(input);i++){
    fprintf(fp,"%c\n",input[i]);
}
fclose(fp);
return 0;

}*/
/*#include <stdio.h>
#include <string.h>
int main(){
printf("请输入一个字符串：");
 char str[100];
 fgets(str,sizeof(str),stdin);
 str[strcspn(str,"\n")]='\0';
 if(strlen(str)==0){
    printf("空串");
 }
 else{
    printf("%s\n",str);
 }
return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
/*#define N 5
int main(){
   char stuid[10],name[20];
   float score;
   FILE*outfile;
   int i;
   outfile=fopen("scores.txt","w");
   if(outfile==NULL){
    printf("不能创建文件！");
    exit(0);
   }
   fprintf(outfile,"学号\t姓名\t入学成绩\n");
   scanf("%s%s%f",stuid,name,&score);
   fprintf(outfile,"%s\t%s\t%f\n",stuid,name,score);
   fclose(outfile);
   return 0;
}
int main() {
   FILE *fp;
   char ch;
   fp = fopen("scores.txt","r");//打开文件
   if(fp==NULL){
    perror("Error opening file");
    return(-1);
   }
   while((ch=fgetc(fp))!=EOF){//用while循环和fgetc函数逐个字符读取文件内容
    putchar(ch);
   }
   fclose(fp);//关闭文件
   return 0;
}
#include<stdio.h>
int main (){
    int height=8844430;
    double paper=0.1;
    int count=0;
    while(paper<=height){
        paper=paper*2;
        count++;
    }
    printf("%d\n",count);
    return 0;
    }*/
/*#include<stdio.h>
int main(){
int num1,num2;
int ge,shi,bai;
scanf ("%d",&num1);
ge=num1%10;
shi=num1/10%10;
bai=num1/10/10;
num2=ge*100+shi*10+bai*1;
int ge2,shi2,bai2;//此处可以直接通过判断个位和百位是否相等来判断是不是回文数！
ge2=num2%10;
shi2=num2/10%10;
bai2=num2/10/10;*/
/*if(num1==num2){
printf("该数字是回文数");
}
else{
    printf("该数字不是回文数");
}
return 0;
}*/
#include <stdio.h>


int main()
{
   /*double a=3.1415926535898;
   unsigned char ch;
    for(ch=32;ch<=127;ch++)
        printf("ASCII码:%d,字符:%c\n",ch,ch);
    return 0;
    printf("a=%g,a=%8.4g\n",a,a);
    printf("a=%9.8g,a=%7.6g\n",a,a);*/
    char c1,c2;
    printf("请输入一个字母:");
    c1=getchar();

    printf("请再输入一个字母:");
    c2=getchar();
    printf("第一个字符:%c,ASCII码:%d\n",c1,c1);
    printf("第二个字符:%c,ASCII码:%d\n",c2,c2);
    return 0;
}







