#include<bits/stdc++.h>

using namespace std;




void insert(stack<int> &st, int x){

    if(st.empty()){
        st.push(x);
        return ;
    }

    int temp=st.top();
    st.pop();
    insert(st,x);
    st.push(temp);

}


void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }

    int x=st.top();
    st.pop();
    reverse(st);
    insert(st,x);
}


int main(){

  stack<int> st;
  st.push(3);
  st.push(4);
  st.push(7);
  st.push(8);


reverse(st);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}


    return 0;
}