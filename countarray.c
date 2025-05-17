#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,3,4,6,7,9,4,3,2,1,3};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",length);
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}