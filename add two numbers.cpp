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
        /*
         *第三版 最终代码
         * 
         */
        int op1 = 0, op2 = 0,carry = 0,sum = 0;
        ListNode *answer = new ListNode(0);
        ListNode *cur = answer;
        while(l1!=NULL || l2!=NULL){
            op1 = (l1 != NULL) ? l1->val : 0;
            op2 = (l2 != NULL) ? l2->val : 0;
            sum = op1 + op2 + carry;
            //放弃头部的0结点，直接从cur->next开始存储
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            carry = (op1 + op2 + carry > 9) ? 1 : 0;
            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
            /*
             *这里事实上也可以采用类似的弃头部的方法，减少代码量
            if(l1!=NULL || l2!=NULL){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
            */
            
        }
        if(carry!=0)
            cur->next = new ListNode(carry);
        //放弃头部的0结点
        return answer->next;
        /*
         *
         * 第二版，虽然AC了但是代码不够简洁，主要是判断两个链表是否读取完了这一步过于繁琐
         * 
        ListNode *answer = new ListNode(0);
        ListNode *cur = answer;
        int up=0;
        while(l1!=NULL && l2!=NULL){
            cur->val = (l1->val + l2->val+up) % 10;
            up = (l1->val + l2->val+up) >= 10 ? 1 : 0;
            l1 = l1->next;
            l2 = l2->next;
            //当这两个数字链表至少有一个的下一位数字存在时，才为答案链表分配一个新的空间
            if(l1!=NULL || l2!=NULL){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        while(l1!=NULL){
            cur->val = (l1->val + up) % 10;
            up = (l1->val + up) >= 10 ? 1 : 0;
            l1 = l1->next;
            if(l1!=NULL){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        while(l2!=NULL){
            cur->val = (l2->val + up) % 10;
            up = (l2->val + up) >= 10 ? 1 : 0;
            l2 = l2->next;
            if(l2!=NULL){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        if(up!=0){
            cur->next = new ListNode(up);
        }
        return answer;
        */
        /*
         *
         * 第一版：试图用整型来保存计算结果是行不通的，较大的数字会超出整型表示范围，导致失败
         * 
        while(l1->next!=NULL && l2->next!=NULL){
            answerVal += (l1->val + l2->val) * ten;
            ten *= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1->next!=NULL){
            answerVal += l1->val * ten;
            ten *= 10;
            l1 = l1->next;
        }
        while(l2->next!=NULL){
            answerVal += l2->val * ten;
            ten *= 10;
            l2 = l2->next;
        }

        //接下来将答案逆序处理成链表
        while(answerVal>0){
            cur->val = answerVal % 10;
            answerVal /= 10;
            if(answerVal>0){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        */
    }
};

int main(){

    Solution s;
    int input1, input2;
    ListNode *l1 = new ListNode(0);
    ListNode *l2 = new ListNode(0);
    ListNode *p1=l1, *p2=l2;
    ListNode *answer;
    cout << "Please Input The First Number:" << endl;
    while(cin>>input1){
        p1->next = new ListNode(input1);
        p1 = p1->next;
    }
    cin.clear();
    cout << "Please Input The Second Number:" << endl;
    while(cin>>input2){
        p2->next = new ListNode(input2);
        p2 = p2->next;
    }
    //这样保证了尾结点存的是有效数字，而头部的无效的0结点将会被直接舍弃
    answer = s.addTwoNumbers(l1->next, l2->next);
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
    /*
    LeetCode上传入的链表尾部没有多余的0结点，因此这里的数据输入是有问题的，必须改掉
    Solution s;
    int input1,input2;
    ListNode *l1Head = new ListNode(0);
    ListNode *l2Head = new ListNode(0);

    ListNode *operation = nullptr;

    cout << "Please Input The First Number:" << endl;
    operation = l1Head;
    while(cin>>input1){
        operation->val = input1;
        operation->next = new ListNode(0);
        operation = operation->next;
    }
    cin.clear();
    cout << "Please Input The Second Number:" << endl;
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
    */
}