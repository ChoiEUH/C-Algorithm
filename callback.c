#include <stdio.h>
int event;
void callback()
{
if(scanf_s("%d/n")){

	printf("interrupt");
}
}

void handler(void(*fp)()){
	fp();
}


int main()
{
	handler(callback);
}
