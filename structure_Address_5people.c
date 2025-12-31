//Enter address of 5 people (House no., block,city,state)

#include<stdio.h>

//structure definition
typedef struct personalinfo{
    char houseno[100];
    char block[100];
    char city[100];
    char state[100];
}address;

void print(struct personalinfo *s);

int main(){
    address s1 ={"WZ36A","Ganesh Nagar","New delhi","New Delhi"};
    address s2 = {"B32A","Takshila Society","Mumbai","Maharastra"};
    address s3 = {"BH255M","Amarpati Nagar","Kanpur","Uttar Pradesh"};
    address s4 = {"HU25T","Patel Nagar","Kolakata","West Bengal"};
    address s5 = {"GH58J","Shubhash Nagar","New Delhi","New Delhi"};
    print(&s1);
    print(&s2);
    print(&s3);
    print(&s4);
    print(&s5);

}

void print(struct personalinfo *s){
    printf("House number = %s\nblock number = %s\nCity = %d\nState = %d\n",s->houseno,s->block,s->city,s->state);
    printf("\n");
}