// Room: /d/new/huanhua/9quqiao4.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
佻�Ϫ�Ͼ�����,��һ������������Сʯ��,����װ���˷���,��������
����ۻ�,����ȥ�ǳ�������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"huanghe",
  "northwest" : __DIR__"xiaolu2",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
