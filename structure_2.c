#include<stdio.h>

struct student 
{
    char name[100];
    long long int registration_number;
    float cgpa;
};

int main(){

    struct student s1 = {"Krishna",25151144023,9.8};

    printf("Name = %s\n",s1.name);
    printf("Registration Number = %lld\n",s1.registration_number);
    printf("CGPA = %.2f\n",s1.cgpa);
}