//create a structure to store vector. Then make a funtion to return sum of 2 vectors.

#include<stdio.h>

//structure to store vector
typedef struct vector{
    int i;
    int j;
}vector;

int sumi(vector n,vector m);


int main(){
    vector n;
    vector m;
    printf("Enter i(1): ");
    scanf("%d",&n.i);
    printf("Enter j(1): ");
    scanf("%d",&n.j);
    printf("Enter i(2): ");
    scanf("%d",&m.i);
    printf("Enter j(2): ");
    scanf("%d",&m.j);

    sumi(n,m);

}

//function definition
int sumi(vector n,vector m){
    int sum_i = n.i+m.i;
    int sum_j = n.j+m.j;
    printf("%di + %di = %d\n",n.i,m.i,sum_i);
    printf("%dj + %dj = %d\n",n.j,m.j,sum_j);
}
