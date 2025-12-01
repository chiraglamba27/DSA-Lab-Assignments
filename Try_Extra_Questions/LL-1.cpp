#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

Node* getIntersectionNode(Node *A, Node *B) {
    Node* firstCurrNode = A;
	while (firstCurrNode != NULL) {
		 Node* secondCurrNode = B;
		while (secondCurrNode != NULL) {
			if (firstCurrNode == secondCurrNode) {
				return firstCurrNode;
			}
			secondCurrNode = secondCurrNode->next;
		}
		firstCurrNode = firstCurrNode->next;
	}
	return NULL;
}
