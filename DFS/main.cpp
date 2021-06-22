///DFS
///O(m+n)  time where n is the number of vertices and m is the number of edges.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll nod,edg,i,j,x,y,a,k,s;
    cin>>nod>>edg;
    vector<ll> v[nod+1];
    bool vis[nod+2];
    memset(vis,false,sizeof(vis));
    for(i=0;i<edg;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        //v[y].push_back(x);
    }
    cin>>s;
    stack<ll> st;
    vis[s]=true;
    st.push(s);
    while(!st.empty())
    {
        k=st.top();
        cout<<"The top value: "<<k<<endl;
        st.pop();
        for(j=0;j<v[k].size();j++)
        {
            a=v[k][j];
            if(vis[a]==0)
            {
                vis[a]= true;
                st.push(a);
            }
        }
    }

}