//Robert Alexander, Paramater passing test code

int test(int& x, int& y){
  return x;
  return y;
}

int main(){
  int x=2;
  int y=3;
  test(x, y);
}


