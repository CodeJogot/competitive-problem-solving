/**************************************************************************
   *                 Solved By : Abdul Alim                               *
   *                 GitHub    : github.com/FarmerAbdulAlim               *
   *                 Email     : farmerabdulalim@gmail.com                *
   *                 YouTube   : youtube.com/@TravelerAbdulAlim           *
   *                 YouTube   : youtube.com/@AbdulAlim-Bangladesh        *
   ************************************************************************/

/*
    Algorithm Used:
    Complexity:
    Solution Approach:
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, d, test, t=0, a[109];
    cin>>test;
    while(test--) {
        cin>>n;
        map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);
        bool isEqual = true;
        for(int i=1;i<n;i++) {
            if(a[0]!=a[i]) isEqual = false;
        }
        if(isEqual) puts("-1");
        else {
            d=mp[a[n-1]];
            printf("%d %d\n", n-d, d);
            for(int i=0; i<n-d; i++)
                printf("%d ", a[i]);
                puts("");
            for(int i=1; i<=d; i++)
                printf("%d ", a[n-1]);
            puts("");
        }
    }
    return 0;
}
