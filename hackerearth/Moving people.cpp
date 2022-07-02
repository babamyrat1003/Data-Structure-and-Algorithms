#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	
	int a[n][m];
	
	string s[n];
	for(int i=0;i<n;i++)cin>>s[i];
	
	int qq,x,y;	
	while (q--)
	{
		cin>>qq;
		
		if(qq==1)
		{
			cin>>x>>y;
			
			if(x<0)
			{
				int rght=x*(-1);
			
				for(int i_i=0; i_i<rght; i_i++)
				{
					for(int i=0; i<n; i++)
					{
						string ss = s[i];
						for(int j=m-1; j>0;j--)
							ss[j]=ss[j-1];					
										
						ss[0]='0';
						s[i]=ss;
					}
				}
			}
			if(y<0)
			{
				 int down = y*(-1);
				 
				 for(int i_i=0; i_i<down; i_i++)
				 {
				 	for(int i=n-1; i>0; i--)
				 	{
				 		string ss=s[i];
						string sss=s[i-1];	
						
						for(int j=0; j<m; j++)
							ss[j]=sss[j];
						
						s[i]=ss;						
					}
					string ss=s[0];
					for(int j_j=0; j_j<m; j_j++) ss[j_j]='0';
					
					s[0]=ss;
				 }				 
			}
			if(x>0)
			{
				for(int i_i=0; i_i<x; i_i++)
				{
					for(int i=0; i<n; i++)
					{
						string ss =s[i];
						for(int j=0; j<m-1; j++)
							ss[j]=ss[j+1];
					
						ss[m-1]='0';
						s[i]=ss;
					}
				}		
			}
			if(y>0)
			{
				 for(int i_i=0; i_i<y; i_i++)
				 {
				 	for(int i=0; i<n-1; i++)
				 	{
				 		string ss=s[i];
						string sss=s[i+1];	
						
						for(int j=0; j<m; j++)
							ss[j]=sss[j];
						
						s[i]=ss;
					}
					string ss = s[n-1];
						
					for(int j_j=0; j_j<m; j_j++) ss[j_j]='0';
					
					s[0]=ss;
				 }
			}
			if(x==0)continue;
			if(y==0)continue;	
		}
		
		int c=0;
		if(qq==2)
		{
				for(int i=0;i<n;i++)
				{
					string ss=s[i];
					
					for(int j=0;j<m;j++)
					if(ss[j]=='1')c++;
				}
				
				cout<<c<<endl;
		}	
		
		
	}	
		
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cout<<a[i][j]<<' ';
//		}
//		cout<<endl;
//	}
		
	
	
}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,m,q;
//	cin>>n>>m>>q;
//	
//	int a[n][m];
//	
//	string s[n];
//	for(int i=0;i<n;i++)cin>>s[i];
//	
//	for(int i=0;i<n;i++)
//	for(int j=0;j<m;j++)
//		cin>>a[i][j];
//	
//	
//	int qq,x,y;	
//	while (q--)
//	{
//		cin>>qq;
//		
//		if(qq==1)
//		{
//			cin>>x>>y;
//			
//			if(x<0)
//			{
//				int rght=x*(-1);
//			
//				for(int i_i=0; i_i<rght; i_i++)
//				{
//					for(int i=0; i<n; i++)
//					for(int j=m-1; j>0; j--)
//						a[i][j]=a[i][j-1];
//															
//					for(int j_j=0; j_j<n; j_j++) a[j_j][i_i]=0;
//				}
//			}
//			if(y<0)
//			{
//				 int down = y*(-1);
//				 
//				 for(int i_i=0; i_i<down; i_i++)
//				 {
//				 	for(int i=n-1; i>0; i--)
//				 	for(int j=0; j<m; j++)
//						a[i][j]=a[i-1][j];
//						
//					for(int j_j=0; j_j<m; j_j++) a[i_i][j_j]=0;
//				 }				 
//			}
//			if(x>0)
//			{
//				for(int i_i=0; i_i<x; i_i++)
//				{
//					for(int i=0; i<n; i++)
//					for(int j=0; j<m-1; j++)
//						a[i][j]=a[i][j+1];
//															
//					for(int j_j=0; j_j<n; j_j++) a[j_j][m-1-i_i]=0;
//				}		
//			}
//			if(y>0)
//			{
//				 for(int i_i=0; i_i<y; i_i++)
//				 {
//				 	for(int i=0; i<n-1; i++)
//				 	for(int j=0; j<m; j++)
//						a[i][j]=a[i+1][j];
//						
//					for(int j_j=0; j_j<m; j_j++) a[n-i_i-1][j_j]=0;
//				 }
//			}
//			if(x==0)continue;
//			if(y==0)continue;	
//		}
//		
//		int c=0;
//		if(qq==2)
//		{
//				for(int i=0;i<n;i++)
//				for(int j=0;j<m;j++)
//				if(a[i][j]==1)c++;
//				
//				cout<<c<<endl;
//		}	
//	}	
//		
//		
////	for(int i=0;i<n;i++)
////	{
////		for(int j=0;j<m;j++)
////		{
////			cout<<a[i][j]<<' ';
////		}
////		cout<<endl;
////	}
//		
//	
//	
//}
