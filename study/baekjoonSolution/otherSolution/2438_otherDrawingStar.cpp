#include <ios>
int N, i, j;
main(){
    for(scanf("%d", &N); ++i < N + 1;)
        for(j = 0; j++ < i; printf(j == i ? "*\n":"*"));
}