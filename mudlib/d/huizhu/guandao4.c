// Room: /d/huizhu/guandao4.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
���������Ӿ���������صĹٵ��������Ǿ��Ƿ�������ͨ������
�ء���·�ı�����Ƭ����,һ�ߺ�����Щ����ע����.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huizhu");
	set("exits", ([ /* sizeof() == 3 */
  "north" : "/d/huanggon/shulin",
  "southwest" : __DIR__"guandao3",
  "northeast" : __DIR__"to_bj",
]));

	setup();
	replace_program(ROOM);
}
