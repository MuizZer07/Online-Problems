#include <stdio.h>
int main()
{
    int n, p, q, tst, i, j;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d%d%d", &n, &p, &q);
        int ara[n], cnt=0, sum=0;
        for(j=0; j<n ;j++)
        {
            scanf("%d", &ara[j]);
            sum += ara[j];
            if(cnt<p && sum<=q) cnt++;
        }
        printf("Case %d: %d\n", i, cnt);
    }
    return 0;
}