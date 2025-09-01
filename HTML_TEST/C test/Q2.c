#include <stdio.h>
int main(){
  int units;
  
  scanf("%d",&units);

  int bill=0;

  if (units>=0 && units<=50 ) {
        bill = units * 2;
    } else if (units>=51 && units<=100 ) {
        bill = 50 * 2 + (units - 50) * 3;
    } else if (units>=101 && units<=200) {
        bill = 50 * 2 + 50 * 3 + (units - 100) * 4;
    } else if (units>=201 && units<=300) {
        bill = 50 * 2 + 50 * 3 + 100 * 4 + (units - 200) * 5;
    } else if (units>=301 && units<=500) {
        bill = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + (units - 300) * 6;
    } else {
        bill = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + 200 * 6 + (units - 500) * 8;
    }

    bill=bill+100;

  printf("Total Bill %d",bill);

  return 0;
}