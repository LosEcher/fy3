#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "��ţ��");
        set("long", @LONG
�����Ǿ���֮�أ�����˼������ɽ������ţ���ᶸ�ͣ�����
������ȥ����Χ����Ʈ�죬��ߵ�ɽ����������ӳ�����ǵ�
������Ӿ�������ɽׯ�ˣ��ұߵ�ɽ�������̵�һƬ������
һ���ˮ�������ɽ����һ���ٲ����ˮ��к������
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "southdown": __DIR__"shijianshi",
            ]));
   
       set("no_clean_up", 0);
        setup();
}

void init()
{
        add_action("do_jump", "jump");
}
int do_jump(string arg)
{
        int n;
        object weapon,me=this_player();
        if (arg != "west") return 0;
        message_vision(CYN
"$N����������׼������һ����\n"NOR,me);

        if (me->query_skill("dodge") < 150)
        {
               message_vision(CYN
"�㲻Ҫ���ˣ��������ţ����ӣ�Ů����.....\n"NOR,me);
               me->set("move",__DIR__"laoniubei");
                  return 1;
        }
        message_vision(CYN
"�������ǻ��ȥ�ˣ����ţ����ӣ�Ů����...ûʲô����������
��ܲ������������ȥ�����д󺰣��ҵ�������ͼ���������ŵؽ���!\n"NOR,me);
        me->move(__DIR__"hushui");
              
        return 1;
}

