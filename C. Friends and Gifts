/*
    Problem Name: C. Friends and Gifts
    Problem Link: https://codeforces.com/contest/1283/problem/C
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

map<int, int>mp;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector< int >zz, vt;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] == 0)
            zz.pb(i);
        else
            mp[arr[i]]++;

    }
    for(int i = 1; i <= n; i++)
    {
        if(mp.find(i)==mp.end())
            vt.pb(i);
    }
    int len = vt.size();
    for(int i = 0; i < len; i++)
    {
        if(zz[i]+1 == vt[i])
        {
            int a = (i+1)%len;
            swap(vt[i], vt[a]);
        }
    }
    for(int i = 0; i < len; i++)
    {
        arr[zz[i]] = vt[i];
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    //main();
    return 0;
}
