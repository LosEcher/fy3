// Room: /d/suzhou/huangqiu1.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��Ƭ����ش�������������֮����Ҳ��֪���׹��ĸ���Ͻ�����ǹٸ�������
��ȱ����������ܴ������˴�����ʱ���ϵ���ѻ���¸¡����������������з�ë��
���ɵļӿ��˲�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"huangqiu2",
  "eastdown" : __DIR__"guandao2",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
int valid_leave(object me, string dir)
{
	if(!userp(me)&&dir=="eastdown"&&me->query("home")==1) 	{
	tell_room(__DIR__"guandao2",RED"\nֻ�������˴�������´��ٸ��������Ӱ����������࣡��\n"NOR);
	return 0;
	}
	return 1;
}
