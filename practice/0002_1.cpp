#include<iostream>

using namespace std;

int f[1005][1005];

int N, V;
int c[1005]; // cost
int w[1005]; // worth

int main(void) {
	cin>>N>>V;
	for(int i=1; i<=N; i++) cin>>c[i]>>w[i];

	for(int i=1; i<=N; i++){ // i idx
		for(int v=0; v<=V; v++){ // v volume
			f[i][v] = f[i-1][v];
			if(v>=c[i]) f[i][v] = max(f[i][v], f[i-1][v-c[i]]+w[i]);
		}
	}

	cout<<f[N][V]<<endl;
}
