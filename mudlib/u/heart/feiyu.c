#include <ansi.h>;
  
inherit ROOM;
  
void create()
{
        set("short", "�����");
        set("long", @LONG
�����ǡ�����󡱡�ӳ�����������ƴ�ʱ����ͨ
�õ���ػ��񴰡���񹤾�ϸ�����ν������������̺�
��ֱ��ϸ����͸�����ѡ����������������С������
�����ֵ��Ҷ�Ҷ�����һ���˱ʼ��ģ�����������
�������ġ�����ͼ�����������Ƿ��������ּ��پ�Ʈ��
���Թ��ס��������ǲ�����
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ceting",
  "south" : __DIR__"guandao",
]));

        set("no_sleep_room", 1);
        set("no_fight", 1);
        set("objects", ([ /* sizeof() == 2 */
  __DIR__"xiao" : 1,
]));
        set("no_clean_up", 0);
  
        setup();
}
  
void init()
{
        add_action("do_idle","idle");
}
int do_idle()
{
this_player()->set("title",HIB"����������"NOR);
return 1;
}

