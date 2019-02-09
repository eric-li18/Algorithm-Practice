#include<stdio.h>
#include<stdlib.h>

int arr[]={1,4,6,7,9,20};
size_t length = sizeof(arr)/sizeof(arr[0]);

//Comparator function
int compare_function(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main(){
    int *item;
    int key;
    int i;

    //Printing the array, array length, and prompting for a number to find
    printf("Given an array of size %d \n{",length);
    for(i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}\nEnter a number to look for: ");
    scanf("%d", &key);
    getchar();
    
    //Binary Search from <stdlib.h>
    item = (int*) bsearch(&key, arr, length, sizeof(int), compare_function);
    if(item != NULL){
        printf("Found: %d\n",*item);
    }
    else{
        printf("Not Found\n");
    }

    return 0;
}