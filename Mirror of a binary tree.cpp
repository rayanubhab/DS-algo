void mirror(node* root){
	
//Enter inside the if block if root !=NULL
	
	if(root){
		
		//recursively call the left and right subtree
		
		mirror(root->left);
		mirror(root->right);
		
		//swap the left and right link 
	    
	    node* temp = root->left;
	    root->left = root->right;
	    root->right = temp;
	}
}
