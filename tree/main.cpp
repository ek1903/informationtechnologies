#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
struct node{
  int data;
  node* left = NULL;
  node* right = NULL;
  int bal;
};
class bin_tree{
    node* root;
   public:
    bin_tree(int a){
      root = new node;
      root -> data = a;
      root -> left = NULL;
      root -> right = NULL;
      root -> bal = 0;
    }
    node* get(){
      return root;
    }
    int get_bal(node* n){
      return n -> bal;
    }
    void push(int a, node* n){
      if(n == NULL){
        node* tmp = new node;
        tmp -> data = a;
        tmp -> left = NULL;
        tmp -> right = NULL;
        tmp -> bal = 0;
        n = tmp;
        return;
      }
      if(n->left == NULL){
       node* tmp = new node;
       tmp -> data = a;
       tmp -> left = NULL;
       tmp -> right = NULL;
       tmp -> bal = 0;
       n->left = tmp;
       n -> bal++;
       return;
      }
      if(n->right == NULL){
       node* tmp = new node;
       tmp -> data = a;
       tmp -> left = NULL;
       tmp -> right = NULL;
       tmp -> bal = 0;
       n->right = tmp;
       n -> bal--;
       return;
      }
     if(n->right->right != NULL){
       push(a, n->left);
       n -> bal++;
     }
     else{
       push(a, n->right);
       n -> bal--;
     }
     return;
    }
    int pop(){
     if(root == NULL){
      cout << "error";
      return 0;
     }
     node* tmp = root;
     int a;
     if(tmp->right == NULL){
      if(tmp->left == NULL){
       a = tmp->data;
       delete tmp;
       root = NULL;
       return a;
      }
      a = tmp->left->data;
      delete tmp->left;
      root->left = NULL;
      root -> bal--;
      return a;
     }
     while(tmp->left->right != NULL){
      tmp->bal--;
      tmp = tmp->left;
     }
     if(tmp->left->left != NULL){
      a = tmp->left->left->data;
      delete tmp->left->left;
      tmp->left->left = NULL;
      tmp->left->bal--; 
      return a;
     }
     if(tmp->right->right != NULL){
      a = tmp->right->right->data;
      delete tmp->right->right;
      tmp->right->right = NULL;
      tmp->right->bal++;
      return a;
     }
     if(tmp->right->left != NULL){
      a = tmp->right->left->data;
      delete tmp->right->left;
      tmp->right->left = NULL;
      tmp->right->bal--;
      return a;
     }
     if(tmp->right != NULL){
      a = tmp->right->data;
      delete tmp->right;
      tmp->right = NULL;
      tmp->bal++;
      return a;
     }
     a = tmp->left->data;
     delete tmp->left;
     tmp->left = NULL;
     tmp->bal--;
     return a;
    }
    bool DFS(int data, node* n){ 
     if(n == NULL)   
      return 0; 
     if(n->data == data)  
      return 1;  
     if(DFS(data, n->left))  
      return 1;
     if(DFS(data, n->right)) 
      return 1;  
     return 0;
    }
    bool BFS(int data){
     queue <node*> A;  
     A.push(root);  
     while(!A.empty()){  
      node* tmp = A.front();  
      A.pop();
      if(tmp->data == data) 
       return 1;   
      if(tmp->left != NULL)  
       A.push(tmp->left);   
      if(tmp->right != NULL) 
       A.push(tmp->right);  
     }
     return 0;
    }
    bool polnota(node* n){ 
     if(n == NULL)
      return 1;
     if(n -> bal != 0)
      return 0;
     if(!polnota(n->left))
      return 0;
     if(!polnota(n->right))
      return 0;
     return 1;
    }
    bool balance(node* n){ 
     if(n == NULL)
      return 1;
     if(abs(n -> bal) > 1)
      return 0;
     if(!balance(n->left))
      return 0;
     if(!balance(n->right))
      return 0;
     return 1;
    }
    void del_tree(node* n){
     if(n == NULL)
      return;
     del_tree(n->left);
     del_tree(n->right);
     delete n;
    }
    ~bin_tree(){
      del_tree(root);
    }
};
int main(){
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 bin_tree obj1(a);
 obj1.push(b, obj1.get());
 obj1.push(c, obj1.get());
 obj1.push(d, obj1.get());
 cout << obj1.DFS(d, obj1.get()) << endl;
 cout << obj1.BFS(c) << endl;
 cout << obj1.polnota(obj1.get()) << endl;
 cout << obj1.balance(obj1.get()) << endl;
 cout << obj1.pop() << endl;
 cout << obj1.pop() << endl;
 cout << obj1.pop() << endl;
 cout << obj1.pop() << endl;
 return 0;
}
