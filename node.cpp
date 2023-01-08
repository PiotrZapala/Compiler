#include <vector>

enum class NodeType {
    IF, BINARY_OPERATOR
};

class Node {
public:
    NodeType m_type;
    std::vector<Node*> m_children;
    virtual ~Node();
    Node(NodeType type);
    void addChild(Node* node);

};

class IfNode: public Node {
    Node* m_condition;
    Node* m_body;
    Node* m_else;
public:
    IfNode(Node* condition, Node* body) 
    :
        Node{NodeType::IF},
        m_condition{condition},
        m_body{body},
        m_else{nullptr}
    {
        addChild(condition);
        addChild(body);
    }
};

enum class BinaryOperator {
    ASSIGN, 
    ADD,
    MULTIPLY,
    EQUALS
};

class BinaryOperatorNode : public Node {
    BinaryOperator m_operator;
    Node* m_left;
    Node* m_right;
public:
    BinaryOperatorNode(BinaryOperator op, Node* left, Node* right) 
    : 
        Node{NodeType::BINARY_OPERATOR},
        m_operator{op}, 
        m_left{left},
        m_right{right}
    { 
        addChild(left);
        addChild(right);
    }
};
