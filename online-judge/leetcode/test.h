//
// Created by ZintrulCre on 2020-09-17.
//

#ifndef LEADGREY_ONLINEJUDGE_LEETCODE_TEST_H
#define LEADGREY_ONLINEJUDGE_LEETCODE_TEST_H

#include "universal/std-pch.h"
#include "online-judge/pch.h"
#include "base/print.h"

void OjTest()
{
    // vector<vector<char>> board{{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};

    vector<int> test{3,3,0,3};
    Solution solution;
    vector<vector<int>> res = solution.permuteUnique(test);
    leadgrey::Print(res);

}

void TreeNodeTest()
{
    // TreeNode* a = new TreeNode(1);
    // TreeNode* b = new TreeNode(2);
    // TreeNode* c = new TreeNode(3);
    // TreeNode* d = new TreeNode(4);
    // TreeNode* e = new TreeNode(5);
    // TreeNode* f = new TreeNode(6);
    // TreeNode* h = new TreeNode(7);
    // a->left = b;
    // b->right = c;
    // a->right = e;
    // e->left = f;
    // f->right = h;

}

#endif