#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    // constructor
    trieNode(char ch)
    {
        data = ch;

        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie
{
public:
    trieNode *root;

    // constructor for insertion of string as first character is null
    trie()
    {
        root = new trieNode('\0');
    }

    void insertUtil(trieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            // for last node set bool isTerminal = true
            root->isTerminal = true;
            return;
        }

        // index of word
        // all word are in caps
        int index = word[0] - 'A';

        trieNode *child;

        // word is present in trie
        if (root->children[index] != NULL)
        {
            // update child and move next
            child = root->children[index];
        }
        // when word is  absent
        else
        {
            // create a child node for word
            child = new trieNode(word[0]);
            // this new root will be child
            root->children[index] = child;
        }

        // recursive call
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(trieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        trieNode *child;

        // word is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // word is not present
        else
        {
            return false;
        }

        // recursive call
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
};

int main()
{

    // string word;
    // cin >> word;

    // cout << word.substr(2);

    trie *t = new trie();

    t->insertWord("abcd");

    cout << "present or not : " << endl;
    bool ans = t->searchWord("abcd");

    if (ans)
    {
        cout << "presnt";
    }

    else
    {
        cout << "not";
    }

    return 0;
}