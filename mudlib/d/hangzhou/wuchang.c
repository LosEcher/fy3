// Room: /d/hangzhou/wuchang.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "ʯ���䳡");
	set("long", @LONG
���ݶ���������ʯ���䳡���������ǰ��.����ʯ��֮����Ǹ߸ߵ�
�ż�.���ߵ�ʯʨ��������.��ǰ������һ���߸ߵ������,[ʯ���䳡]��
�������Ʈ��.��ΧǽΧ���Ժ���д�������ʱ�ĺȺ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dadao2.c",
  "north" : __DIR__"front_yard",
]));

	setup();
	replace_program(ROOM);
}
