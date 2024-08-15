#include <stdio.h>
void Name(int fung[5]) {
 for (int i = 0; i < 5; i++) {
  printf("%d\n", fung[i]);
 }
}
int main () {
int fung[5] = {1,2,3,4,5};
Name(fung);
return 0;
}
