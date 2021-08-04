#include<stdio.h>

int num_list[10]= {2,5,7,9,3,1,0,6,4,8};
void selection_sort();

int main(){

    int iswitch = 1;/*odering switch, 0:ascendeing, 1:descending*/

    int i;

    selection_sort(iswitch);

    for(i=0;i<10;i++){
        printf("%d",num_list[i]);
    }
    printf("\n");

}

void selection_sort(int mode){

    int i, j, min, temp;

    for (i = 0; i < 10-1; ++i){
        min = i;
        for (j = i+1; j < 10; ++j){
            if (num_list[j] < num_list[min]){
                min = j;
            }
        } 

        temp = num_list[min];
        num_list[min] = num_list[i];
        num_list[i] = temp;
    }

    if (mode == 1){
        int start = 0, end = 9;
        while (start < end){
        int temp = num_list[start];
        num_list[start] = num_list[end];
        num_list[end] = temp;
        start++;
        end--;
        }
    }


}