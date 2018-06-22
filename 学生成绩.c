//
//  main.c
//  daiguo

//

#include <stdio.h>
#include<stdlib.h>
struct Student{
    int stu_number;//学号
    char name[20];//姓名
    double score1;//成绩1
    double score2;//成绩2
    double score3;//成绩3
}stu[10];
void student(void);
//
void avg()//输出学生学号，输出学生各科成绩和平均分
{
    system("cls");
    int in_number = 0,t=0;
    printf("Please input number of student:");
    scanf("%d",&in_number);
    for(int i=0;i<10;i++)
    {
        if(stu[i].stu_number==in_number)
        {
            printf("\n Score1:%.1lf \n Score2:%.1lf \n Score3:%.1lf \n Average:%.1lf",stu[i].score1,stu[i].score2,stu[i].score3,(stu[i].score1+stu[i].score2+stu[i].score3)/3);
            break;
        }
        t++;
    }
    if(t==10)
    {
        printf("\n抱歉，没有对应的学号\n");
        printf("按回车键返回主目录");
        getchar();
        getchar();
        student();
       
        
    }
    
   
}
//
void output()
{
    system("cls");
    for(int i=0;i<10;i++)
    {
        
        printf("**********************************************\n");
        printf("*         学生信息           \n");
        printf("*        （1）学号:%d                 \n",stu[i].stu_number);
        printf("*        （2）姓名:%s               \n",stu[i].name);
        printf("*        （3）Score1:%.1lf             \n",stu[i].score1);
        printf("*        （4）Score2:%.1lf                     \n",stu[i].score2);
        printf("*        （5）Score3:%.1lf                    \n",stu[i].score3);
        printf("**********************************************\n");
    }
    printf("按回车键返回主目录");
    getchar();
    getchar();
    student();
}
//
void input(int n)//
{   system("cls");
    for(int i=0;i<n;i++)
    {
        printf("*********请输入第%d位学生的信息，总共有%d位学生*******\n",i+1,n);
        printf("*        （1）学号:");
        scanf("%d",&stu[i].stu_number);
        if(stu[i].stu_number)
        printf("*        （2）姓名:");
         scanf("%s",stu[i].name);
        printf("*        （3）Score1:");
         scanf("%lf",&stu[i].score1);
        printf("*        （4）Score2:");
         scanf("%lf",&stu[i].score2);
        printf("*        （5）Score3:");
         scanf("%lf",&stu[i].score3);
        printf("************************************************\n");
    }
    printf("按回车键返回主目录");
    getchar();
    getchar();
    student();
}

//
void max()
{
    system("cls");
    int t=stu[0].score1+stu[0].score3+stu[0].score2,number_max=-1;
    for(int i=0;i<10;i++)
    {
        if(t<(stu[i].score1+stu[i].score3+stu[i].score2))
           {
               t=(stu[i].score1+stu[i].score3+stu[i].score2);
               number_max=i;
           }
    }
    
    printf("**********************************************\n");
    printf("*         最高分学生信息           \n");
    printf("*        （1）学号:%d                 \n",stu[number_max].stu_number);
    printf("*        （2）姓名:%s               \n",stu[number_max].name);
    printf("*        （3）Score1:%.1lf             \n",stu[number_max].score1);
    printf("*        （4）Score2:%.1lf                     \n",stu[number_max].score2);
    printf("*        （5）Score3:%.1lf                    \n",stu[number_max].score3);
    printf("*        （5）总分:%.1lf                   \n",stu[number_max].score1+stu[number_max].score3+stu[number_max].score2);
    printf("**********************************************\n");
    printf("按回车键返回主目录");
    getchar();
    getchar();
    student();
    
}

//
void sort()
{
    system("cls");
    double all[10];
    for(int k=0;k<10;k++)
    {
        all[k] =stu[k].score1+stu[k].score3+stu[k].score2;
    }
    int i,j;
    struct Student t;
    
    //冒泡排序
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if((stu[j].score1+stu[j].score3+stu[j].score2)<(stu[j+1].score1+stu[j+1].score3+stu[j+1].score2))
            {
                t=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=t;
                //
                
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("***********************************************\n");
        printf("*         总分排序第%d的学生信息           \n",i+1);
        printf("*        （1）学号:%d                 \n",stu[i].stu_number);
        printf("*        （2）姓名:%s               \n",stu[i].name);
        printf("*        （3）Score1:%.1lf             \n",stu[i].score1);
        printf("*        （4）Score2:%.1lf                     \n",stu[i].score2);
        printf("*        （5）Score3:%.1lf                    \n",stu[i].score3);
        printf("**********************************************\n");
    }
    printf("按回车键返回主目录");
    getchar();
    getchar();
    student();
}



int main(int argc, const char * argv[])
{
    student();
    
    return 0;
}
void student()
{
    system("cls");
    int x;
    printf("********************************************************************\n");
    printf("*         请输入序号执行对应的操作                                      *\n");
    printf("*        （1）根据学生人数，逐个输入学生的学号，姓名和3门成绩                *    \n");
    printf("*        （2）输出所有学生的信息                                        *\n");
    printf("*        （3）输入学生学号，输出学生的各科成绩和平均分。                    *\n");
    printf("*        （4）根据每个学生的成绩，从高到低排序并输出                       *\n");
    printf("*        （5）输出总分最高分的学生的信息                                 *\n");
    printf("********************************************************************\n");
    scanf("%d",&x);
    if(x==1)
    {
        input(10);
    }
    else if(x==2)
    {
        output();
    }
    else if(x==3)
    {
        avg();
    }
    else if(x==4)
    {
        sort();
    }
    else if(x==5)
    {
        max();
    }
    else{
        
    }
    
}

