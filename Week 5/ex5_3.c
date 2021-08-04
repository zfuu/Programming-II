#include<stdio.h>

//int num_list[10]= {2,5,7,9,3,1,0,6,4,8};
int selection_sort();

int main(){
    int i;
    int ndata = 1000;
    int d[ndata];

    for(i=0;i<ndata;i++){
        scanf("%d",&d[i]);
    }

    selection_sort(d,ndata);

    for(i=0;i<ndata;i++){
        printf("%d\n",d[i]);
    }
    printf("\n");

}

int selection_sort(int num_list[],int ndata){

    int i, j, min, temp;

    for (i = 0; i < ndata-1; ++i){
        min = i;
        for (j = i+1; j < ndata; ++j){
            if (num_list[j] < num_list[min]){
                min = j;
            }
        } 

        temp = num_list[min];
        num_list[min] = num_list[i];
        num_list[i] = temp;
    }

    

    return 0;
}