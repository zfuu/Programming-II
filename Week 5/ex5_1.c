#include<stdio.h>

int num_list[10]= {2,5,7,9,3,1,0,6,4,8};
int selection_sort(int arr[], int len);

int main(){
    int i;

    selection_sort(num_list, 10);

    for(i=0;i<10;i++){
        printf("%d ",num_list[i]);
    }
    printf("\n");

}

int selection_sort(int arr[], int len){

    int i, j, min, temp;

    for (i = 0; i < len-1; ++i){
        min = i;
        for (j = i+1; j < len; ++j){
            if (arr[j] < arr[min]){
                min = j;
            }
        } 

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    return 0;
}