//midao.c

#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "�ܵ�");
        set("long", @LONG
        ����һ���ܵ����ܵ���С����ǿ��������ͨ�������Ե�ǽ�ϵ����͵ƣ�Ҳ��֪
����ܵ�����ͨ�����

LONG
        );

       set("exits", ([
                 "northwest" : __DIR__"midao1",

       ]));

       setup();
}
void greeting(object ob)
	
       
{
	if( !ob || environment(ob) !=this_object()) return;
	if(ob->query_skill("dodge",1)<=40 || ob->query_skill("parry",1)<=100)
        {
		write(RED
"��ֻ���������׹�������ļ�����Ѩ����;����ؿ�һ�飬
�ܿ����ʲô���о������ˡ�\n"NOR);



		ob->die();

		return 1;
	}
		else
	{
		write(RED
"��ֻ���������׹�������ļ�����Ѩ,����æ�������л�λ��
Ʈ��һ�Զ㿪������Ҳ��ʵ�ų�һ���亹����\n"NOR);
	}
}

void init()
{
	object ob;
	ob=this_player();
	call_out("greeting",1,ob);
        add_action("do_la", "la");
	add_action("do_la", "��");

}

int do_la(string arg)
{
	object me;
	me = this_player();

	if( !arg || arg=="" ) return 0;
	
	if( arg=="����"|| arg=="huan") 
	{
		tell_object(me,"����������һ��������\n");
		{
		message("vision", "����һ�������ֻ����һ���¡¡��������������һ�����š�\n", me);
		set("exits/south", __DIR__"yanguan");
		remove_call_out("close");
		call_out("close", 10, this_object());
		}
		return 1;
	}
}

void close(object room)
{
	message("vision","һ���¡¡���������󣬰����ֻ����ع����ˡ�\n", room);
	room->delete("exits/south");
}
