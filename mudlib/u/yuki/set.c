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
add_action("do_a","love");
}
int do_a()
{
  this_player()->set("env/msg_home",HIW"�Ҷ�����һ�ᣬƽ��Ծ����ʧ�ڿ����С�"NOR);
this_player()->set("env/msg_min",HIR"��ͻȻ�е�һ������Ʈ���������������������õ��߳�һλ��ɫ��Ů��"NOR);
this_player()->set("env/msg_mout",HIB"�������һ�����������������Ҷ�������û������֮��....."NOR);
return 1;
}

