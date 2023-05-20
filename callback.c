#include <stdio.h>
int event;
void callback()
{
	printf("interrupt");
}


void system(void(*fp)()){
	scanf("%d",&event);
	while(event <= 5){
	printf("%d\n", event);
	scanf("%d",&event);
}
fp();
}



int main()
{
	system(callback);
}
