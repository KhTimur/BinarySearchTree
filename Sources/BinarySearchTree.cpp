#include "../include/BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(const std::initializer_list <T> &list)
{
    for (auto& value : list)
        insert(value);
}

BinarySearchTree::~BinarySearchTree()
{
    delete root_;
    size_ = 0;
}

