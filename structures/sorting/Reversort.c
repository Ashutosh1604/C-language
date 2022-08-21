#include<stdio.h>
#include<limits.h>

void reverse(int i, int j, int* a)
{
    int x = i;
    int y = j;
    int temp[30];
    while(x<=y)
    {
        
        temp[30] = a[x];
        a[x] = a[y];
        a[y] = temp[30];
        x++;
        y--;
    }
}
int main()
{
    
    int t,caseNo=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        {
        scanf("%d",&a[i]);
        }
        int ans = 0;
        for(int i=0; i<n-1; i++)
        {
            int minIndex = n-1;
            int minTerm = INT_MAX;

            for(int j=n-1; j>=i; j--)
            {
                if(a[j]<minTerm)
                {
                    minTerm = a[j];
                    minIndex = j;
                }
            }
            reverse(i, minIndex, a);
            ans += minIndex-i+1;
            
        }
        caseNo++;
        printf("Case #%d: %d\n",caseNo,ans);
    }
}
