#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        if (!arg || arg!="-p") {
                me->set_ghost(1);
                write("�����˹�\n");
        }
        else {
                me->set_ghost(0);
                write("����Ͷ̥�����ˣ�\n");
        }
        return 1;
}
