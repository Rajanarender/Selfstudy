#include<iostream>
using namespace std;
#include<string.h>

/* Link list node */
struct Node
{
	//string data;
	char data[10];
	Node* next;
};

// A utility function to check if str is palindrome
// or not
bool isPalindromeUtil(string str)
{
	int length = str.length();

	// Match characters from beginning and
	// end.
	for (int i=0; i<length/2; i++)
		if (str[i] != str[length-i-1])
			return false;

	return true;
}

// Returns true if string formed by linked
// list is palindrome
bool isPalindrome(Node *node)
{
	// Append all nodes to form a string
	//string str = "";
        char s[10];
        int i=0;
	while (node != NULL)
	{
                strcat(s[i],node->data);
                i++;
		//str.append(node->data);
		node = node->next;
	}
        cout<<s<<endl;
	// Check if the formed string is palindrome
	//return isPalindromeUtil(str);
}

// A utility function to print a given linked list
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data << " -> ";
		node = node->next;
	}
}

/* Function to create a new node with given data */
Node *newNode(const char *str)
{
	Node *new_node = new Node;
	new_node->data = str;
	new_node->next = NULL;
	return new_node;
}

/* Driver program to test above function*/
int main()
{
	Node *head = newNode("a");
	head->next = newNode("bc");
	head->next->next = newNode("d");
	head->next->next->next = newNode("dcb");
	head->next->next->next->next = newNode("a");

	isPalindrome(head)? cout<<"true\n":cout<<"false\n";

	return 0;
}

