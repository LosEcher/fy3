//bye enter

#include <ansi.h>

inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
���������������ڣ�������ĳ��輫Ϊ��������˹��̺��
�Ϻõ����Σ����������ƿ����Һ��������ţ����̲�ס���
�����ڡ�
LONG
    );
  set("exits",([
          "out": __DIR__"houyuan",
      ]));
  set("objects",([
          __DIR__"obj/wuliangye" : 1,
     ]));

	set("no_fight",1);
  setup();
}

void init()
{
        object ob;
	ob=this_player();
	remove_call_out("greeting");
	call_out("greeting", 1, ob);
}

void greeting(object ob)
{
	object room;

        if( !ob || environment(ob) != this_object() ) return;
	write("����̽ͷ����"+RANK_D->query_respect(ob)+
	"���������·��˵���������ߺ����һ�����ܣ�\n");
	if(! (room=find_object(__DIR__"houyuan")))
		room=load_object(__DIR__"houyuan");
	room->delete("exits");
	delete("exits");
	call_out("reach",30,ob);
}

void reach(object ob)
{
	object room;
	if(! (room=find_object(__DIR__"houyuan")))
		room=load_object(__DIR__"houyuan");

	write("�����ͷ����������ݵ��ˣ�˵�����������ᡣ\n");
	ob->move("/d/yangzhou/shizhongxin");
	set("exits/out",__DIR__"houyuan");
	room->set("exits/enter",__DIR__"chexiang");
}

