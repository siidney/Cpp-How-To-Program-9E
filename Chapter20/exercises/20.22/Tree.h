/*
 * =====================================================================================
 *
 *       Filename:  Tree.h
 *
 *    Description:  Fig. 20.21 - Template Tree class definition
 *
 *        Version:  1.0
 *        Created:  14/03/17 15:47:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "TreeNode.h"

#include <iostream>

// Tree class-template definition
template <typename NODETYPE>
class Tree {
    public:
        Tree();

        void insertNode(const NODETYPE &);
        void preOrderTraversal() const;
        void inOrderTraversal() const;
        void postOrderTraversal() const;
        void deleteNode(const NODETYPE &);

    private:
        TreeNode<NODETYPE> *rootPtr;

        // utility functions
        void insertNodeHelper(TreeNode<NODETYPE> **, const NODETYPE &);
        void preOrderHelper(TreeNode<NODETYPE> *) const;
        void inOrderHelper(TreeNode<NODETYPE> *) const;
        void postOrderHelper(TreeNode<NODETYPE> *) const;
        void deleteNodeHelper(TreeNode<NODETYPE> *, const NODETYPE &);
        TreeNode<NODETYPE>* locateNode(TreeNode<NODETYPE> *, const NODETYPE&) const;
        TreeNode<NODETYPE>* getParentNode(TreeNode<NODETYPE> *, const NODETYPE&) const;
        bool deleteLeafNode(TreeNode<NODETYPE> *, const NODETYPE&);
        bool deleteNodeOneChild(TreeNode<NODETYPE> *, const NODETYPE&);
        bool deleteNodeTwoChild(TreeNode<NODETYPE> *, const NODETYPE&);
};

// constructor
template <typename NODETYPE>
Tree<NODETYPE>::Tree() {
    rootPtr = 0;  // indicate tree is initially empty
}
// insert node in tree
template <typename NODETYPE>
void Tree<NODETYPE>::insertNode(const NODETYPE &value) {
    insertNodeHelper(&rootPtr, value);
}
// utility function called by insertNoode; receives a pointer
// to a pointer so that the function can modify pointer's value
template <typename NODETYPE>
void Tree<NODETYPE>::insertNodeHelper(TreeNode<NODETYPE> **ptr,
        const NODETYPE &value) {
    // subtree is empty; create new TreeNode containing value
    if (*ptr == 0) {
        *ptr = new TreeNode<NODETYPE>(value);
    } else {
        // data to insert is less than data in current node
        if (value < (*ptr)->data) {
            insertNodeHelper(&((*ptr)->leftPtr), value);
        } else {
            // data to insert is greater than data in current node
            if (value > (*ptr)->data) {
                insertNodeHelper(&((*ptr)->rightPtr), value);
            } else {  // duplicate value ignored
                std::cout << value << " dup" << std::endl;
            }
        }
    }
}
// being preorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::preOrderTraversal() const {
    preOrderHelper(rootPtr);
}
// utility function to perform preorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::preOrderHelper(TreeNode<NODETYPE> *ptr) const {
    if (ptr != 0) {
        std::cout << ptr->data << ' ';  // process node
        preOrderHelper(ptr->leftPtr);
        preOrderHelper(ptr->rightPtr);
    }
}
// begin inorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::inOrderTraversal() const {
    inOrderHelper(rootPtr);
}
// utility function to perform inorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::inOrderHelper(TreeNode<NODETYPE> *ptr) const {
    if (ptr != 0) {
        inOrderHelper(ptr->leftPtr);
        std::cout << ptr->data << ' ';
        inOrderHelper(ptr->rightPtr);
    }
}
// begin postorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::postOrderTraversal() const {
    postOrderHelper(rootPtr);
}
// utility function to perform postorder traversal of Tree
template <typename NODETYPE>
void Tree<NODETYPE>::postOrderHelper(TreeNode<NODETYPE> *ptr) const {
    if (ptr != 0) {
        postOrderHelper(ptr->leftPtr);
        postOrderHelper(ptr->rightPtr);
        std::cout << ptr->data << ' ';  // process node
    }
}

/**
 * Deletes the given tree node
 */
