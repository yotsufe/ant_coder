#include <bits/stdc++.h>

using namespace std;

int main() {

   // 入力
   printf("長さ: ");
   int L;
   scanf("%d", &L);
   printf("アリの数: ");
   int n;
   scanf("%d", &n);
   std::vector<int> x(n);

   for(int i = 0; i < n; i++)
   {
      printf("%d匹目の左端からの距離: ", i+1);
      scanf("%d", &x[i]);
   }

   // 処理
   // 最小時間
   int minTime = 0;
   for (int i = 0; i < n; i++) {
      minTime = max(minTime, min(x[i], L - x[i]));
   }

   // 最大時間 
   int maxTime = 0;
   for (int i = 0; i < n; i++) {
      maxTime = max(maxTime, max(x[i], L - x[i]));
   }

   // 答え表示
   printf("最小時間: %d\n", minTime);
   printf("最大時間: %d\n", maxTime);

   return 0;
}
