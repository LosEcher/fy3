// Room: /u/uuui/workroom.c
#include <ansi.h>;
inherit ROOM;

void create()
{
        set("short", "�����޵�");
        set("long", @LONG
�����޵������ĺ�ݸ����Ϣ�ĵط������µ��ţ����ʵ�
���Ĵ󴲡���������ױ̨��ͭ����֬ˮ��ü�ʹ�������װ
��֮��ʽʽ�߱��ٴ�������һ�鼸�Σ����Ϲ����Ի���һ��
�����˵Ĵ��ס�ϸ����ԭ�����ƴ�ʫ�˰׾��׵ġ������С�
����ǽ�Ϸ�����񣬷ֻ���÷����յľ��ᡣ�ǳ�����¥��
���ĵ��������������������Ϣ���ֲ�ʧ���޵����ա�
LONG
        );
        set("exits", ([ /* sizeof() == 6 */
  "yuki" : "/u/yuki/workroom",
  "down" : "/d/zhongzhou/shizhongxin",
  "wangs" : "/u/wangs/workroom.c",
  "north" : __DIR__"guandao1",
  "south" : __DIR__"guandao2",
]));
        set("valid_startroom", 1);
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

