#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

};


class Tree
{
public:
    Node* root;


    Tree()
    {
        root=NULL;

    }

    void insertNode(int x)
    {
        Node* newNode=new Node;
        Node* parent;
        newNode->data=x;
        newNode->left=NULL;
        newNode->right=NULL;

        if (root==NULL)
        {
            root=newNode;
        }
        else
        {
            Node* temp;
            temp=root;
            while(temp!=NULL)
            {
                parent=temp;
                if(x>temp->data)
                {
                    temp=temp->right;
                }
                else
                {
                    temp=temp->left;
                }
            }
            if(x>parent->data)
            {
                parent->right=newNode;
            }
            else
            {
                parent->left=newNode;
            }
        }
    }



    void getTree()
    {
        printTree(root);

    }

    void printTree(Node* temp)
    {
        if(temp!=NULL)
        {/*
            printTree(temp->left);
            cout<<temp->data<<endl;
            printTree(temp->right);

          //  cout<<"*******INORDER*******"<<endl;

            printTree(temp->left);
            printTree(temp->right);
            cout<<(temp->data)<<endl;;
        */
            //cout<<"*******PREORDER*******"<<endl;
            cout<<(temp->data)<<endl;;
            printTree(temp->left);
            printTree(temp->right);

        }
    }


};

int main()
{
    Tree t1;
    t1.insertNode(20);
    t1.insertNode(10);
    t1.insertNode(5);
    t1.insertNode(15);
    t1.insertNode(40);
    t1.insertNode(45);
    t1.insertNode(30);

    t1.getTree();

    return 0;
}
