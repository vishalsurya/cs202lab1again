#include "types.h"
#include "user.h"
#include "stat.h"
int main(int argc, char *argv[]){
int i,j;
if(stride(100)==0)
sleep(5);
const int loop=43000;
for(i=0;i<loop;i++){
asm("nop");
for(j=0;j<loop;j++)
asm("nop");
}
printf(1,"Program 1 end \n");
exit();
}
