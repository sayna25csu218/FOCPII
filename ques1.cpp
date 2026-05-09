#include <stdio.h>
#include <string.h>

int check(char s[], int n, int k, int l){
    int ops = 0;
    int i = 0;

    while(i < n){
        if(s[i] == '1'){
            ops++;
            if(ops > k) return 0;
            i += l;
        }else{
            i++;
        }
    }
    return 1;
}

int main(){
    int n, k;
    char s[1000005];

    scanf("%d %d", &n, &k);
    scanf("%s", s);

    int ans = n;

    for(int l = 1; l <= n; l++){
        if(check(s, n, k, l)){
            ans = l;
            break;
        }
    }

    printf("%d", ans);
    return 0;
}
