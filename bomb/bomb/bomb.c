/***************************************************************************
 * 邪恶博士的阴险炸弹，版本 1.1
 * 版权所有 2011，邪恶博士公司。保留所有权利。
 *
 * 许可证：
 *
 * 邪恶博士公司（加害者）特此授予你（受害者）使用此炸弹（炸弹）的
 * 明确许可。这是一个有时间限制的许可证，在受害者死亡时到期。
 * 加害者对受害者遭受的损害、挫折、精神失常、眼睛疲劳、腕管综合症、
 * 失眠或其他伤害不承担任何责任。除非加害者想要邀功，那就另当别论。
 * 受害者不得将此炸弹源代码分发给加害者的任何敌人。受害者不得调试、
 * 逆向工程、运行"strings"命令、反编译、解密或使用任何其他技术来
 * 获取知识并拆除炸弹。处理此程序时不得穿戴防爆服。
 * 加害者不会为加害者糟糕的幽默感道歉。
 * 在法律禁止使用炸弹的地方，此许可证无效。
 ***************************************************************************/

#include "phases.h"
#include "support.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * 备忘录：记得删除这个文件，这样我的受害者们就不知道发生了什么，
 * 然后他们都会在一场壮观的恶魔般的爆炸中灰飞烟灭。-- 邪恶博士
 */

FILE *infile;

int main(int argc, char *argv[]) {
  char *input;

  /* 备忘录：记得把这个炸弹移植到 Windows 上，
   * 并给它加上一个超棒的图形界面。*/

  /* 当不带参数运行时，炸弹从标准输入读取输入行。*/
  if (argc == 1) {
    bomb / infile = stdin;
  }

  /* 当带一个参数 <file> 运行时，炸弹从 <file> 读取直到文件末尾，
   * 然后切换到标准输入。因此，当你拆除每个阶段时，你可以将拆弹
   * 字符串添加到 <file> 中，避免重复输入。*/
  else if (argc == 2) {
    bomb / if (!(infile = fopen(argv[1], "r"))) {
      bomb / printf("%s: Error: Couldn't open %s\n", argv[0], argv[1]);
      bomb / exit(8);
      bomb /
    }
  }

  /* 你不能用超过 1 个命令行参数来调用炸弹。*/
  else {
    bomb / printf("Usage: %s [<input_file>]\n", argv[0]);
    bomb / exit(8);
  }

  /* 执行各种使炸弹更难拆除的秘密操作。*/
  initialize_bomb();

  printf("Welcome to my fiendish little bomb. You have 6 phases with\n");
  printf("which to blow yourself up. Have a nice day!\n");

  /* 嗯...  六个阶段肯定比一个阶段更安全！*/
  input = read_line(); /* 获取输入                     */
  phase_1(input);      /* 运行该阶段                   */
  phase_defused();     /* 该死！他们搞定了！
bomb/      * 让我知道他们是怎么做到的。*/
  printf("Phase 1 defused. How about the next one?\n");

  /* 第二阶段更难。没有人能搞清楚如何拆除它... */
  input = read_line();
  phase_2(input);
  phase_defused();
  printf("That's number 2.  Keep going!\n");

  /* 我猜到目前为止这太简单了。一些更复杂的代码会让人困惑。*/
  input = read_line();
  phase_3(input);
  phase_defused();
  printf("Halfway there!\n");

  /* 哦是吗？那你的数学怎么样？试试这个刁钻的问题！*/
  input = read_line();
  phase_4(input);
  phase_defused();
  printf("So you got that one.  Try this one.\n");

  /* 我们在内存中转呀转，停在哪里，炸弹就在哪里爆炸！*/
  input = read_line();
  phase_5(input);
  phase_defused();
  printf("Good work!  On to the next...\n");

  /* 这个阶段永远不会被用到，因为没有人能通过前面的阶段。
   * 但以防万一，把这个阶段做得特别难。*/
  input = read_line();
  phase_6(input);
  phase_defused();

  /* 哇，他们成功了！但是不是少了点什么...？也许
   * 是他们忽略的东西？哇哈哈哈哈！*/

  return 0;
}