template <typename NODETYPE>
void Tree<NODETYPE>::deleteNode(const NODETYPE &value) {
    deleteNodeHelper(rootPtr, value);
}  // end method deleteNode

/**
 * Utility function to perform deletion of given node.
 */
template <typename NODETYPE>
void Tree<NODETYPE>::deleteNodeHelper(TreeNode<NODETYPE> *ptr, const NODETYPE &value) {
    auto node = locateNode(ptr, value);

    // node found
    if (node != nullptr) {

        // LEAF NODE
        if (node->leftPtr == nullptr && node->rightPtr == nullptr) {
            if (deleteLeafNode(node, value)) {
                std::cout << "Node " << value << " deleted." << std::endl;
            }
        // NODE WITH ONE CHILD
        } else if ((node->leftPtr != nullptr || node->rightPtr != nullptr)
         && (node->leftPtr == nullptr || node->rightPtr == nullptr)) {
            if (deleteNodeOneChild(node, value)) {
                std::cout << "Node " << value << " deleted." << std::endl;
            }
        // NODE WITH TWO CHILDREN
        } else if (node->leftPtr != nullptr && node->rightPtr != nullptr) {
            std::cout << "NODE WITH 2 CHILDREN" << std::endl;
        }

        return;

        /*
         * Node with 2 children.
         */
        /*if (node->leftPtr != nullptr && node->rightPtr != nullptr) {
            std::cout << "NODE WITH 2 CHILDREN" << std::endl;
            // 1. node to be deleted temporary pointer
            TreeNode<NODETYPE>* replacementNode = node;

            // replace node with smaller value (left)
            // find largest value less than parent's value (right).
            // Get Replacement Node.
            // walk down left subtree to the right until the pointer of right child
            // of the current node is null.
            while (replacementNode->rightPtr != nullptr) {
                replacementNode = replacementNode->rightPtr;
            }

            std::cout << replacementNode->getData() << std::endl;
            std::cout << node->getData() << std::endl;
            // 2. set pointer in parent of node being deleted to replacement node
            if (parentNode->leftPtr == node) {
                parentNode->leftPtr = replacementNode;
            } else if (parentNode->rightPtr == node) {
                std::cout << "right" << std::endl;
                parentNode->rightPtr = replacementNode;
            } else {
                std::cerr << "ERROR: Could not delete node " << node->getData() << std::endl;
            }

            // Replacement Parent
            TreeNode<NODETYPE>* replacementParent = getParentNode(replacementNode, replacementNode->getData());

            // REPLACEMENT NODE LEAF NODE
            if (replacementNode->leftPtr == nullptr) {
                // 3. set pointer in replacementParent to null
                if (replacementParent->leftPtr == replacementNode) {
                    replacementParent->leftPtr = nullptr;
                } else if (replacementParent->rightPtr == replacementNode) {
                    std::cout << "right" << std::endl;
                    replacementParent->rightPtr = nullptr;
                } else {
                    std::cerr << "ERROR: Unable to find parent of " << replacementNode->getData() << std::endl;
                }
                // REPLACEMENT NODE LEFT CHILD
            } else if (replacementNode->leftPtr != nullptr) {
                // 3. set pointer in replacementParent to replacementNode->left
                replacementParent->rightPtr = replacementNode->leftPtr;
            }

            delete replacementParent;

            // 4. set pointer of right subtree in replacement node to right subtree of
            // node to be deleted
            replacementNode->rightPtr = node->rightPtr;

            // 5. delete replacementNode
            delete replacementNode;

            std::cout << "node " << value << " deleted" << std::endl;

            return;
        }*/
    } else {
        std::cout << "Node " << value << " not found." << std::endl;
    }
}  // end method deleteNodeHelper

/**
 * Deletes the given leaf node.
 * @param TreeNode<NODETYPE>
 * @param NODETYPE
 * @return bool.
 */
