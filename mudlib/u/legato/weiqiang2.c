#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "Χǽ");
        set("long", @LONG
����ɽׯ��Χǽ����Լ�����ɶ�ߣ���ֱ�����������������ţ�������
ɽׯΧ��������ǽ���Ǳ߾���ɽׯ�ĺ�ɽ��
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "south" :__DIR__"yueliangmen",
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
        if (arg != "wall") return 0;
        message_vision(CYN
"$N����������������Χǽ��һԾ��\n"NOR,me);

        if (me->query_skill("dodge") < 100)
        {
               message_vision(CYN
"���ֻ��žߴһ����$N����˲��ˤ�����ϣ���ǰ����ֱð....\n"NOR,me);
               me->set("neili",0);
               me->unconcious();
               return 1;
        }
        message_vision(CYN
"$Nֻ��������ǣ�ವ�һ����$N��ƮƮ��Ծ����Χǽ��\n"NOR,me);
        me->move(__DIR__"shanlu");        me->add("neili",-200);
        
        return 1;
}

