// Room: /d/baituo/shan1.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
һ����ɽ��·�������Ƕ��͵����¡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"shan",
]));

	setup();
}
void init()
{
        add_action("do_jump","jump");
}

int do_jump(string arg)
{
        object me;
        me = this_player();
        if (arg != "����") return 0;
        {
        if (me->query_skill("dodge") < 120 )
                return notify_fail("�㲻����ˣ�����ȥ����ˤ����ô��\n");
        if (me->query("combat_exp") < 300000)
                return notify_fail("���ڽ�������������û��������������ɱ�ˣ�\n");
        if(random(30) < (int)me->query("cor")) 
                return notify_fail("�����һ�����������������£��ֺ����ˡ�����\n");
        message_vision("ֻ��$N����һԾ����������������¡�\n\n",me);
        me->start_busy(3);
        me->move(__DIR__"xia");
        me->add("sen",-80);
        me->add("kee",-80);
        me->add("gin",-80);
        return 1;
        }       
}

