// Room: /d/new/huanhua/9quqiao.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
佻�Ϫ�Ͼ�����,��һ������������Сʯ��,����װ���˷���,��������
����ۻ�,����ȥ�ǳ�������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dyuhan.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hhxi",
  "northwest" : __DIR__"9quqiao1",
]));

	setup();
	replace_program(ROOM);
}
