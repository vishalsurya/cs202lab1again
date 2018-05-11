#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char * argv[]){
int i,j;
if(stride(250)==0)
sleep(5);
const int loop =43000;
for(i=0;i<loop;i++){
asm("nop");
for(j=0;j<loop;j++)
asm("nop");
}
printf(1,"Program 3 end \n");
exit();
}

