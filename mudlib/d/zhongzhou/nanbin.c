//nanbin
  

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "��ԡ��");
	set("long", @LONG
	��������ԡ�ң�����ˮ�����ɡ���ǽһ��ľͰ��ü�����������ԡ��ϴ�����
���Աߵ�������С��һ�¡�
LONG
	);

	set("bath_room" ,1);
	set("exits", ([
		"north" : __DIR__"xiuxian",
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
	if(ob->query("gender")=="Ů��")
        {
                write(RED
"��һ�߽����ŷ������Ǹ���ԡ�ң�Ҳ����ôһƳ��ʱ�䣬���ʱ��������һ���գ�����һ����æ�˳�ȥ�����Ͻ���һ����ֻ����ͷ����ײ��һ��Ӳ���������ʲô����֪���ˡ�\n"NOR);
		ob->set("sen" ,-1);
		ob->move(__DIR__"wendingnan3");
        }
}
