// Room: /d/huanggon/yangxindian.c

inherit ROOM;

void create()
{
	set("short", "���ĵ�");
	set("long", @LONG
���ĵ��ǻ����ճ���Ϣ�ĵط�,�ߴ�ĵ���,�����ľ���,���ľ�
������,�����γ�һ�����ϵ�����.�ϱ���������ɺ�ɫ�ĳ���.�˵���
����Զ����Ǭ�幬.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shangshufang",
  "east" : __DIR__"qianqingon",
]));

	setup();
}
int valid_leave(object me,string dir)
{
if (dir=="east"&&me->query("xxy/lvl")<4)
return notify_fail("���������Ǭ�幬���ͱ��ص�������ס��!\n");
return ::valid_leave(me,dir);
}
