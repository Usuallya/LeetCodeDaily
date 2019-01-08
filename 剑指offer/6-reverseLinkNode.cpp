
  struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
       }
  };


#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
    public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<ListNode*> nodes;
        vector<int> rtVector;
        ListNode *pNode=head;
        while(pNode!=nullptr){
            nodes.push(pNode);
            pNode=pNode->next;
        }
        
        while(!nodes.empty()){
            pNode = nodes.top();
            rtVector.push_back(pNode->val);
            nodes.pop();
        }   
        return rtVector;
    }
    
    vector<int> printListFromTailToHead1(ListNode* head){
        vector<int> rt1Vector;
        add2Vector(head,rt1Vector);
        return rt1Vector;
    }

    void add2Vector(ListNode* head,vector<int> rtVector){
        if(head==nullptr)
            return;
        else{
            add2Vector(head->next,rtVector);
            rtVector.push_back(head->val);
        }
    }

};
int main(){
    
}