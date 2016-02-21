// Room: /d/yanjing/gaosheng.c

inherit ROOM;

void create()
{
	set("short", "������ջ");
	set("long", @LONG
��յ�������߹�����ͷ����,���е�������"������ջ"�����Һڵ�
����,���������Ⱥ�����ű߻��վ��ӭ��.һ�ߵĽ���ֱ��ͨ���Ժ��
������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"street2",
  "west" : __DIR__"zoudao",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/yanjing");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaoer.c" : 1,
]));

	setup();
}
int valid_leave(object me,string dir)
{
   object ob;

   ob=present("gao jianli",this_object());
   if (dir=="west" && ob && !me->query_temp("rent_paid"))
	return notify_fail("�߽������ס��Ļ�Ҫ����(give)����������ͬ�����ֻҪһ��ɡ�\n");
   if ( dir=="east" && me->query_temp("rent_paid"))	me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}