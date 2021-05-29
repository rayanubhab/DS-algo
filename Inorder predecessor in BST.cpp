
//Function to find maximum 

Node* findmax(Node* root){
	
	if(root==NULL) return NULL;
	
	while(root->right!=NULL) root=root->right;
	
	return root;
}

//Function which searches for key in our tree

Node* find(Node* root,int key){
	
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return find(root->right,data);
	else return find(root->left,data);
}


//Function to find inorder predecessor

Node* Getpredecessor(Node* root, int key){

Node* temp = find(root,key);

if(temp==NULL) return NULL;

//Check if left sub tree exists

if(temp->left!=NULL){ return findmax(temp->left);} //return max element in left sub tree


//left sub tree doesnot exist
else{
	
	Node* predecessor = NULL;
	Node* ancestor =  root; //Initialise the ancestor by root
	
	//Walk down till current node starting from root 
	
	while(ancestor!=current){
		
		if(current->data>ancestor->data){
			predecessor = ancestor;//Probable predecessor value we will store and keep updating
			ancestor = ancestor->right;
		}
		
		else ancestor = ancestor->left;
	}
     return predecessor;	
}

}


//overall t.c is O(h)

/*
          80
       /      \
     40        120
    /  \      /   \
   20   60   100  140
  / \  / \   / \  / \
10  30 50 70 90 110 130 150  */
