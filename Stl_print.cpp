#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st) { // yedi malai changes pani garauna xa vaye i will
                            // pass by refrence like stack<int>&st
  stack<int> temp;
  while (st.size() > 0) {
    temp.push(st.top());
    st.pop();
  }
  while (temp.size() > 0) {
    cout << temp.top() << " ";
    st.push(temp.top());
    temp.pop();
  }
}
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
  // empty st and fill gt
  stack<int> gt;
  while (st.size() > 0) {
    gt.push(st.top());
    st.pop();
  }
  // empty gt and fill rt
  stack<int> rt;
  while (gt.size() > 0) {
    rt.push(gt.top());
    gt.pop();
  }
  // empty rt and fill st
  while (rt.size() > 0) {
    st.push(rt.top());
    rt.pop();
  }
}