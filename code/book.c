#include <stdio.h>
#define MAXTITL 41  /*书名的最大长度+1*/
#define MAXAUTL 31  /*结构模板：标记为book*/
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};		/*结构模板结束*/
int main(void)
{
	struct book library;/* 把library声明为book类型的变量 */
	printf("Please enter the book title.\n");
	gets(library.title); /*访问title部分*/
	printf("Now enter the author.\n");
	gets(library.author); 
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author,library.value);
	printf("%s:\"%s\" ($%.2f)\n", library.author, library.title,library.value);
	printf("Done.\n");
}

