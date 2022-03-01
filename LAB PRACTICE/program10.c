#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define MAX 30
struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};
#define MALLOC(p, s, t)                  \
    p = (t)malloc(s);                    \
    if (p == NULL)                       \
    {                                    \
        printf("insufficient memory\n"); \
        exit;                            \
    }
typedef struct tree *node;
node create(node, int);
node createtree(node, int);
void preorder(node);
void inorder(node);
void postorder(node);
int search(node, int);
int n;
int main()
{
    int done = 0, choice, key, flag;
    node p = NULL;
    while (!done)
    {
        printf("1.create\t2.preorder\t3.inorder\t4.postorder\t5.search\t6.exit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the number of data elements\n");
            scanf("%d", &n);
            p = create(p, n);
            break;
        case 2:
            preorder(p);
            printf("\n");
            break;
        case 3:
            inorder(p);
            printf("\n");
            break;
        case 4:
            postorder(p);
            printf("\n");
            break;
        case 5:
            printf("enter the key element to search\n");
            scanf("%d", &key);
            flag = search(p, key);
            if (flag == 1)
                printf("key found\n");
            else
                printf("key not found\n");
            break;
        case 6:
            done = 1;
            break;
        default:
            printf("invalid choice\n");
        }
    }
    return 0;
}
node create(node root, int n)
{
    int i, e;
    node q;
    if (root == NULL)
    {
        for (i = 1; i <= n; i++)
        {
            printf("enter data element\n");
            scanf("%d", &e);
            root = createtree(root, e);
        }
        return root;
    }
    else
        printf("tree has already some data\n");
}
node createtree(node p, int e)
{
    if (p == NULL)
    {
        MALLOC(p, sizeof(struct tree), node);
        p->info = e;
        p->left = p->right = NULL;
    }
    else if (e == p->info)
        printf("duplicate entry\n");
    else if (e < p->info)
        p->left = createtree(p->left, e);
    else
        p->right = createtree(p->right, e);
    return p;
}
int search(node p, int key)
{
    if (p == NULL)
        return 0;
    else if (key == p->info)
        return 1;
    else if (key < p->info)
        return search(p->left, key);

    else
        return search(p->right, key);
}
void preorder(node p)
{
    if (p != NULL)
    {
        printf("%d\t", p->info);
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(node p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d\t", p->info);
        inorder(p->right);
    }
}
void postorder(node p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d\t", p->info);
    }
}