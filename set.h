template<typename T>
class set{
private:
	template<typename U>
	struct node{
		U val;
		node<U>*left,*right,*parent;
	};
	node<T>*head;
	int n;
public:
	set(){
		head->left=head->right=head->parent=head;
		n=0;
	}
	void insert(const T& v){
		node<T>*temp;
		temp =new node;
		temp->val=v;
		if(head->parent==head){
			head->parent=temp;
			head->left=head->right=temp;
			temp->parent=head;
			n++;
		}
		else{
//			if(temp->val<head->parent->val){
//				if(head->parent->left==head){
//					head->parent->left=temp;
//					temp->parent=head->parent->left;
//					if(head->parent->val>temp->val){
//						head->left=temp;
//					}
//					else{
//						head->right=temp;
//					}
//				}
//				else{
//					node<T>*ptr=head->parent;
//					while(1){
//						if(temp->val<ptr->val){
//							if(ptr->left==head){
//								ptr->left=temp;
//								temp->parent=ptr->left;
//								if(temp->val<head->left){
//									head->left=temp;
//								}
//								else{
//									head->right=temp;
//								}
//								n++;
//								break;
//							}
//							else{
//								ptr=ptr->left;
//							}
//						}
//						else{
//							if(ptr->right==head){
//								ptr->right=temp;
//								temp->parent=ptr->right;
//								if(temp->val<head->left){
//									head->left=temp;
//								}
//								else{
//									head->right=temp;
//								}
//								n++;
//								break;
//
//							}
//							else{
//								ptr=ptr->right;
//							}
//						}
//					}
//				}
//
//			}
//			else{
//				if(head->parent->right==head){
//					head->parent->right=temp;
//					temp->parent=head->parent->right;
//					if(head->parent->val>temp->val){
//						head->left=temp;
//					}
//					else{
//						head->right=temp;
//					}
//				}
//				else{
//					node<T>*ptr=head->parent;
//					while(1){
//						if(temp->val<ptr->val){
//							if(ptr->left==head){
//								ptr->left=temp;
//								temp->parent=ptr->left;
//								if(temp->val<head->left){
//									head->left=temp;
//								}
//								else{
//									head->right=temp;
//								}
//								break;
//							}
//							else{
//								ptr=ptr->left;
//							}
//						}
//						else{
//							if(ptr->right==head){
//								ptr->right=temp;
//								temp->parent=ptr->right;
//								if(temp->val<head->left){
//									head->left=temp;
//								}
//								else{
//									head->right=temp;
//								}
//								break;
//
//							}
//							else{
//								ptr=ptr->right;
//							}
//						}
//					}
//				}
//			}
//
//	}
	bool empty(){
		return n==0;
	}
	int size(){
		return n;
	}
};
