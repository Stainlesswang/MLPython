#include<stdio.h>
#include<string.h>

int max(int a,int b){
	return a>b?a:b;
};
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

// void printBook( struct Books book );
void printBook(struct Books book )
{
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}
int fbNumeber(int n){
	if (n<0)
	{
		return -1;
	}
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		/* code */
		return 1;
	}
	return fbNumeber(n-1)+fbNumeber(n-2);
}
int fbNumeber2(int n){
	if (n<0)
	{
		return -1;
	}
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		/* code */
		return 1;
	}
	int all=0;
	int n1=1;
	int n2=0;
	for (int i = 2; i <= n; ++i)
	{
		/* code */
		all=n1+n2;
		n1=n1+n2;
		n2=n1;
	}
	return all;
}

int main( ) 
{
	struct Books Book1;        /* 声明 Book1，类型为 Books */
   struct Books Book2;        /* 声明 Book2，类型为 Books */
 
   /* Book1 详述 */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;
 
   /* Book2 详述 */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* 输出 Book1 信息 */
   printBook( Book1 );
 
   /* 输出 Book2 信息 */
   printBook( Book2 );

   for (int i = 0; i < 20; i++)
   {
		printf("%d\n",fbNumeber2(i));
   }
 

} 



