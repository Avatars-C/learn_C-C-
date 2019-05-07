/**
 * book:数据结构与算法 p95 
 * 
**/
#include "BinaryTree.h"

template <typename Comparable>
BinarySearchTree<Comparable>::BinarySearchTree()
{
}

template <typename Comparable>
BinarySearchTree<Comparable>::
    BinarySearchTree( const BinarySearchTree & rhs )
{
}

template <typename Comparable>
BinarySearchTree<Comparable>::
    ~BinarySearchTree()
{
}
/**
 * Returns true if x is found in the tree 
**/
template <typename Comparable>
bool BinarySearchTree<Comparable>::
    contains( const Comparable & x ) const
{
    return contains( x, root );
} 

/**
 *Insert x into the tree; duplicates are ignored. 
**/
template <typename Comparable>
void BinarySearchTree<Comparable>::
    insert( const Comparable & x )
    {
        insert ( x, root);
    }


template <typename Comparable>
void BinarySearchTree<Comparable>::
    remove()
    {

    }