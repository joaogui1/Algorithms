/*
Binary Indexed Tree (BIT)
Fenwick's Tree

por joão Guilherme
*/

#include <iostream>

#define MXVAL 1001

int fenwick[MXVAL];

void upd(int x, int v){
       for(; x < MXVAL; x += (x&-x))  fenwick[x] += v;
}

int query(int x){
  int ret = 0;
  for(; x > 0; x -= (X&-x))  ret += fenwick[x];
  return ret;
}

int query(int a,int b){
  return query(b) - query(a - 1);
}

int main(){
  int n, q, tp, a, b;
  cin >> n >> q;
  for(int i = 0; i < q; ++i){
    cin >> tp >> a >> b;
    if(tp == 0) upd(a, b);
    else  cout << query(a, b) << "\n";
  }

  return 0;
}
