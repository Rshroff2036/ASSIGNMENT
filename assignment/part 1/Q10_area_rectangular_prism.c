//find the area of a rectangular prism formula :A=2(wl+hl+hw)(length,width,height)
#include<stdio.h>
int main()
{
	int length,width,height;
	printf("\n find the area of a rectangular prism");
	printf("\n enter the length of the rectangular prism");
	scanf("\n %d",&length);
	printf("\n enter the width of the rectangular prism");
	scanf("\n %d",&width);
	printf("\n enter the height of the rectangular prism");
	scanf("\n %d",&height);
	
	printf("\n area of the rectangular prism is %d", 2*(width*length+height*length+height*width));
	return 0;
}