template <typename NODETYPE>
bool Tree<NODETYPE>::deleteLeafNode(TreeNode<NODETYPE>* node, const NODETYPE& value) {
    auto parentNode = getParentNode(rootPtr, value);

    if (parentNode == nullptr) {
        std::cerr << "ERROR: Cannot delete head node with no children." << std::endl;
        return false;
    }
    std::cout << "LEAF NODE" << std::endl;

    if (parentNode->leftPtr == node) {
        delete parentNode->leftPtr;
        parentNode->leftPtr = nullptr;
    } else if (parentNode->rightPtr == node) {
        delete parentNode->rightPtr;
        parentNode->rightPtr = nullptr;
    }

    return true;
}  // end method deleteLeafNode

/**
 * Deletes the given node with one child.
 * @param TreeNode<NODETYPE>
 * @param NODETYPE
 * @return bool
 */
template <typename NODETYPE>
bool Tree<NODETYPE>::deleteNodeOneChild(TreeNode<NODETYPE>* node, const NODETYPE& value) {
    auto parentNode = getParentNode(rootPtr, value);

    // check if node is rootPtr
    if (parentNode == nullptr) {
        if (rootPtr == node) {
            if (node->leftPtr != nullptr) {
                rootPtr = node->leftPtr;
            } else if (node->rightPtr != nullptr) {
                rootPtr = node->rightPtr;
            }

            delete node;
        }
        return false;
    }

    std::cout << "NODE WITH ONE CHILD" << std::endl;

    std::cout << parentNode->getData() << std::endl;
    std::cout << node->getData() << std::endl;

    // find node in parent
    if (parentNode->leftPtr == node) {
        // set parent node pointer
        if (node->leftPtr != nullptr) {
            parentNode->leftPtr = node->leftPtr;
        } else if (node->rightPtr != nullptr) {
            parentNode->leftPtr = node->rightPtr;
        } else {
            std::cout << "ERROR: Failed to delete node " << node->getData() << std::endl;
            return false;
        }
    } else if (parentNode->rightPtr == node) {
        // set parent node pointer
        if (node->leftPtr != nullptr) {
            parentNode->rightPtr = node->leftPtr;
        } else if (node->rightPtr != nullptr) {
            parentNode->rightPtr = node->rightPtr;
        } else {
            std::cout << "ERROR: Failed to delete node " << node->getData() << std::endl;
            return false;
        }
        // Node is head (no parent)
    } else if (parentNode == node) {
        std::cout << "ERROR: Unable to delete parent node" << std::endl;
        return false;
    } else {
        std::cout << "ERROR: Could not delete node " << node->getData() << std::endl;
        return false;
    }

    delete node;
    return true;
}  // end method deleteNodeOneChild


/**
 * Locates the given values node.
 * @param TreeNode<NODETYPE>.
 * @param value.
 * @return TreeNoaramODETYPE> or nullptr.
 */
template <typename NODETYPE>
TreeNode<NODETYPE>* Tree<NODETYPE>::locateNode(TreeNode<NODETYPE> *ptr,
        const NODETYPE &value) const {
    if (ptr == nullptr || ptr->getData() == value) {
        return ptr;
    }

    if (value > ptr->getData()) {
        return locateNode(ptr->rightPtr, value);
    } else {
        return locateNode(ptr->leftPtr, value);
    }
}  // end method locateNode

/**
 * Locates the given nodes parent.
 * @param TreeNode<NODETYPE>.
 * @return TreeNode<NODETYPE> or nullptr.
 */
template <typename NODETYPE>
TreeNode<NODETYPE>* Tree<NODETYPE>::getParentNode(TreeNode<NODETYPE> *ptr,
        const NODETYPE &value) const {
    // empty tree or end of tree
    if (ptr == nullptr || (ptr->leftPtr == nullptr && ptr->rightPtr == nullptr)) {
        return nullptr;
    }

    // parent node found
    if ((ptr->leftPtr != nullptr && ptr->leftPtr->getData() == value)
        || (ptr->rightPtr != nullptr && ptr->rightPtr->getData() == value)) {
        return ptr;
    }

    // search left
    if (ptr->getData() > value) {
        return getParentNode(ptr->leftPtr, value);
    }
    // search right
    if (ptr->getData() < value) {
        return getParentNode(ptr->rightPtr, value);
    }
}  // end method getParentNode
