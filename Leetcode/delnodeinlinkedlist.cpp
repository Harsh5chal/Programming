// Find next node using next pointer
//struct Node *temp  = node_ptr->next;

// Copy data of next node to this node
//node_ptr->data  = temp->data;

// Unlink next node
//node_ptr->next  = temp->next;

// Delete next node
//free(temp);

ListNode* temp=node->next;
*node = *temp;
delete temp;
