#include<iostream>
#include<stdio.h>
int a[100];
int binarySearch (int x,int n){//÷±Ω”≤È’“ 
	int left = 0;
	int right = n-1;
	while(left <= right ){
		int middle = (left + right)/2;
		if(x == a[middle]) return middle;
		if(x > a[middle]) left = middle +1;
		else right = middle -1;
	}
	return -1;
 }
int  main()
 {
 	int n,x;
 	printf("input number:\n");
 	scanf("%d",&n);
 	printf("input:\n");
 	for(int i = 0;i < n;i++){
 	     scanf("%d",&a[i]);
	 }
	 printf("input number needed to search:\n");
	 scanf("%d",&x);
	 if(binarySearch(x,n) == -1)
	   printf("Fail to find\n");
	else printf("Find successfully\n");
	 return 0;
 }
