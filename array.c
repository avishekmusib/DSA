#include<stdio.h>
int main(){
int a[50],size,i,num,pos;
printf("enter array of size:");
scanf("%d",&size);
printf("enter element of array:");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
//traveal
// printf("element of array are:");
// for(i=0;i<size;i++){
//     printf("%d",a[i]);
//insertion
// printf("enter data you want to insert");
// scanf("%d",&num);
// printf("enter position:");
// scanf("%d",&pos);
// if(pos<=0||pos>size+1){
// printf("invalid postion");
// }
// else{
// for(i=size-1;i>pos-1;i--){
// a[i+1]=a[i];
// }
// a[pos-1]=num;
// size++;
// printf("element of array are:  ");
// for(i=0;i<size;i++){
//     printf("%d", a[i]);
// }
// }
//deletion
printf("from what position you wany to delete\n");
scanf("%d",&pos);
if(pos<=0||pos>size){
    printf("invalid position");
}
else{
    for(i=pos-1;i<size;i++){
        a[i]=a[i+1];
    }
    size--;
 printf("element of array are:\n");
 for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}
}
}