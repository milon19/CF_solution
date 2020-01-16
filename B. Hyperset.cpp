/*
    Problem name: 
    Link: https://codeforces.com/contest/1287/problem/B
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
map <string, int> mp;

bool solve(string a, string b, int len)
{
    string ss="";
    for(int i = 0; i < len; i++)
    {
        if(a[i] == 'S')
        {
            if(b[i] == 'E') ss+='T';
            else if(b[i] == 'T') ss+='E';
            else  ss+='S';
        }
        else if(a[i] == 'T')
        {
            if(b[i] == 'S')  ss+='E';
            else if(b[i] == 'E')  ss+='S';
            else  ss+='T';
        }
        else if(a[i] == 'E')
        {
            if(b[i] == 'T')  ss+='S';
            else if(b[i] == 'S')  ss+='T';
            else  ss+='E';
        }
    }
    if(mp.find(ss)==mp.end())
        return false;
    if(mp[ss] > 0)
        return true;
    else
        return false;

}

int main()
{
    fast;
    int n, k1;
    cin >> n >> k1;
    string str[n];

    for(int i = 0; i < n; i++)
        cin >> str[i], mp[str[i]]++;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        mp[str[i]]--;
        for(int j = i+1; j < n; j++)
        {
            mp[str[j]]--;
            if(solve(str[i], str[j], k1))
                cnt++;
        }
        for(int j = i+1; j < n; j++)
            mp[str[j]]++;
    }
   cout << cnt << endl;

    //main();
    return 0;
}
