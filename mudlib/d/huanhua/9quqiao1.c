// Room: /d/new/huanhua/9quqiao1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
佻�Ϫ�Ͼ�����,��һ������������Сʯ��,����װ���˷���,��������
����ۻ�,����ȥ�ǳ�������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"9quqiao2",
  "southeast" : __DIR__"9quqiao",
]));

	setup();
	replace_program(ROOM);
}
