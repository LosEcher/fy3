#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�շ���");
        set("long", "����һ��ʲ��Ҳû�еĿշ��䡣\n");
        setup();
}

void init()
{
add_action("do_a","fuck");
}
int do_a()
{
this_player()->set("env/msg_home",HIW"���ĺö�Ŷ,һ����Х,�ؼ�ȥ�������Ҷ�����������ķ�ȥ��...."NOR);
this_player()->set("env/msg_min",HIR"��о����������..��Լ���㿴����è������¶�������ĵ�С�Դ���"NOR);
this_player()->set("env/msg_mout",HIB"��о���һ��ѣĿ��һ����è��������ƮȻ��ȥ..."NOR);
return 1;
}

