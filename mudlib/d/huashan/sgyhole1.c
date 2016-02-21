// sgyhole1.c
// By Hop, 97.04.30
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "ɽ��");
        set("long", @LONG
ɽ�����п������Ĵ�ʯ����֪�����ж��ٻ�ɽ�ɵ�ǰ���ڴ�˼����
�ڣ���������ʯ�������û��ʯ��(wall)�����š������������
�֣������������̣��ʻ��Ծ������а�硣�����̵ֿþ����Ƿ��������
���书һ��ʮ���˵á�
LONG );
        set("objects", ([
	__DIR__"npc/ling-huchong":1,
        ]));
        set("exits", ([ /* sizeof() == 2 */
            "out" : __DIR__"siguoya",
        ]));
        set("item_desc", ([
            "wall" : "һ��ܺ��ʯ�ڡ�\n"
        ]) );
//        set("no_clean_up", 0);
        setup();
}

void init()
{
        object ob;
	ob=this_player();

                remove_call_out("greeting");
                call_out("greeting",2 , ob);
        add_action("do_break", "break");
}

void greeting(object ob)
{
	object lh;

	lh=present("ling huchong",this_object());
	if(objectp(lh))	{
	if ( ((int)ob->query_int() >= 30) && ((int)ob->query_con() >= 30)
           && ((int)ob->query("marks/feng-qingyang")==1) )
      {
           ob->set("marks/feng-qingyang",2);
	write("�����˵�������ҷ�̫ʦ��ס���Ϸ壬���ȥ��!��\n");
		set("exits/enter",__DIR__"sgyhole");
		remove_call_out("close");
		call_out("close",5,this_object());
	}
	}
}

int do_break(string arg)
{
    int n;
    object weapon,me=this_player();
	if( !arg || arg!="wall") return notify_fail("�����Ǹ��\n");
    if (!objectp(weapon = me->query_temp("weapon"))
       || (string)weapon->query("skill_type") != "sword")
       return notify_fail("��һ�ƴ���ʯ�ڣ����ֶ�����Ѫ��\n");

    message_vision(HIC
"$N�ߵ�ʯ��ǰ���γ����������������˾���ʯ�ڴ��˹�ȥ��\n"NOR,me);

	if(me->query("force")<500)
    {
       message_vision(HIC
"���ֻ��һ���ƺߣ�$N��ʯ�ڵķ����������ǰһ��....\n"NOR,me);
       me->set("force",0);
       me->unconcious();
       return 1;
    }
    message_vision(HIC
"$Nֻ��һ�����죬ʯ�ڱ�ͱ���ˣ�ԭ��������һ���󶴡���\n"NOR,me);
    set("exits/enter",__DIR__"sgyhole");
	me->add("force",-500);
    remove_call_out("close");
    call_out("close", 5, this_object());
//    remove_call_out("close_out");
//    call_out("close_out", 3);
    return 1;
}
void close_out()
{
    if (query("exits/enter")) delete("exits/enter");
}

void close(object room)
{
    message("vision","���Ϻ�Ȼ������һ���ʯ�������ڷ��˸�����ʵʵ��\n", room);
    room->delete("exits/enter");
}
