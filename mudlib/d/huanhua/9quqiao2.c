// Room: /d/new/huanhua/9quqiao2.c

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
  __DIR__"npc/yidong-mo.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"9quqiao1",
  "north" : __DIR__"9quqiao3",
]));

	setup();
	replace_program(ROOM);
}
