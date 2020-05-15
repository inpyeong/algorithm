//#include <cstdio>
//using namespace std;
//
//int a[100][100];
//
//bool same(int x, int y, int n) {
//	for (int i = x; i < x + n; i++) {
//		for (int j = y; j < y + n; j++) {
//			if (a[x][y] != a[i][j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void solve(int x, int y, int n) {
//	if (same(x, y, n)) {
//		printf("%d", a[x][y]);
//	}
//	else {
//		int m = n / 2;
//		printf("(");
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++) {
//				solve(x + i * m, y + j * m, m);
//			}
//		}
//		printf(")");
//	}
//	return;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	solve(0, 0, n);
//	return 0;
//}