#include<stdio.h>

// strcture definition
struct student {
    int marks;
    float cgpa;
    char name[100];
};

//function prototype
void print(int m, float c,char *n);

//function prototype2
void prints(struct student s);

int main(){
    struct student s1 = {95,10.0,"krishna"};
    // print(s1.marks,s1.cgpa,s1.name);
    prints(s1);
    
}
//function definition
void print(int m,float c,char *n){
    printf("Makrks = %d\nCGPA = %.2f\nName = %s\n",m,c,n);
}

void prints(struct student s){
    printf("Name = %s\nMakrs = %d\nCGPA = %.2f\n",s.name,s.marks,s.cgpa);
}
