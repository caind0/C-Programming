//
//  main.c
//  LargestNumber
//
//  Created by Cain Do on 9/27/16.
//  Copyright © 2016 Cain Do. All rights reserved.
//	Find the largest integer from 3 numbers from std input

#include <stdio.h>

int main(int argc, const char * argv[]) {
	// insert code here...
	int x,y,z;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&x,&y,&z);
	
	if( x > y && x > z)
	{
		printf("%d is the largest",x);
	}
	else if ( y > z)
	{
		printf("%d is the largest",y);
	}
	else
	{
		printf("%d is the largest",z);
	}
	
    return 0;
}
