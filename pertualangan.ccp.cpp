#include <stdio.h>
#include <stdlib.h>
#define MAXSTACK 7

typedef struct{
int item[MAXSTACK];
int count;
}Stack;
Stack tumpukan;

int isFull(Stack *x){
    int hasil=0;
    if((x->count)>=MAXSTACK)
        hasil=1;
return hasil;
}

int isEmpty(Stack *x){
    int hasil=0;
    if((x->count)==0){
        hasil=1;
    }
    return hasil;
}

void membuatStack(Stack *x){
x->count=0;
}

void push(int data,Stack *x){
    if (isFull(x)==1){
        printf("stack penuh\n");
    }else{
        x->item[x->count]=data;
        ++(x->count);
    }
}

void cetak(){
  for (int i=0;i<MAXSTACK;i++){
    printf("isi index %d %d \n", i, tumpukan.item[i]);
    }
}

int main()
{
    membuatStack(&tumpukan);
    push(13,&tumpukan);
    printf("masukan 13\n");
    push(11,&tumpukan);
    printf("masukan 11n");
    push(9,&tumpukan);
    printf("masukan 9\n");
    push(7,&tumpukan);
    printf("masukan 7\n");
    push(5,&tumpukan);
    printf("masukan 5\n");
    push(3,&tumpukan);
    printf("masukan 3\n");
    push(1,&tumpukan);
    printf("masukan 1\n");

    cetak();


}
