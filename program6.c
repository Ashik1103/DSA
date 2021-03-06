/*
Design, Develop and Implement a menu driven Program in C for the following operations on
Circular QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to Circular QUEUE
b. Delete an Element from Circular QUEUE
c. Demonstrate Overflow and Underflow situations on Circular QUEUE
d. Display the status of Circular QUEUE
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int CQ[SIZE], f = -1, r = -1, i;
int elem;

void CQinsert();
int CQdelete();
int CQempty();
int CQfull();
void display();

void main(){
    int opn;

    do{
        printf("\n--menu--\n");
        printf("\n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
        printf(" Enter option: ");
        scanf("%d", &opn);
        switch(opn){
            case 1: CQinsert();
            break;
            case 2: elem = CQdelete();
                    if(elem != -1){
                        printf("\n Deleted Element is %d \n", elem);
                    }
            break;

            case 3: printf("\n status of Circular Queue \n");
                    display();
            break;

            case 4: exit;
            break;
        }
    }while( opn != 4);
}

void CQinsert(){
    if(CQfull()){
        printf("\n OverFlow!!!");
    }
    else{
        printf("\n Read the element to be inserted: ");
        scanf(" %d", &elem);
        if(f == -1){
            f = 0;
        }
        r = (r+1)%SIZE;
        CQ[r] = elem;
    }
}

int CQdelete(){
    if(CQempty()){
        printf("\n UnderFlow!!!");
        return(-1);
    }
    else{
        elem = CQ[f];
        f = (f+1)%SIZE;
    }
    return(elem);
}

int CQfull(){
    if((f == r+1) || (f == 0 && r == SIZE -1)){
        return 1;
    }
    return 0;
}

int CQempty(){
    if( f == -1 || f == r+1){
        return 1;
    }
    return 0;
}

void display(){
    if(CQempty()){
        printf("\n Empty Queue..");
    }
    else{
        printf("\n Front[%d] -> ", f);
        for(i=f; i != r; i = (i+1)%SIZE){
            printf("%d ", CQ[i]);
        }
        printf("%d ", CQ[i]);
        printf("<- [%d]Rear", r);
    }
}