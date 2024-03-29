#include <iostream>
#include <stack>

using namespace std;
int main() {
  stack<int> st;
  cout << "Enter the size of the Stack : ";
  int size;
  cin >> size;
  for (int i = 0; i <= size - 1; i++) {
    int x;
    cin >> x;
    st.push(x);
  }
  /*
Enter the size of the Stack : 3
1
2
3*/
  /*while(st.size()>0){
    cout<<st.top();
st.pop();
  }*/
  // 321
  // however it will empty the stack so we wil do :
  stack<int> temp;
  while (st.size() > 0) {
    cout << st.top();
   /* int x = st.top();
    st.pop();*/
    temp.push(st.top());
    st.pop();
  }
  while(temp.size()>0){
   // int x=temp.top();
   st.push(temp.top());
    temp.pop();
  }
  cout<<endl;
  cout<<st.top();
}