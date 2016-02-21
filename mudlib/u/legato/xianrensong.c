#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
���ǵط��������ɣ�ֻ�����͵�ɽ����бб�ĳ���һ��ߴ������
�������أ�����һ��������֮��ʱ��ʱ�֣���˶�����������Զ
����ȥ��ֻ������һ���ŵ����Ʈ�������������µĴ�ʯͷ�ڷ��
������Ҳ�·����һζ���
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
           "northup" :__DIR__"shijianshi",
             "southdown" :__DIR__"wangyuetai",
        ]));
        set("no_clean_up", 0);
        setup();
}

void init()
{
        add_action("do_break", "break");
}
int do_break(string arg)
{
        int n;
        object weapon,me=this_player();
        if (arg != "stone") return 0;
        message_vision(CYN
"$N�ߵ���ʯǰ������˫�ƣ��͵ػ����ʯ��\n"NOR,me);

        if (me->query("force") < 100)
        {
               message_vision(CYN
"���ֻ��һ���ƺߣ�$N����ʯ�ķ����������������,һƨ����������....\n"NOR,me);
               me->set("neili",0);
               me->unconcious();
               return 1;
        }
        message_vision(CYN
"$Nֻ��һ�����죬��ʯ�������ˣ�����¶����һ���󶴣�\n"NOR,me);
        set("exits/enter",__DIR__"midao");
        me->add("neili",-200);
        remove_call_out("close");
        call_out("close", 5, this_object());
        return 1;
}

void close(object room)
{
    message("vision","���Ϻ�Ȼ������һ���ʯͷ�������ڷ��˸�����ʵʵ��\n", room);
    room->delete("exits/enter");
}

