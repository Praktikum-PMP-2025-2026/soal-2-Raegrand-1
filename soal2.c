# include <stdio.h>

void reactor (){
    int E, L, R, M;
    scanf("%d", &E);
    scanf("%d", &L);
    scanf("%d", &R);
    scanf("%d", &M);
    
    int C, Val;
    for(int i = 0; i<M; i++){
        scanf("%d", &C);
        scanf("%d", &Val);
        switch(C){
            case 1:
                E += Val;
                break;
            case 2:
                E -= Val;
                break;
            case 3:
                E *= Val;
                break;
            case 4:
                E = (E > Val)? Val : E;
                break;
            default:
                printf("Command salah!");
        }
        if(E < L || E > R){
            printf("GAGAL %d", i+1);
            return;
        }
    }
    printf("AMAN %d", E);
}    

int main(){
    reactor();
    return 0;
}