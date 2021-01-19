#include <stdio.h>
#define max 7
void my_memmove(void* dst, const void* src, size_t size)
{
	char* ch_dst = (char*)dst;
	char* ch_src = (const char*)src;
	if (ch_dst >= ch_src && ch_dst <= ch_src + size)
	{
		//从前往后拷贝
		for (int i = size - 1;i >= 0;--i)
			ch_dst[i] = ch_src[i];
	}
	else
	{
		//从后往前拷贝
		for (size_t i = 0;i < size;++i)
			ch_dst[i] = ch_src[i];
	}
	return dst;
};
int main()
{   char  a1[] = "hello";
    
	char a2[] = "hello";
	
	char  a3[max], a4[max];
	/*strcpy(a3, a2);*/
	    memmove(a3, a1, 24);
		my_memmove(a4, a1, sizeof(a1));

		printf("%c\n",a1);
		printf("%c\n", a2);
		printf("%c\n", a3);
		printf("%c\n", a4);
	return 0;
}