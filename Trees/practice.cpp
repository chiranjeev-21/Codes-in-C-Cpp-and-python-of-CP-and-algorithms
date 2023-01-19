#include<iostream>
#define SPACE 10

using namespace std;

class TreeNode {
  public:
    int value;
  TreeNode * left;
  TreeNode * right;

  TreeNode() {
    value = 0;
    left = NULL;
    right = NULL;
  }
  TreeNode(int v) {
    value = v;
    left = NULL;
    right = NULL;
  }
};

  bool isTreeEmpty(TreeNode *(&root)) {
    if (root == NULL) {
      return true;
    } else {
      return false;
    }
  }

  void insertNode(TreeNode *(&root),TreeNode * new_node) {
    if (root == NULL) {
      root = new_node;
      cout << "Value Inserted as root node!" << endl;
    } else {
      TreeNode * temp = root;
      while (temp != NULL) {
        if (new_node -> value == temp -> value) {
          cout << "Value Already exist," <<
            "Insert another value!" << endl;
          return;
        } else if ((new_node -> value < temp -> value) && (temp -> left == NULL)) {
          temp -> left = new_node;
          cout << "Value Inserted to the left!" << endl;
          break;
        } else if (new_node -> value < temp -> value) {
          temp = temp -> left;
        } else if ((new_node -> value > temp -> value) && (temp -> right == NULL)) {
          temp -> right = new_node;
          cout << "Value Inserted to the right!" << endl;
          break;
        } else {
          temp = temp -> right;
        }
      }
    }
  }
  TreeNode* insertRecursive(TreeNode *(&r), TreeNode *new_node)
	{
		if(r==NULL)
		{
			r=new_node;
			cout <<"Insertion successful"<<endl;
			return r;
		}
	
		if(new_node->value < r->value)
		{
			r->left = insertRecursive(r->left,new_node);
		}
		else if (new_node->value > r->value)  
		{
			r->right = insertRecursive(r->right,new_node);
		}
	   else
	   {
	     	cout << "No duplicate values allowed!" << endl;
	     	return r; 
		}
		return r;
	}

  void printPreorder(TreeNode *(&r))
  {
    if (r == NULL)
      return;
    cout << r -> value << " ";
    printPreorder(r -> left);
    printPreorder(r -> right);
  }

  void printInorder(TreeNode *(&r))
  {
    if (r == NULL)
      return;
    printInorder(r -> left);
    cout << r -> value << " ";
    printInorder(r -> right);
  }
  
  void printPostorder(TreeNode *(&r))
  {
    if (r == NULL)
      return;
    printPostorder(r -> left);
    printPostorder(r -> right);
    cout << r -> value << " ";
  }

  TreeNode * iterativeSearch(TreeNode *(&root),int v) {
    if (root == NULL) {
      return root;
    } else {
      TreeNode * temp = root;
      while (temp != NULL) {
        if (v == temp -> value) {
          return temp;
        } else if (v < temp -> value) {
          temp = temp -> left;
        } else {
          temp = temp -> right;
        }
      }
      return NULL;
    }
  }

  TreeNode * recursiveSearch(TreeNode *(&r), int val) {
    if (r == NULL || r -> value == val)
      return r;

    else if (val < r -> value)
      return recursiveSearch(r -> left, val);

    else
      return recursiveSearch(r -> right, val);
  }

  int height(TreeNode *(&r)) {
    if (r == NULL)
      return -1;
    else {
      int lheight = height(r -> left);
      int rheight = height(r -> right);

      if (lheight > rheight)
        return (lheight + 1);
      else return (rheight + 1);
    }
  }

  void printGivenLevel(TreeNode *(&r), int level) {
    if (r == NULL)
      return;
    else if (level == 0)
      cout << r -> value << " ";
    else // level > 0  
    {
      printGivenLevel(r -> left, level - 1);
      printGivenLevel(r -> right, level - 1);
    }
  }
  void printLevelOrderBFS(TreeNode *(&r)) {
    int h = height(r);
    for (int i = 0; i <= h; i++)
      printGivenLevel(r, i);
  }

  TreeNode * minValueNode(TreeNode * node) {
    TreeNode * current = node;
    while (current -> left != NULL) {
      current = current -> left;
    }
    return current;
  }

  TreeNode * deleteNode(TreeNode *(&r), int v) {
    if (r == NULL) {
      return NULL;
    }
    else if (v < r -> value) {
      r -> left = deleteNode(r -> left, v);
    }
    else if (v > r -> value) {
      r -> right = deleteNode(r -> right, v);
    }
    else {
      if (r -> left == NULL) {
        TreeNode * temp = r -> right;
        delete r;
        return temp;
      } else if (r -> right == NULL) {
        TreeNode * temp = r -> left;
        delete r;
        return temp;
      } else {
        TreeNode * temp = minValueNode(r -> right);
        r -> value = temp -> value;
        r -> right = deleteNode(r -> right, temp -> value);
      }
    }
    return r;
  }


int main() {
    
TreeNode * root=NULL;
  int option, val;

  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Print/Traversal BST values" << endl;
    cout << "5. Height of Tree" << endl;
    cout << "6. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;
    cin >> option;
    TreeNode * new_node = new TreeNode();
    switch (option) {
    case 0:
      break;
    case 1:
      	cout <<"INSERT"<<endl;
	      cout <<"Enter VALUE of TREE NODE to INSERT in BST: ";
	      cin >> val;
	      new_node->value = val;
	      insertNode(root,new_node);
	      cout<<endl;
    		break;
    case 2:
      cout << "SEARCH" << endl;
      cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> val;
      new_node = recursiveSearch(root, val);
      if (new_node != NULL) {
        cout << "Value found" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 3:
      cout << "DELETE" << endl;
      cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
      cin >> val;
      new_node = iterativeSearch(root,val);
      if (new_node != NULL) {
        deleteNode(root, val);
        cout << "Value Deleted" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 4:
      	      cout <<"PRE-ORDER: ";
      	      printPreorder(root);
      	      cout<<endl;
      	      cout <<"IN-ORDER: ";
      	      printInorder(root);
      	      cout<<endl;
      	      cout <<"POST-ORDER: ";
      	      printPostorder(root);
      break;
    case 5:
      cout << "TREE HEIGHT" << endl;
      cout << "Height : " << height(root) << endl;
      break;
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
  } while (option != 0);

  return 0;
}