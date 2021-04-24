#include <iostream>
#include "Node.h"

int value = 0;

void DirectTraversal(Node* currentNode)
{
    if (currentNode->GetSon() != nullptr && currentNode->GetBrother() != nullptr)
    {
        std::cout << currentNode->GetValue() << " ";
        DirectTraversal(currentNode->GetSon());
        DirectTraversal(currentNode->GetBrother());
    }
    else
    {
        std::cout << currentNode->GetValue() << " ";
    }
}

void SymmetricTraversal(Node* currentNode)
{
    if (currentNode->GetSon() != nullptr && currentNode->GetBrother() != nullptr)
    {
        DirectTraversal(currentNode->GetSon());
        std::cout << currentNode->GetValue() << " ";
        DirectTraversal(currentNode->GetBrother());
    }
    else
    {
        std::cout << currentNode->GetValue() << " ";
    }
}

void SetBinaryTree(Node* root, int height)
{
    if (height > 0)
    {
        root->SetSon(value++, value * 10);
        root->SetBrother(value++, value * 10);
        SetBinaryTree(root->GetSon(), height - 1);
        SetBinaryTree(root->GetBrother(), height - 1);
    }
}

int main()
{
    Node* RootA = new Node(value);
    value = 1;
    Node* currentNode = RootA;
    SetBinaryTree(RootA, 3);
    DirectTraversal(RootA);
    delete RootA;
}
