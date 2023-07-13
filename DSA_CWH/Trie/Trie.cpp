#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        // new memory allocation
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0) // if word finished
        {
            root->isTerminal = true;
            return;
        }
        int idx = word[0] - 'A';
        TrieNode *child;
        if (root->children[idx] != NULL) // if present
        {
            child = root->children[idx];
        }
        else // not present
        {
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }
        insertUtil(child, word.substr(1)); // recursive call
    }
    void insertWord(string word)
    {
        return insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0) // if word finished
        {
            return root->isTerminal;
        }
        int idx = word[0] - 'A';
        TrieNode *child;
        if (root->children[idx] != NULL) // if present
        {
            child = root->children[idx];
        }
        else // not present
        {
            return false;
        }
        return searchUtil(child, word.substr(1)); // recursive call
    }
    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    bool startsUtil(TrieNode *root, string word)
    {
        if (word.length() == 0) // if word finished
        {
            return 1;
        }
        int idx = word[0] - 'A';
        TrieNode *child;
        if (root->children[idx] != NULL) // if present
        {
            child = root->children[idx];
        }
        else // not present
        {
            return false;
        }
        return startsUtil(child, word.substr(1)); // recursive call
    }
    bool startsPrefix(string word)
    {
        return startsUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("SURAJ");
    t->insertWord("JANS");
    cout << "Is Present: " << t->searchWord("SURAJ") << endl;
    cout << "Is Present: " << t->searchWord("S") << endl;
    cout << "Is Present: " << t->searchWord("JANSA") << endl;
    cout << "Is Present: " << t->searchWord("B") << endl;
    cout << "Prefix: " << t->startsPrefix("JA") << endl;
    return 0;
}