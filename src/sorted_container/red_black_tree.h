//
// Created by Lok on 04.12.2022.
//

#ifndef S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_
#define S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_

namespace s21 {

enum node_colors { RED, BLACK };

template <class T> struct Node {

  Node<T> *parent_;
  Node<T> *left_;
  Node<T> *right_;
  enum node_colors color_;
  T *data_;
  Node()
      : parent_(nullptr), left_(nullptr), right_(nullptr), color_(BLACK),
        data_(nullptr) {}
  explicit Node(const T &data)
      : parent_(nullptr), left_(nullptr), right_(nullptr), color_(RED),
        data_(data) {}
};
template <class T> class Tree {

public:
  Tree() { root_ = nullptr; }

  Tree &operator=(const Tree &other) {
    //    if (this->root_ != other.root_)
    this->root_ = other.root_;
    return *this;
  }

  ~Tree() = default;

  void insert(const T &data) {
    Node<T> temp = Node<T>();
    if (root_ == nullptr) {
      root_ = std::swap(temp);
    } else if (temp > root_) {
      // right
    } else if (temp < root_) {
      // left
    }
  }

  Node<T> *GetRoot() { return this->root_; }

private:
  Node<T> *root_;
};
} // namespace s21

#endif // S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_
