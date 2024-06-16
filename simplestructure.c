#include<stdio.h>
#include<conio.h>
struct studentdata 
{
    char*stu_name;
    int stu_id;
    int stu_age;
};
int main()
{
    struct studentdata student;
    student.stu_name="steve";
    student.stu_id=1234;
    student.stu_age=30;
    printf("student name is:%s",student.stu_name);
    printf("student id is:%d",student.stu_id);
    printf("student age is:%d",student.stu_age);
    getch();
    return 0;
}
