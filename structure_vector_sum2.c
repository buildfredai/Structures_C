//create a structure to store vector. Then make a funtion to return sum of 2 vectors.

#include<stdio.h>

//structure to store vector
typedef struct vector{
    int n;
    int m;
}vector;

int sumi(vector n,vector m);


int main(){
    vector n={52,56};
    vector m={85,95};

    sumi(n,m);

}

//function definition
int sumi(vector n,vector m){
    int sum_i = n.n+m.n;
    int sum_j = n.m+m.m;
    printf("%di + %di = %d\n",n.n,m.n,sum_i);
    printf("%dj + %dj = %d\n",n.m,m.m,sum_j);
}
