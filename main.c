//4. (2 μονάδες) Να υλοποιηθεί μια στοίβα LIFO με χρήση πίνακα και της γλώσσας C.
#include <stdio.h>

int main() {
    int Menu=1;
    int newInt;
    int max,i;
    int tp=0;
    int Stk[max];
    printf("Hello, World!\n");
    printf("Give me the max of the Stuck:\n");
    scanf("%d",&max);
    max=max-1;
    for (i=0;i<=max;i++){
        Stk[i]=0;
    }
    while(Menu!=0){
        printf("Press:\n 0 -->End\n 1-->Push \n 2-->PoP\n 3-->Empty \n 4-->Full \n 5-->Print the stuck \n**************************************************************************\n");
        scanf("%d",&Menu);
        if(Menu==5) {
                for (int j = 0; j < tp; j++) {
                    printf("%d \t", Stk[j]);
                }
                printf("\n");
        }
        else if(Menu==4){
            if(tp>=max){
                printf("The stuck is Full\n");}
            else{
                printf("The stuck is NOT Full\n");}
            }
        else if(Menu==3) {
            if (tp == 0) {
                printf("The stuck is Empty\n");}
            else{
                printf("The stuck is NOT Empty\n");}
        }
        else if(Menu==2) {
            if (tp !=0) {
                Stk[tp] = 0;
                tp = tp - 1;}
            else{
                printf("The stuck is Empty\n");}
        }
        else if(Menu==1){
            if(tp<=max){
            printf("Give me an intiger to push to the top:\n");
            scanf("%d",&newInt);
            Stk[tp]=newInt;
            tp=tp+1;}
            else{
                printf("The stuck is Full\n");
            }
        }
        else if(Menu==0) {
            return 0;
        }

        else{
            printf("Try Again!!!\n");
        }
    }

    return 0;
}
