#include<stdio.h>
int main()
{
    int roll_no;
    float mark1,mark2,mark3,percentage=0,total=0;
    printf("Enter the roll number of the student:");
    scanf("%d",&roll_no);
    printf("Enter the mark of three subjects:");
    scanf("%f%f%f",&mark1,&mark2,&mark3);
    total=mark1+mark2+mark3;
    percentage=(total/300)*100;
    printf("The roll number of the studen is %d\n",roll_no);
    printf("The total mark of the three subjects is %f\n",total);
    printf("The percentage of three subjects is  %f\n",percentage);
    if(percentage>=75)
    {
        printf("First class with Distinction\n congratulations!!");
    }
    else if(percentage>=60&&percentage<75)
    {
        printf("First class\n Congratulations!!");
    }
    else
    {
        printf("Second class");
    }
return 0;
}
