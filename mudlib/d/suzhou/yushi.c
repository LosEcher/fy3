// Room: /d/suzhou/yushi.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ԡ��");
	set("long", @LONG
���������½����ŵ�ԡ�ң���ʩҲ�Ƚϼ򵥣��������Ǹ�������Ϣ�ĵط���
�����������³�һƬ��Ȼ����ԡ�ң���������Ůԡ�ң�ǧ�����߰���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"nanyushi",
	"east" :__DIR__"nuyushi",
  "south" : __DIR__"chengdongjie2",
]));
	set("objects",([
		__DIR__"npc/zaotanglaoban":1,
]));
	set("no_fight",1);
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	if((me->query("gender")=="����"&&dir=="east")||(me->query("gender")=="Ů��"&&dir=="west")) {
	message_vision(CYN"�����ϰ�ŭ��һ����"+me->query("name")+"����������������ҹ���ȥ��\n"NOR,me);
	message_vision(CYN"˵�շ���һ�Ű�$N�����˳�ȥ��\n"NOR,me);
	me->set_temp("rent_paid",0);
   tell_room(__DIR__"chengdongjie2",CYN"ֻ�����������ϰ�һ��ŭ�ȣ�"+me->query("name")+"����������������ҹ���ȥ��\n\n����"+me->query("name")+"��֪��˭�����˳�����\n"NOR);
	me->move(__DIR__"chengdongjie2");
	return notify_fail("\n");
	}
	if(dir=="south")	{
		me->set_temp("rent_paid",0);
		return 1;
	}
	if(me->query_temp("rent_paid")==1)	{
	tell_object(me,CYN"�ϰ�˵���������������á�\n"NOR);
	return 1;
	}
	message_vision(CYN"�ϰ��$N���һ����û��Ǯ�����ϴ����\n"NOR,me);
	return notify_fail("\n");
}
