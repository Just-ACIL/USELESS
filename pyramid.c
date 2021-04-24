#include <stdio.h>
#include<cs50.h>
//MADE BY Λ
int main(void){
    double B,C,D,E;
    double A = get_double("How tall do you want it to be? ");
    char F = get_char("In What Character do you want it to be? ");
    if(A==14||A==15||A==13){
        printf("                              \n");
        printf("     <%c>              <%c>     \n",F,F);
        printf("    <%c%c%c>            <%c%c%c>    \n",F,F,F,F,F,F);
        printf("     <%c>              <%c>     \n",F,F);
        printf("                              \n");
    }
    for(C=0;C!=A;C++){
        for(E=C;E!=A;E++){
            printf(" ");
    }
        for(B=-1;2*C!=B;B++){//MADE BY Λ
            printf("%c",F);
    }
        for(D=C;D!=A;D++){
            printf(" ");
    }
        printf("\n");
    }
        if(A==14||A==15||A==13){
        printf("                              \n");
        printf("                              \n");
        printf("                              \n");
        printf("  %c%c%c                    %c%c%c  \n",F,F,F,F,F,F);//MADE BY Λ
        printf("   %c%c%c%c                %c%c%c%c   \n",F,F,F,F,F,F,F,F);
        printf("    %c%c%c%c%c%c          %c%c%c%c%c%c    \n",F,F,F,F,F,F,F,F,F,F,F,F);
        printf("      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      \n",F,F,F,F,F,F,F,F,F,F,F,F,F,F,F,F,F,F);
        printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c        \n",F,F,F,F,F,F,F,F,F,F,F,F,F,F);
        printf("            %c%c%c%c%c%c            \n",F,F,F,F,F,F);
        printf("\n\n OMG IT YOU!!!");
        }
}
