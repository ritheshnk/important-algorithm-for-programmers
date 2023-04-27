#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={10,20,30,40},i;
    int ele;
    printf("the array elements are: \n");
    for( i=0; i<5;i++){
        printf("%d",a[i]);
    }

    printf("\nenter the element you want to search: ");
    scanf("%d",&ele);

    for( i=0; i<5;i++){
        if(a[i]==ele){
            printf("\nthe element is found in a[%d] location ",i);
        }else{
            printf("\nnot found");
        }
    }
}