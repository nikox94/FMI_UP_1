#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
  cout<<"Vuvedete imenata na vashi priqteli..";
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n>>o>>p>>q>>r>>s>>t>>u>>v>>w>>x>>y>>z;
  cout<<"Your friends are.."<<endl<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<m<<n<<o<<p<<q<<r<<s<<t<<u<<v<<w<<x<<y<<z;

  //Alternatively
  string names[20];
  for (int i=0;i<20;++i){
    cin>>names[i];
  }
  for (int i=0;i<20;++i){
    cout<<names[i];
  }
  return 0;
}
