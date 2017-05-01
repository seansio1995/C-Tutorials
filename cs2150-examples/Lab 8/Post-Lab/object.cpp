//Robert Alexander, RMA3MZ

class obj{
public:
  int i=5;
  int getd();

private:
  int d=10;
};

int obj::getd(){
  return this->d;
}


int main(){
  obj o1;
  int x=o1.i;
  int y=o1.getd();
}


