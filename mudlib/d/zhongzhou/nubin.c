//nubin
  

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "Ůԡ��");
	set("long", @LONG
������Ůԡ�ң�����ˮ�����ɡ���ǽһ��ľͰ��ü�����������ԡ��
ϴ��������Աߵ�������С��һ�¡�
LONG
	);

	set("bath_room",1);
	set("exits", ([
		"south" : __DIR__"xiuxian",
]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
}

void init()
{
        object ob;

        if( interactive(ob = this_player())) 
	{
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
	}
}
void greeting(object ob)
{
        if( !ob || environment(ob) !=this_object()) return;
        if(ob->query("gender")=="����")
        {
                write(RED
"��һ�߽����ŷ������Ǹ�Ůԡ�ң�һƬ��ã��ˮ�����������ʵķ�����ۿ��������۷�ֱ�����ǵ����ɽ�һ�㡣ͻȻһ��������ӿ����ǰһ�����ʲô����֪���ˣ�\n"NOR);
		ob->set("sen" ,-1);
		ob->move(__DIR__"wendingnan3");
		return;
        }
}
