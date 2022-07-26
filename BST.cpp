
//Implemention of Binary Search Tree;


#include <bits/stdc++.h>
using namespace std;


struct BstNode{

   int data;
   BstNode* left;
   BstNode* right;

};

BstNode* GetNewNode(int _data){

  BstNode* newNode= new BstNode();      //This function return newnote address;
  newNode->data=_data;
  newNode->left=NULL;
  newNode->right=NULL;

  return newNode;

}


BstNode* Insert(BstNode* root , int data){        //This function return current root node address;

    if(root==NULL){

        root=GetNewNode(data);
    }

    else if(data<=root->data){
        root->left= Insert(root->left,data);
    }
    else{
        root->right= Insert(root->right,data);

    }
    return root;


}


bool Search(BstNode* root, int data){

if(root==NULL){
    return false;
}
else if(root->data==data){
    return true;
}
else if(data<=root->data){
     return Search(root->left ,data);
}
else{
    return Search(root->right ,data);
}



}


int main(){

BstNode* root=NULL;

root=Insert(root,50);
root=Insert(root,23);
root=Insert(root,5);
root=Insert(root,45);
root=Insert(root,67);
root=Insert(root,78);
root=Insert(root,15);

int num;
cout<<"enter num: ";
cin>>num;
cout<<Search(root,num);

return 0;


}