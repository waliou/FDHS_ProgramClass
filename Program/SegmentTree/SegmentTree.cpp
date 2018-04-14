/*
	PLEASE USING C++11 or newer
*/
#include <iostream> 
#include <vector>
using namespace std;
class Node{
	private:
		int left;
		int right;
		int max;
		Node* lchild;
		Node*rchild;
	public:
		Node(int l , int r){
			left = l;
			right = r;
			max = -10e8;
			lchild = NULL;
			rchild = NULL;
		}
		friend class Seg;
};
class Seg{
	private:
		Node* root;
		void _build( vector<int>::iterator it , Node *cur){
			if(cur->left == cur->right){
				for(int i=0;i<cur->left;i++)
					it++;
				cur->max = *it;
			}
			else{
				if(cur->lchild == NULL){
					cur->lchild = new Node(cur->left,(cur->left+ cur->right)/2);
					_build(it,cur->lchild);
				}
				if(cur->rchild==NULL){
					cur->rchild = new Node((cur->left+ cur->right)/2+1,cur->right);
					_build(it,cur->rchild);
				}
				cur->max = max(cur->lchild->max, max(cur->rchild->max , cur->lchild->max+cur->rchild->max ));
			}
		}
		void _destruct(Node * cur){
			if(cur->lchild)
				_destruct(cur->lchild);
			if(cur->rchild)
				_destruct(cur->rchild);
			delete cur;
		}
		int _search(Node* cur,int left,int right){
			if(left==cur->left&&right==cur->right)
				return cur->max;
			else{
				if(cur->lchild->left<=left&&right<=cur->lchild->right)//完全在左子樹中 
					return _search(cur->lchild,left,right);
				else if(cur->rchild->left<=left&&right<=cur->rchild->right)//完全在右子樹中 
					return _search(cur->rchild,left,right);
				else
					return _search(cur->lchild,left,cur->lchild->right)+_search(cur->rchild,cur->rchild->left,right);
			}
		}
		
	public:
		Seg(vector<int>& seq){
			root = new Node(0,seq.size()-1);
			_build(seq.begin(),root);
		}
		~Seg(){
			if(root)
				_destruct(root);
		}
		int search(int left,int right){
			if(left>right)
				swap(left,right);
			if(root->left<=left&&right<=root->right){
				return _search(root,left,right);
			}
			else{
				cout<<"Wrong range!!"<<endl;
				return -10e8;
			}
				
		}
};
int main(){
	vector<int> a = {1,2,3,4,5,6,7,8};
	Seg tree = Seg(a);
	cout<<tree.search(0,7)<<endl;
	cout<<tree.search(1,4)<<endl;
	cout<<tree.search(5,5)<<endl;
	cout<<tree.search(4,7)<<endl;
	return 0;
}
