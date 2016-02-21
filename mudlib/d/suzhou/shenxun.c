// Room: /u/oldsix/room2/shenxun.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "��Ѷ��");
	set("long", @LONG
���ڵƻ�ͨ����������硣���ǹ��뿪�⸮���εķ��ˣ����þ������ú�
���ܻ���ͷš����ڳ���������һ����������������������һ�ˣ�������
��Ц��ֹ��
LONG
	);
	set("objects",([
		__DIR__"npc/chanzheng" :1,
]));
	set("exits", ([ /* sizeof() == 1 */
	"up" :__DIR__"laomen",
	"north" :__DIR__"dalao1",
	"west" :__DIR__"dalao2",
	"south" :__DIR__"dalao3",
]));
	set("no_fight",1);
	set("no_magic",1);
	set("no_steal",1);
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	if(me->query("oldsix_flag/lao")==1&&dir=="up")	{
	return notify_fail(CYN"����������Ц�������ȥ��������ô���׵��£�\n"NOR);
	}
	if(dir=="up")	{
		message_vision(CYN"��������$N�����ĳ���˵������ȥ��ú����˰���\n"NOR,me);
	}
	return 1;
}
