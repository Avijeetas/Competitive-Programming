#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
	//if second element of two pairs are same, it will be sorted by first element

	if(a.second==b.second)
		return a.first<b.first;

	else return a.second<b.second;
}

int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; 
	cin>>n; // no of elements 

//	pair (a,b) here a = first element, b = second element

	vector<pair<int,int> >a; // pair of n elements
	a.resize(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i].first>>a[i].second; // first indicates first element and second= second element

	}

/* 
	showing the output according to the order of input
*/

//1st way
	cout<<"1st way"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}



// 2nd way using iterator 

	cout<<"2nd way using iterator"<<endl;
	vector<pair<int,int> >::iterator it;

	for(it=a.begin();it!=a.end();it++)
	{
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}

// using auto it - for vector

	cout<<"auto it"<<endl;
	for(auto it : a)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}


//sorting by first element

	cout<<"Sorting"<<endl;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}

/*sorting by second element

	sort(a.begin(),a.end(),cmp); // cmp is user defined boolean function
	cout<<"Sorting"<<endl;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}

*/

}
