#include <iostream>
using namespace std;
int a[30], ans = 0;
int b[8][8];
//用来检查是否为平局
int check(){
    int pos = 0;
    for(int i = 1;i <= 5;i++){
      for(int j = 1;j <= 5;j++){
        //把25个棋子情况转化为二维的
        b[i][j] = a[++pos];
      }
    }
    //横竖交叉的情况一一进行判定
    int s3 =0,s4 = 0;
    for(int i = 1;i <= 5;i++){
      int s1 = 0,s2 = 0 ;
      for(int j = 1;j <= 5;j++){
        s1 += b[i][j];
        s2 += b[j][i];
        if(i - j==0) s3+=b[i][j];
        if(i + j == 6) s4 += b[i][j];
      }
      if(s1 == 5 || s2 == 5 || s1 == 0 || s2 == 0)  return 0;
    }
    if(s3 == 5 || s4 == 5 || s3 == 0 || s4 == 0) return 0;
    return 1;
}
int main()
{

  //使用25个状态，进行状态压缩，拿到每一次0，1的情况
  for(int i = 0;i <= (1 << 25) - 1;i++)
  {
      int s = 0;
      for(int j = 0;j < 25;j++){
          a[j + 1] = (i >> j) & 1;
          if((i>>j)&1) s++;

      }
      //小兰13个小乔12个棋子
      if(s != 13) continue;
      if(check() ) ans++;
      
  }
  cout << ans;

  return 0;
}
