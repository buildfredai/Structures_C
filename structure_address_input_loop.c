#include<stdio.h>

typedef struct address{
    char house_number[100];
    int ward;
    char city[100];
    char state[100];
}address;

void print(address *s);

int main(){
    address s[5];
    for(int i=0;i<5;i++){
        printf("Enter address of User %d\n",i+1);
        printf("House Number: ");
        scanf("%s",s[i].house_number);
        printf("Ward: ");
        scanf("%d",&s[i].ward);
        printf("City: ");
        scanf("%s",s[i].city);
        printf("State: ");
        scanf("%s",s[i].state);
    }

    printf("-----------START-------------\n");

    for(int i = 0 ; i<5 ;i++){
        printf("User %d address.\n",i+1);
        print(&s[i]);
        printf("-----------------------------\n");
    }

    printf("------------END-------------\n");
}

void print(address *s){
    printf("%s,%d,%s,%s\n",s->house_number,s->ward,s->city,s->state);
}