#include "Node.h"


Node::Node(int tmpValue)
{
	value = tmpValue;
	leftSon = nullptr;
	rightBrother = nullptr;
	parent = nullptr;
	weight = 999;
	height = 1;
}

Node::Node(Node* parentPtr, int tmpValue, int weightNode, int heightNode)
{
	parent = parentPtr;
	value = tmpValue;
	leftSon = nullptr;
	rightBrother = nullptr;
	weight = weightNode;
	height = heightNode;
}

Node::~Node()
{
	delete leftSon;
	delete rightBrother;
}

void Node::SetLeftPtr(Node* leftPtr)
{
	leftSon = leftPtr;
}

void Node::SetRightPtr(Node* rightPtr)
{
	rightBrother = rightPtr;
}

void Node::SetValue(int tmpValue)
{
	value = tmpValue;
}

int Node::GetValue()
{
	return value;
}

void Node::SetSon(int sonValue, int weightSon)
{
	leftSon = new Node(this, sonValue, weightSon, height + 1);
}

void Node::SetBrother(int brotherValue, int weightBrother)
{
	rightBrother = new Node(this, brotherValue, weightBrother, height + 1);
}

void Node::SetWeight(int newWeight)
{
	weight = newWeight;
}

int Node::GetWeight()
{
	return weight;
}

int Node::GetHeight()
{
	return height;
}

Node* Node::GetSon()
{
	return leftSon;
}

Node* Node::GetBrother()
{
	return rightBrother;
}