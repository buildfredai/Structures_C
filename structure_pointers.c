#include<stdio.h>

struct student
{
    int roll;
    int cgpa;
};

void update(struct student *s){
    s->roll = 95;
}

void changevalue(int *roll){
    *roll = 85;
}

int main(){
    struct student s1;
    s1.roll = 34;
    struct student *ptr = &s1;
    
    printf("Initial Roll = %d\n",s1.roll);
    changevalue((&s1.roll));
    printf("Changed roll number = %d\n",s1.roll);
    update((&s1));
    printf("Changed roll number = %d\n",s1.roll);
    printf("(*ptr).roll = %d\n",(*ptr).roll);
    printf("ptr->roll = %d\n",ptr->roll);
}
