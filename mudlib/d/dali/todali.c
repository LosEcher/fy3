// Room: /d/dali/todali.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������ٵ�����ʯ�̳ɡ�����ֱͨ���������ɵ�����ɽ������
ͨ����ԭ���������ǰ���ɽ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northwest":"/d/baituo/guandao2",
  "east":"/d/wudang/road6",
  "north":__DIR__"toemei",
  "southwest" : __DIR__"road1",
]));
set("outdoors","/d/dali");
	set("no_clean_up", 0);

	set("objects",([
		"/npc/man3":2,
	]));
	setup();
	replace_program(ROOM);
}
