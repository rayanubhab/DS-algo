#include<stdio.h>
#include<stdlib.h>

struct node { 
    int key; 
    struct node *left;
    struct node *right;
}; 

// Function to create a new BST node 
//Return type of the function is struct node* which is basically pointer to the node
struct node* newNode(int item) 
{ 
    struct node* temp  = (struct node*)malloc(sizeof(struct node)); 
        
    temp->key = item; 
    temp->left = NULL; 
    temp->right = NULL;
    return temp; //Returns the address of the node
} 


/* A utility function to insert 
   a new node with given key in 
 * BST */
struct node* insert(struct node* node, int key) 
{ 
    /* If the tree is empty, create and return address of new node */
    if(node==NULL){
	
        return newNode(key); }
  
    /* Otherwise, recur down the tree */
    if(key<=node->key){
	
        node->left = insert(node->left, key); }
    else if(key>node->key){
	
        node->right = insert(node->right, key); }
  
    /* return the (unchanged) node pointer */
    return node; 
} 


void inorder(struct node* root) 
{ 
    if (root != NULL) { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 
  
  void preorder(struct node* root) 
{ 
    if (root != NULL) { 
        
        printf("%d \n", root->key); 
        preorder(root->left); 
        preorder(root->right); 
    } 
} 


 void postorder(struct node* root) 
{ 
    if (root != NULL) { 
        
         
        postorder(root->left); 
        postorder(root->right); 
        printf("%d \n", root->key); 
    } 
} 

// Function which calculates the sum of nodes in branches(branch sum) recursively and then returns the sums

int* branchsums(struct node* root,int sums,int sumslist[]){
	
	//If tree is empty simply return sumslist which is empty initially
	
	static j=0;
	
	if(root==NULL){
		return sumslist;
	}
	
	//Add sum 
	sums=(sums+root->key);
	
	//When we reach the leaf nodes simply append the sum calculated in the sumslist array
	
	if(root->left==NULL && root->right==NULL){
		
			
			sumslist[j++]=sums;
			
		
	}
	
	
	//If there is left node use recursion and append the sum in array
	
	if(root->left!=NULL){
		branchsums(root->left,sums,sumslist);
	}
	
		//If there is right node use recursion and append the sum in array
	
	if(root->right!=NULL){
		branchsums(root->right,sums,sumslist);
	}
	
	//When everything is done return the array
	 return sumslist;
}

//Function for calculating sum of all nodes

int sumofallnodes(struct node* root){
	
	if(root==NULL){
		
		return 0;
	}
	
	else{
		
		int a=root->key+sumofallnodes(root->left)+sumofallnodes(root->right);
		return a;
	}
}


//Function for calculating number of nodes using recursion

int numberofnodes(struct node* root){
	
	if(root==NULL){
		
		return 0;
	}
	
	else{
		
		
		return 1+numberofnodes(root->left)+numberofnodes(root->right);
	}
	
}

  
int main(){
	struct node* root = NULL; //Pointer to root node initially set to null which means the tree is empty
	/* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
       
    root=insert(root,50);
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
    
    // print inoder traversal of the BST 
    printf("Inorder traversal:\n");
    inorder(root); 
     // print preoder traversal of the BST 
     printf("Preorder traversal: \n");
     preorder(root);
     
     // print postoder traversal of the BST 
     printf("Postorder traversal: \n");
     postorder(root);
     
     
     int sums=0;
     int sumslist[4]={};
     
     branchsums(root,sums,sumslist);
     int i;
     
     for(i=0;i<4;i++){
     	 printf("%d  ", sumslist[i]);  
	 }
	 
	 printf("\n");
	 
	 int total=sumofallnodes(root);
	 printf("The sum of all the nodes in the tree is %d",total);
	 
	  printf("\n");
	 
	 int nn=numberofnodes(root);
	 printf("The number of nodes in the given tree is %d",nn);
  
  
	return 0;
}
