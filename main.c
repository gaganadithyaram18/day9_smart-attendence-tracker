#include<stdio.h>
int main()
{
    int student,eligible_count=0,not_elegible,day;
    float total_percentage,percentage,avg_attendence;

    printf("enter no of student :");
    scanf("%d",&student);

    for(int i=1;i<=student;i++)
    {
     printf("enter attendence for student %d(out of 30 days):\n",i);
     scanf("%d",&day);
     percentage=(day/30.0)*100;
     total_percentage+=percentage;
     printf("student %d percentage is %f ",i,percentage);
    percentage>=75? (printf("eligible\n",eligible_count++)):(printf("not elegible\n",not_elegible++));//use of terinary operators to  reduce code length
    avg_attendence=total_percentage/student;
    }
    printf("class summary\n");
    printf("total students:%d\n",student);
    printf("eligible students:%d\n",eligible_count);
    printf("not eligible students:%d\n",not_elegible);
    printf("average attendence%f\n",avg_attendence);
    return 0;
    
}