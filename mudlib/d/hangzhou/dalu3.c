// Room: /d/hangzhou/dalu3.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
����С·����������ת������ֲ��÷����С·��ͷ÷����ӳ��һ
�������ׯԺ���Ǿ���÷ׯ�ˡ������Ǹ�����·�ڡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/d/meizhuang/xiaolu4",
  "north" : __DIR__"dalu2",
]));

	setup();
	replace_program(ROOM);
}
