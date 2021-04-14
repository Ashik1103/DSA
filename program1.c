/*
__EXPEREMENT 01__
Design, Develop and Implement a menu driven program in C for the following Array operations
a. Creating Array of N Integer elements.
b. Display of Array elements with suitable headings.
c. Inserting an element (ELEM) at a given valid position (POS).
d. Deleting an element at a given valid position (POS).
e. Exit.
ALGORITHM:
Step 1: Start.
Step 2: read N value.
Step 3: read array of N integer elements.
Step 4: print array of N integer elements.
Step 5: insert an element at given position in an array.
step 6: delete an element at given position from an array.
Step 7: stop. 
*/



#include<stdio.h>
#include<stdlib.h>

int n,i;

void create(){
    int a;
printf("how many elements you want to enter?");
scanf("%d",&n);

for(i=0;i<n;i++)
printf("\n the n value is %d \n",n);
printf("\n the i value is %d", i);
// scanf("\n %d \n",&a);
}

void display(){

}

void insert(){

}

void delete(){

}




void main(){
int ch;
    while(1){
        printf("1. Create \n");
        printf("2. Display \n");
        printf("3. Insert \n");
        printf("4. Delete \n");

        printf("Enter your choice");
        scanf("%d",&ch);

        switch(ch){

        case 1: create();
        break;

        case 2:display();
        break;

        case 3:insert();
        break;

        case 4:delete();
        break;


        }


    }
}