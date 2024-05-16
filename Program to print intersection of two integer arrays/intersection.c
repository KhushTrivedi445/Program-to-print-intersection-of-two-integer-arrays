#include<stdio.h>
int main(){

    printf("this programme finds the intersection of two input arrays\n");
    int n , m ;     // n & m are sizes for array 1 % 2
    printf("enter size for 1st array : ");
    scanf("%d",&n);
    printf("enter elements for 1st array of size %d : ",n);

    int arr1[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter size for 2nd array : ");
    scanf("%d",&m);
    printf("enter elements for 2nd array of size %d : ",m);

    int arr2[m];
    for (int i = 0 ; i < m ; i++){
        scanf("%d",&arr2[i]);
    }



    // intialising intersection array
    int k = 0 ;
    int inter_array[n+m] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if ( arr1[i] == arr2[j]) {

                inter_array[k] = arr1[i];
                k++;
            }
        }
    }



    //sort(arr);
    int temp ;
    for (int i = 0 ; i  < k ; i++){
        for (int j = i+1 ; j < k ; j++){
            if (inter_array[i] > inter_array[j]){
                temp = inter_array[i] ;
                inter_array[i] = inter_array[j];
                inter_array[j] = temp ;
            }

        }
    }

    int j = 0 ;
    for ( int i = 0 ; i < k ; i++ ){
        if ( inter_array[i] != inter_array[i+1] ){
            // adding value to array only if adjacent values are not same
            inter_array[j++] = inter_array[i] ;
        }
    }


    printf("\nintersection between two given array is : ");

    for (int i = 0 ; i < j ; i++){
        printf("%d ", inter_array[i]);
    }

    return 0 ;
}