// Room: /d/new/huanhua/9quqiao3.c

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
  "south" : __DIR__"9quqiao2",
  "north" : __DIR__"huanghe",
]));

	setup();
	replace_program(ROOM);
}
