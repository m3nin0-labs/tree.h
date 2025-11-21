#include <stdio.h>
#include <stdlib.h>

#include "../src/tree.h"

int main() {
    // Create root node
    Node *root = tree(50);
    
    // Insert nodes
    insert(root, node(30));
    insert(root, node(70));
    insert(root, node(20));
    insert(root, node(40));
    insert(root, node(60));
    insert(root, node(80));
    
    // Display tree in different orders
    printf("Preorder traversal:\n");
    preorder(root);
    
    printf("\nInorder traversal:\n");
    inorder(root);
    
    printf("\nPostorder traversal:\n");
    posorder(root);
    
    // Search for a node
    printf("\nSearching for 40:\n");
    
    Node *found = search(40, root);
    if (found) {
        printf("Found node with key: %d\n", found->key);
    } else {
        printf("Node not found\n");
    }
    
    // Calculate tree height
    printf("\nTree height: %d\n", height(root));
    
    // Count nodes
    printf("Node count (preorder): %d\n", count(root, by_preorder));
    printf("Node count (inorder): %d\n", count(root, by_inorder));
    printf("Node count (postorder): %d\n", count(root, by_posorder));
    
    return 0;
}
