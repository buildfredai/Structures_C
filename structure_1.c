#include<stdio.h>
#include<string.h>

//structure definition
struct student
{
    char *name;
    long long int registration_number;/* data */
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Krishna");
    s1.registration_number = 25151144023;
    s1.cgpa = 9.8;

    printf("Name = %s\n",s1.name);
    printf("Registration Number = %lld.\n",s1.registration_number);
    printf("CGPA = %.2f.\n",s1.cgpa);
    return 0;
}