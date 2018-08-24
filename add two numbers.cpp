#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int ten = 1;
        int answer = 0;
        ListNode *answerList = new ListNode(0);
        ListNode *calculateNode = answerList;

        while(l1->next!=NULL && l2->next!=NULL){
            answer += (l1->val+l2->val) * ten;
            l1 = l1->next;
            l2 = l2->next;
            ten *= 10;
        }
        while(l1->next!=NULL){
            answer += l1->val * ten;
            l1 = l1->next;
            ten *= 10;
        }
        while(l2->next!=NULL){
            answer += l2->val * ten;
            l2 = l2->next;
            ten *= 10;
        }
        while(answer>0){
            calculateNode->val = answer % 10;
            answer /= 10;
            if(answer > 0){
            calculateNode->next = new ListNode(0);
            calculateNode = calculateNode->next;
            }
        }
        return answerList;
    }
};

int main(){
    Solution s;
    int input1,input2;
    ListNode *l1Head = new ListNode(0);
    ListNode *l2Head = new ListNode(0);

    ListNode *operation = nullptr;

    cout << "Please Input the First Number:" << endl;
    operation = l1Head;
    while(cin>>input1){
        operation->val = input1;
        operation->next = new ListNode(0);
        operation = operation->next;
    }
    cin.clear();
    cout << "Please Input the Second Number:" << endl;
    operation = l2Head;
    while(cin>>input2){
        operation->val = input2;
        operation->next = new ListNode(0);
        operation = operation->next;
    }
    ListNode *answer = s.addTwoNumbers(l1Head, l2Head);
    vector<int> ans;
    cout << '[';
    while(answer!=NULL){
        cout << answer->val;
        answer = answer->next;
        if(answer!=NULL)
            cout << ',';
    }
    cout << ']';
    system("pause");
    return 0;
}