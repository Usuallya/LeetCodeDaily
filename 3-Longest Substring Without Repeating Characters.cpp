#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;


//到头来还是得自己实现一个hashtable啊。。。 赶紧学STL。。。
class HashTable4Character{
    private:
    //这里为什么必须用static?
    static int const count = 26;
    char characters[count];
    public:
    HashTable4Character(){
        for (int i = 0; i < count;i++)
            characters[i] = NULL;
    }
    void add(char c);
    bool contain(char c);
    void del(char c);
};
void HashTable4Character::add(char c){
    characters[c % count] = c;
}

void HashTable4Character::del(char c){
    characters[c % count] = NULL;
}

bool HashTable4Character::contain(char c){
    if(characters[c%count]==NULL)
        return false;
    else
        return true;
}


/*
第一种解法用到的自建hashtable
class HashTable{
    private:
    static int const count = 26;
    public:
    vector<CharacterNode> str = (count, new CharacterNode());
    bool save(string s){
        auto op = s.begin();
        while(op!=s.end()){
            if(!contain(*op)){
                str[(*op % count)].next = new CharacterNode(op - s.begin());
                str[(*op % count)].position = 1;
            }
            else
            {
                str[(*op % count)].position += 1;
                CharacterNode* last = getLastPoint(*op);
                last->next = new CharacterNode();
                last = last->next;
                last->position = op - s.begin();
            }
            op++;
        }
    }

    bool contain(char c){
        if(str[c%count].position==0){
            return false;
        }else
            return true;
    }

    CharacterNode* getLastPoint(char c){
        CharacterNode *ls = str[c % count].next;
        while(ls->next!=nullptr && ls->next!=NULL)
            ls = ls->next;
        return ls;
    }

};


typedef struct CharacterNode{
    int position;
    CharacterNode *next;
    CharacterNode(){
        position = 0;
        next = nullptr;
    }
    CharacterNode(int pos){
        position = pos;
        next = nullptr;
    }
}Character;

*/
class Solution {
public:



/*
        //求解最长不重复子串，暴力解法时间复杂度O(N3)，需要有更好的解法
        //1、考虑哈希，将每个字符作散列，以链表形式组织重复字符，并存储其出现位置，计算最大不重复数
                abcabcbb
                a b c
                0 1 2
                3 4 5
                  6
                  7

                找出一个最长相邻公共不重复区间

                p w k e
                0 1 3 4
                  2
                  5
        int lengthOfLongestSubstring(string s){
    //自己的哈希表解法
    //1. 将字符串散列存储，以链表形式解决冲突，形成字符表
    HashTable hash;
    hash.save(s);
    //2.存储每个字符的最长相邻不重复区间
    static int maxNeiborRange[26];
    auto op = hash.str.begin();
    while(op!=hash.str.end()){
        if(*op.position!=0)
            maxNeiborRange[op - hash.str.begin()] = hash.getMaxNeiborRange(*op);
        op++;
    }
    //3.得到公共的最长相邻不重复区间，即为maxLength
}

        这个思路应该走不下去，因为无法确认哪一个区间内存在这个串，所以相当于还是要一个个遍历，一个个试，那么时间复杂度也就
        提升不了
        */
        //2、还是写一下暴力解法吧先----------------------果然超时了 O(N3)惹不起啊
        /*
        int maxLength = 1;
        int begin = 0,op=begin;

        if(s.empty())
            return 0;
        while(begin!=s.length()){
            op = begin;
            while(op!=s.length()){
                if(isRepeating(begin, op,s))
                    break;
                else{
                    if(op-begin+1>maxLength)
                        maxLength = op - begin +1;
                }
                op++;
            }
            begin++;
        }
        return maxLength;
        
    }
*/
    /*
    bool isRepeating(int begin,int op,string s){
        bool result = false;
        for (begin; begin < op;begin++){
            if(s[begin]==s[op])
                result = true;
        }
            return result;
    }
    */
    int lengthOfLongestSubstring(string s){
        //滑动窗口解法：实际上就是一点转变：上面第二个while循环不要每次将op从begin开始，而是将begin到op视为一个窗口
        //只关注当前op所指字符是否在子字符串中即可
        //单纯采用滑动窗口，只能将算法整体复杂度降低到O(n2)，这是因为每次扫描子字符串依然需要O(n)，而如果在扫描子字符串时采用
        //Hash表，那么就可以将这部分降低为O(1)，从而将整体复杂度降低到O(n)
        int n = s.length();
        int begin = 0, end = 0, maxLength = 0;
        HashTable4Character hashTable;
        while(begin < n && end < n){
            if(!hashTable.contain(s[end])){
                hashTable.add(s[end++]);
                maxLength = (end - begin > maxLength) ? end - begin : maxLength;
            }else
            {
                //begin到end-1这一段一定是没有重复字符的，否则到不了这个状态，因此
                //删除s[begin]相当于为未来可能出现的s[begin]字符腾出空间，同时不会导致删除多个字符的问题
                hashTable.del(s[begin]);
                begin++;
            }
        }
        return maxLength;
    }
    int lengthOfLongestSubstring(string s1,string s2){
        //KMP算法来求解最长公共子串
        return 0;
    }
};

int main(){
    string str;
    Solution s;
    //这样输入不行，如果以空格开头，str将不接收数据
    //cin >> str;
    //string不会保存\0吗？
    //str = str.substr(0, str.length() - 1);
	char c;
	while((c=cin.get())!='\n')
	{
		str=str+c;
	}
    cout << str<<endl;
    cout << s.lengthOfLongestSubstring(str) << endl;
    system("pause");
    return 0;
}