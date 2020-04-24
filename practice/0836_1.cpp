#include <iostream>

using namespace std;

const int N = 1e5+4;

int father[N];

int find_father(int x){
	int a = x;
	while(father[x]!=x) {
		x = father[x];
	}
	while(x!=a) {
		int z = father[a];
		father[a] = x;
		a = z;
	}
	return x;
}

int main(void) {
	int n, m;
	cin>>n>>m;

	for(int i=0; i<=n; i++) father[i] = i;
	while(m--) {
		char opt;
		int a, b;
		cin>>opt>>a>>b;

		int fa = find_father(a);
		int fb = find_father(b);

		if(opt=='M'){
			father[fa] = fb;
		}else{
			if(fa==fb) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}
