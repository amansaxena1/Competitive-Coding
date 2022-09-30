// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int t = 1, n, a;
// 	cin >> n >> n;
//   int flag = 1,c=0,k,l,i;
//   map<pair<int, int>,int> mp;
//   vector<char> str;
//   string ss,s;
//   cin >> ss;
//   mp[{ss[0]-'0', ss[2]-'0'}] = 0;
//   while(flag){
//       cin >> s;
//       if(c==0&&s.size()==1){
//         if(s[0]=='Q'){
//             flag = 0;
//             break;
//         }
//         else{
//             flag = 0;
//             str.push_back(s[0]);
//             break;
//         }
//         c = 1;
//       }
//       else if(c==0){
//         k = s[0] - '0';
//         l = s[2] - '0';
//         c = 1;
//       }
//       else if(c==1){
//         mp[{k, l}] = s[0] - '0';
//         c = 0;
//       }
//   }
//   flag = 1;
//   while(flag){
//       cin >> s;
//       if(s[0]=='Q'){
//         flag = 0;
//         break;
//       }
//       else str.push_back(s[0]);
//   }
//   vector<pair<int, int>> vp;
//   int all_sum = 0;
//   for (auto i : mp) {
//     vp.push_back(i.first);
//     all_sum += i.second;
//   }

//   int mat[n][n];
//   for (int i = 0; i < n;i++)
//   {
//     for (int j = 0; j < n;j++)
//     {
//       if(mp[{i,j}]>0)
//         mat[i][j] = mp[{i,j}];
//       else
//         mat[i][j] = 0;
//     }
//   }


// //   for (int i = 0; i < n;i++)
// //   {
// //     for (int j = 0; j < n;j++)
// //     {
// //       cout<<mat[i][j]<<" ";
// //     }
// //     cout << "\n";
// //   }
//    // pair<int,int> p = mp.begin()->first;
//   int x=mp.begin()->first.first, y=mp.begin()->first.first;
// //   cout << x << " " << y << " ";

   


//   int cost = 0;
//   int cnt = 0;
//   for (auto i : mp)
//   {
//      if (i.second > 0)
//         cnt++;
//    }
  
// //   int cnt = mp.size();
// //   cout << "\n"<<cnt<<"\n";
//    int collected = 0;
//    for (int i = 0; i < str.size(); i++)
//    {
//       if (cnt == 0)
//          break;
//       if (x == -1 || y == -1 || x == n || y == n)
//       {

//          cout << "*** Mission Failed! ***\n";
//          cout<<"You have collected maximum points : "<<collected<<"\n";

//          return 0;
//       }
//       if (str[i] == 'R')
//       {
//          x++;
//          if (mat[x][y] != 0)
//          {
//             // cout<<str[i]<<" "<<x<<" "<<y<<" "<<mat[x][y]<<" "<<cnt<<"\n";
//             collected += mat[x][y];
//             mat[x][y] = 0;
//             cnt--;
//          }

//          cost += 1;
//       }
//       if (str[i] == 'L')
//       {
//          x--;
//          if (mat[x][y] != 0)
//          {
//             // cout<<str[i]<<" "<<x<<" "<<y<<" "<<mat[x][y]<<" "<<cnt<<"\n";
//             collected += mat[x][y];

//             mat[x][y] = 0;
//             cnt--;
//          }

//          cost += 1;
//       }
//       if (str[i] == 'D')
//       {
//          y++;
//          if (mat[x][y] != 0)
//          {
//             // cout<<str[i]<<" "<<x<<" "<<y<<" "<<mat[x][y]<<" "<<cnt<<"\n";
//             collected += mat[x][y];

//             mat[x][y] = 0;
//             cnt--;
//          }

//          cost += 2;
//       }
//       if (str[i] == 'U')
//       {
//          y--;
//          if (mat[x][y] != 0)
//          {
//             // cout<<str[i]<<" "<<x<<" "<<y<<" "<<mat[x][y]<<" "<<cnt<<"\n";
//             collected += mat[x][y];

//             mat[x][y] = 0;
//             cnt--;
//          }

//          cost += 2;
//       }
//       //  cout << cnt << "-";
//   }

//   if(cnt!=0){
//    //   cout << cnt;
//       cout << "*** Mission Failed! ***\n";
//       cout<<"You have collected maximum points : "<<collected<<"\n";

//      return 0;
//   }
//   cout << "*** Mission Possed! ***\n";
//   cout<<"You have collected maximum points : "<<all_sum - cost<<"\n";
//   return 0;
// }




#include <bits/stdc++.h>
using namespace std;
int main(){
   int t = 1, n, a;
   cin >> n >> n;
   int flag = 1,c=0,k,l,i;
   map<pair<int, int>,int> mp;
   vector<char> str;
   string ss,s;
   cin >> ss;
   mp[{ss[0]-'0', ss[2]-'0'}] = 0;
   while(flag){
         cin >> s;
         if(c==0&&s.size()==1){
         if(s[0]=='Q'){
               flag = 0;
               break;
         }
         else{
               flag = 0;
               str.push_back(s[0]);
               break;
         }
         c = 1;
         }
         else if(c==0){
         k = s[0] - '0';
         l = s[2] - '0';
         c = 1;
         }
         else if(c==1){
         mp[{k, l}] = s[0] - '0';
         c = 0;
         }
   }
   flag = 1;
   while(flag){
         cin >> s;
         if(s[0]=='Q'){
         flag = 0;
         break;
         }
         else str.push_back(s[0]);
   }
   vector<pair<int, int>> vp;
   int all_sum = 0;
   for (auto i : mp) {
      vp.push_back(i.first);
      all_sum += i.second;
   }
   int mat[n][n];
   for (int i = 0; i < n;i++){
      for (int j = 0; j < n;j++) {
         if(mp[{i,j}]>0)
         mat[i][j] = mp[{i,j}];
         else
         mat[i][j] = 0;
      }
   }
   int x=mp.begin()->first.first, y=mp.begin()->first.first;
   int cost = 0;
   int cnt = 0;
   for (auto i : mp){
      if (i.second > 0)
         cnt++;
      }
      int collected = 0;
      for (int i = 0; i < str.size(); i++){
         if (cnt == 0)
         break;
      if (x == -1 || y == -1 || x == n || y == n){
         cout << "*** Mission Failed! ***\n";
         cout<<"You have collected maximum points : "<<collected<<"\n";
         return 0;
      }
      if (str[i] == 'R'){
         x++;
         if (mat[x][y] != 0) {
            collected += mat[x][y];
            mat[x][y] = 0;
            cnt--;
         }
         cost += 1;
      }
      if (str[i] == 'L'){
         x--;
         if (mat[x][y] != 0) {
            collected += mat[x][y];
            mat[x][y] = 0;
            cnt--;
         }
         cost += 1;
      }
      if (str[i] == 'D'){
         y++;
         if (mat[x][y] != 0) {
            collected += mat[x][y];
            mat[x][y] = 0;
            cnt--;
         }
         cost += 2;
      }
      if (str[i] == 'U'){
         y--;
         if (mat[x][y] != 0){
            collected += mat[x][y];

            mat[x][y] = 0;
            cnt--;
         }

         cost += 2;
      }
  }

  if(cnt!=0){
      cout << "*** Mission Failed! ***\n";
      cout<<"You have collected maximum points : "<<collected<<"\n";

     return 0;
  }
  cout << "*** Mission Possed! ***\n";
  cout<<"You have collected maximum points : "<<all_sum - cost<<"\n";
  return 0;
}
