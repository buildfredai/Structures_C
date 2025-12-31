#include<stdio.h>

typedef struct address{
    char house_number[100];
    int ward;
    char city[100];
    char state[100];
}address;

//function prototype
void print(struct address *s);

int main(){
    address s[5];
    printf("Enter address of User 1.\n");
    printf("House Number: ");
    scanf("%s",s[0].house_number);
    printf("Ward: ");
    scanf("%d",&s[0].ward);
    printf("City: ");
    scanf("%s",s[0].city);
    printf("State: ");
    scanf("%s",s[0].state);
    printf("\n");

    printf("Enter address of User 2.\n");
    printf("House Number: ");
    scanf("%s",s[1].house_number);
    printf("Ward: ");
    scanf("%d",&s[1].ward);
    printf("City: ");
    scanf("%s",s[1].city);
    printf("State: ");
    scanf("%s",s[1].state);
    printf("\n");

    printf("Enter address of user 3.\n");
    printf("House Number: ");
    scanf("%s",s[2].house_number);
    printf("Ward: ");
    scanf("%d",&s[2].ward);
    printf("City: ");
    scanf("%s",s[2].city);
    printf("State: ");
    scanf("%s",s[2].state);
    printf("\n");

    printf("Enter address of User 4.\n");
    printf("House Number: ");
    scanf("%s",s[3].house_number);
    printf("Ward: ");
    scanf("%d",&s[3].ward);
    printf("City: ");
    scanf("%s",s[3].city);
    printf("State: ");
    scanf("%s",s[3].state);
    printf("\n");

    printf("Enter the address of User 5.\n");
    printf("House Number: ");
    scanf("%s",s[4].house_number);
    printf("Ward: ");
    scanf("%d",&s[4].ward);
    printf("City: ");
    scanf("%s",s[4].city);
    printf("State: ");
    scanf("%s",s[4].state);
    printf("\n");

    printf("____________START_______________\n");
    printf("User1 address.\n");
    print(&s[0]);
    printf("__________________________________\n");
    printf("User 2 address.\n");
    print(&s[1]);
    printf("__________________________________\n");
    printf("User 3 address.\n");
    print(&s[2]);
    printf("__________________________________\n");
    printf("User 4 address.\n");
    print(&s[3]);
    printf("__________________________________\n");
    printf("User 5 address.\n");
    print(&s[4]);
    printf("________________END_______________\n");
}

//function definition 

void print(struct address *s){
    printf("%s, %d, %s, %s\n",s->house_number,s->ward,s->city,s->state);
}