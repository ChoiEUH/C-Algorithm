#include <stdio.h>
int event;
void callback()
{

	printf("interrupt");
}

void system(void(*fp)()){
scanf("%d",&event);
if(event == 1){
	fp();
 }
}


int main()
{
	system(callback);
}
