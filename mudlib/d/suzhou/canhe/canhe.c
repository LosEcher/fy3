// Room: /d/suzhou/canhe/canhe.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "�κ�ɽׯ");
	set("long", @LONG
ֻ��С�����������������䷿�ᡣ����С��������Ϊ���¡�������һ��
���ţ������Ҷ��ϡ��κϡ�����ʮ����Ŀ����������������ׯ������Ŀ�䵭��
һ��������ǧ��֮���ģ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down" :__DIR__"huan",
		"east" :__DIR__"qianting",
]));
	set("objects",([
		__DIR__"npc/zhuangding" :2,
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	object npc;
	if(me->query("family/family_name")=="����Ľ��")
		return 1;
	if(dir!="east")	return 1;
	npc=present("zhuang ding",this_object());
	if(!npc)	return 1;
	return notify_fail(CYN"ׯ��ŭ�������ǹ���Ľ�ݵ��Ӳ������ڣ�\n"NOR);
}
