#include "include/9cc.h"


int main(int argc, char **argv) {
    if (argc != 2)
        error("%s: 引数の個数が正しくありません\n", argv[0]);

    // トークナイズとパース
    user_input = argv[1];
    token = tokenize(user_input);
    Node *node = expr();


    code_gen(node);


    return 0;
}
