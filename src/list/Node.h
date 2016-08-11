typedef struct T_Node Node;

struct T_Node* 
new_Node(int data, struct T_Node *follower);

int 
data_Node(const struct T_Node *node);

struct T_Node*
next_Node(struct T_Node *node);