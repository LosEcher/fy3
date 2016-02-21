// kedian1.c

inherit ROOM;

void create()
{
	set("short", "�͵�");
	set("long", @LONG
	����һ�Ҽ�Ǯ�����Ŀ�ջ������ǳ���¡������οͶ�ѡ��������ţ���
������������������صķ������顣��С����������æ������ת���Ӵ�����ǻ����
�Ŀ��ˡ��͵�����˴Ӳ�¶�棬��������˭���и��ָ����Ĳ²⡣ǽ�Ϲ���һ����
��(paizi)��
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

	set("item_desc", ([
		"paizi" : "¥���ŷ���ÿҹ����������\n",
	]));

	set("objects", ([
		__DIR__"npc/xiaoer1" : 1,
	]));

	set("exits", ([
		"south" : __DIR__"dongjie",
		"up" : __DIR__"kedian2",
	]));

	setup();
}

int valid_leave(object me,string dir)
{
   object ob;

   ob=present("wang xiaoer",this_object());
   if (dir=="up" && ob && !me->query_temp("rent_paid"))
        return notify_fail("��С������ס��Ļ�Ҫ����(give)����������ͬ�����ֻҪһ��ɡ�\n");
   if ( dir=="south" && me->query_temp("rent_paid"))     me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}
