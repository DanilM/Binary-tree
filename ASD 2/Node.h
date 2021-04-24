#pragma once
class Node
{
private:
	Node* leftSon;
	Node* rightBrother;
	Node* parent;
	int value;
	int weight;
	int height;
public:
	Node(int tmpValue);
	Node(Node* perentPtr, int tmpValue, int weightNode, int heightNode);
	~Node();
	void SetLeftPtr(Node* leftPtr);
	void SetRightPtr(Node* rightPtr);
	void SetValue(int tmpValue);
	int GetValue();
	void SetSon(int sonValue, int weightSon);
	void SetBrother(int brotherValue, int weightBrother);
	void SetWeight(int newWeight);
	int GetWeight();
	int GetHeight();
	Node* GetSon();
	Node* GetBrother();
};

