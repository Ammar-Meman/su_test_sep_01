#include <stdio.h>
int main(){
  int num,reverse;
scanf("%d",&num);

reverse=0;
int temp = num;
for (;temp>0;temp=temp/10){
  reverse=reverse*10 + (temp%10);
}
printf("%d is reverse of %d\n",reverse,num);
if(reverse==num){
  printf("%d is palindrome",reverse);
}
else{
  printf("%d is not palidrome",reverse);
}
}