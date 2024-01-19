void sortZeroesAndOne(int input[], int size)
{
    int s=0,e=size-1;
    while(s<=e){
        if(input[s]==0 && input[e]==1){
            s++,e--;
        }
        else if(input[s]==0){
            s++;
        }
        else if (input[e]==1){
            e--;
        }
        else{
            swap(input[s],input[e]);
            s++,e--;
        }
    }
}