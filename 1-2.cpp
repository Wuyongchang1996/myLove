#include<stdio.h>
int a[100];
int binarySearch (int low,int x,int high){
    if(low > high ) return -1;//µ›πÈ≥ˆø⁄ 
	int middle = (low + high)/2;
	if(x == a[middle]) return middle;
	if(x > a[middle]) low = middle +1;
	else high = middle -1;
	binarySearch (low,x,high);//µ›πÈ≤È’“ 
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
	 if(binarySearch(0,x,n-1) == -1)
	   printf("Fail to find\n");
	else printf("Find successfully\n");
	 return 0;
 }
