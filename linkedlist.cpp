class Node {
    public:
    char letter;
    Node* next;
    Node* prev;
    Node(char letter) : letter(letter), next(nullptr), prev(nullptr) {}
};

class LinkedList {
    private:
    Node* head;
    public:
    void insert(char afterLetter, LinkedList& insertList) {
        bool middle = false;
        Node* after;
        Node* current = head;
        while (current != nullptr) {
            if (current->letter == afterLetter) {
                break;
            }
            current = current->next;
        }//determines when in the original list to start inserting
        if (current->next != nullptr) {
        middle = true;
        after = current->next;
        }

        Node *insertCur =  insertList.head;
        Node* old = insertCur;
        Node *newInsert =  new Node(insertList.head->letter);
        while (insertCur != nullptr) {
            current->next = newInsert;
            current = current->next;
            old = insertCur;
            insertCur = insertCur->next;
            delete old;
            newInsert = new Node(insertCur->next->letter);
        }//inserts the entire insertlist into current list while deleting the insertlist as it goes
        current->next = newInsert;
        if (middle) {
        current->next->next = after;
        } //connecting the rest of the original list back
        else {
            newInsert->next = nullptr;
        }//if our insert was at the end of the list, add nullptr to the end
    }
};



int main() {
    return 0;
}