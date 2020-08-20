using namespace std;

int JumpingCaterpillars(int cater[],int n,int k)
{
    int i,j,f,p;
    bool marked[n+1];
    memset(marked,true,sizeof(marked));
    for(i=0;i<k;i++)
    {
        f=0;
        p = cater[i];
        for(j=p;j<=n;j=j+p)
        {
            marked[j] = false;
        }
        
        for(j=1;j<=n;j++)
        {
            if(marked[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        return 0;
        
    }
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(marked[i])
        c++;
    }
    
    return c;
    
}
int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    cin>>k;
	    
	    int i,cater[k];
	    for(i=0;i<k;i++)
	    {
	        cin>>cater[i];
	    }
	    sort(cater,cater+k);
	    int left_uneaten = JumpingCaterpillars(cater,n,k);
	    cout<<left_uneaten<<'\n';
	}
	return 0;
}