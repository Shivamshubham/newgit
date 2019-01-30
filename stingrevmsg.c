#include<stdio.h>
char* reverse(char*); //func declaration
main()
{
	printf("%s",reverse("COMPUTERS"));	//func call
}
 char* reverse(char *p) //func defination
{
	int i,l;
	char c;
	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++)
		{
			c=*(p+i);
			*(p+i)=*(p+l-1-i);
			*(p+l-1-i)=c;
		}
	return(p);
}
