// Room: /d/baituo/xia.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����������±ߣ�����������Ұ��Ұ�ݡ�
LONG
	);
 set("objects",([
      __DIR__"npc/snake" : 2,
      ]));
	set("no_clean_up", 0);

	setup();
}

void init()
{
        add_action("do_bo","bo");
}
int do_bo(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "Ұ��") return 0;
        if (me->query("str") < 10)
                return notify_fail("��ʹ�����˲����˸ߵ�Ұ�ݣ��۵�Ҫ����ʲô��û���֡�\n");
        if (me->query_temp("mark/zhang"))
                return notify_fail("�㲦�˲�Ұ�ݣ�ɶ��û���֡�\n");
        if (me->query("gin") < 30 || me->query("kee") < 150 || me->query("sen") < 50)
                return notify_fail("�����Ų��˲�Ұ�ݣ�����ûʲô�����ˡ�\n");
        message_vision("$Nʹ�������˰��˸ߵ�Ұ�ݣ�������һ����ɫ�ĸ��ȡ�\n",me);
        me->set_temp("mark/zhang",1);
        me->add("gin",-30);
        me->add("kee",-150);
        me->add("sen",-100);
        ob=new(__DIR__"obj/tianmozhang");
        ob->move(me);
        return 1;
        }

