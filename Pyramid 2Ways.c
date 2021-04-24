#include <stdio.h>
//MADE BY Λ
#include<cs50.h>
int main(void){//MADE BY Λ
    double B,C,D,E;
    double A = get_double("How wide do you want it to be? \n");
    char F = get_char("In What Character do you want it to be? \n");
    for(C=0;C!=A;C++){
        for(E=C;E!=A;E++){
            printf(" ");
    }
        for(B=-1;2*C!=B;B++){
            printf("%c",F);
    }
        for(D=C;D!=A;D++){//MADE BY Λ
            printf(" ");
    }
        printf("\n");
    }
    for(C=A-1;C!=0;C--){
        for(E=C-1;E!=A;E++){
            printf(" ");
    }
        for(B=1;2*C!=B;B++){//MADE BY Λ
            printf("%c",F);
    }
        for(D=C;D!=A;D++){
            printf(" ");
    }
        printf("\n");
    }
  //MADE BY Λ
}
