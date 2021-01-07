#include <bits/stdc++.h>

using namespace std;

int main() {

   // 入力
   printf("データ総数: ");
   int n;
   scanf("%d", &n);
   std::vector<int> a(n);

   for(int i = 0; i < n; i++)
   {
      printf("%d個目: ", i+1);
      scanf("%d", &a[i]);
   }

   // 処理
   int ans = 0;
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         for (int k = j + 1; k < n; k++) {
            int len = a[i] + a[j] + a[k];
            int ma = max(a[i], max(a[j], a[k]));
            int rest = len - ma;

            if (ma < rest) {
               ans = max(ans, len);
            }
         }
      }
   }

   // 答え表示
   printf("Ans: %d\n", ans);

   return 0;
}
