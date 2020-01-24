/*
    Problem Name: B. New Year and Ascent Sequence
    Problem Link: https://codeforces.com/contest/1284/problem/B
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<climits>
#include<queue>
#include<stack>

#define pb                  push_back
#define m_p                 make_pair
#define ALL(x)              x.begin(), x.end()
#define unq(x)              (x).resize(unique(ALL(x)) - x.begin())
#define db(x)               printf("%d\n", x)
#define fast                ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl                '\n'

using namespace std;

typedef pair<int, int>      pii;
typedef long long           ll;
#define N 1000006
int fq[N] = {0};

int main()
{
    int n, c = 0;
    cin >> n;
    int nn = n;
    int mx_arr[n];
    ll ans = 0;
    while(nn--)
    {
        int l;
        cin >> l;
        int tm;
        int mn = INT_MAX, mx = INT_MIN;
        int arr[l];
        for(int i = 0; i < l; i++)
        {
            cin >> tm;
            arr[i] = tm;
            mn = min(mn, tm);
            mx = max(mx,tm);
        }
        int tx = arr[0], ck = 0;
        for(int i = 1; i < l; i++)
        {
            if(tx < arr[i])
            {
                ck = 1;
                break;
            }
            else
                tx = min(arr[i], tx);
        }
        if(ck){
                ans+=n;
                continue;
        }
        fq[mn]++;
        mx_arr[c] = mx;
        c++;
    }

    for(int i = 1; i < N; i++)
        fq[i] = fq[i-1]+fq[i];
    ans += (n-c)*c;
    for(int i = 0; i < c; i++)
        ans+=fq[mx_arr[i]-1];
    cout << ans <<  endl;
    //main();
    return 0;
}
