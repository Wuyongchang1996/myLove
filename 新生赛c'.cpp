#include<stdio.h> 
int main() {
	freopen ("read.txt", "r", stdin);
	freopen ("w.txt", "w", stdout);
	int CASE;
	scanf ("%d", &CASE);
	while (CASE --) {
		int n;
		scanf ("%d", &n);
		int maxn=-1, minn=inf;
		for (int i=0, x; i<n; i++) {
			scanf ("%d", &x);
			maxn = max(maxn, x);
			minn = min(minn, x);
		}
		printf ("%d\n", maxn-minn);
	}
	return 0;
}
