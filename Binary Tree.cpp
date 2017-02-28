#include <iostream>
#include <queue>
using namespace std;
struct node{
int data;
node* left = NULL;
node* right = NULL;
};
class bin_tree{
node* root;
public:
bin_tree(int x){
root = new node;
root -> data = x;
root -> left = NULL;
root -> right = NULL;
}
node* get(){
return root;
}
void push(int x, node* n){
if(n == NULL){
node* tmp = new node;
tmp -> data = x;
tmp -> left = NULL;
tmp -> right = NULL;
n = tmp;
return;
}
if(n->left == NULL){
node* tmp = new node;
tmp -> data = x;
tmp -> left = NULL;
tmp -> right = NULL;
n->left = tmp;
return;
}
if(n->right == NULL){
node* tmp = new node;
tmp -> data = x;
tmp -> left = NULL;
tmp -> right = NULL;
n->right = tmp;
return;
}
if(n->right->right != NULL)
push(x, n->left);
else push(x, n->right);
return;
}
int pop(){
if(root == NULL){
cout << "ERROR";
return 0;
}
node* tmp = root;
int x;
if(tmp->right == NULL){
if(tmp->left == NULL){
x = tmp->data;
delete tmp;
root = NULL;
return x;
}
x = tmp->left->data;
delete tmp->left;
root->left = NULL;
return x;
}
while(tmp->left->right != NULL){
tmp = tmp->left;
}
if(tmp->left->left != NULL){
x = tmp->left->left->data;
delete tmp->left->left;
tmp->left->left = NULL;
return x;
}
if(tmp->right->right != NULL){
x = tmp->right->right->data;
delete tmp->right->right;
tmp->right->right = NULL;
return x;
}
if(tmp->right->left != NULL){
x = tmp->right->left->data;
delete tmp->right->left;
tmp->right->left = NULL;
return x;
}
if(tmp->right != NULL){
x = tmp->right->data;
delete tmp->right;
tmp->right = NULL;
return x;
}
x = tmp->left->data;
delete tmp->left;
tmp->left = NULL;
return x;
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
cout << obj1.pop() << endl;
cout << obj1.pop() << endl;
cout << obj1.pop() << endl;
cout << obj1.pop() << endl;
return 0;
}
