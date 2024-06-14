/**********************************************************************
   *                   Solved By : Md Abdul Alim                      *
   *                   GitHub: github.com/FarmerAbdulAlim             *
   *                   Email: farmerabdulalim@gmail.com               *
   *                   YouTube: youtube.com/@TravelerAbdulAlim        *
   *                   YouTube: youtube.com/@VillageLifeWithAbdulAlim *
   *********************************************************************/

/*
    Algorithm Used:
    Complexity:
    Solution Approach:
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, t=0, n, k;
    scanf("%d", &test);
    while(test--) {
        scanf("%d%d", &n, &k);
        int ans = 0;
        for(int i=1; i*i<=n; i++) {
            if(n%i==0) {
                if(i%k!=0) ans = ans + i;
                int otherDivisor = n/i;
                ////checking if two divisors are not same, such as, 7*7=49
                if(otherDivisor == i) continue;
                if(otherDivisor%k!=0) ans = ans + otherDivisor;
            }
        }
        printf("%d\n", ans);
    }
}
