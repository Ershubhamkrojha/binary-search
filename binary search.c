#include<stdio.h>
void main()
{
    int search,size,mid,first,i,last;
    printf("size of array:");
    scanf("%d",&size);
    int arr[size];
     printf("Array elements:-");
     for(i=0;i<size;i++)
     {
      scanf("%d",&arr[i]);
     }
     first=0;
     last=size-1;
     mid=size/2;

    printf("enter search element in array:-");
    scanf("%d",&search);

   while(first<=last)
   {
     if(arr[mid]<search)
      {
      first=mid+1;
      }
      else if(arr[mid]==search)
      {
      printf("element is index=%d",mid);
      break;
      }
      else{
        last=mid-1;
        }
        mid=mid/2;
   }
   printf("element is found:",arr[mid])
}
