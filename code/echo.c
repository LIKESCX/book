#include <stdio.h>
#include <limits.h>
void trystat(void);

int main(void)
{
	char* str = "China";
	printf("%p\n",str);
	
	char* arr[3] = {"I","Love","China"};
	//arr[0] = "I";
	//arr[1] = "Love";
	//arr[2] = "China";
	
	printf("%s\n",arr[0]);
    printf("%s\n",arr[1]);
	printf("%s\n",arr[2]);
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
	
	int count;
	for(count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d;\n",count);
		trystat();
	}
    return 0;
}

void trystat(void)
{
	size_t z = sizeof(int);
	printf("z = %d\n",z);
	int fade = 1;
	static int stay = 1;
	printf("fade = %d and stay = %d\n",fade++,stay++);
}
