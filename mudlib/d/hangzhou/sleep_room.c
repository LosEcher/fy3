// Room: /d/hangzhou/sleep_room.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "���᷿");
	set("long", @LONG
����һ�����ͨ��,�������ż�������.�м��һ���ߵ����������� 
��.ʱ��ʱ����һЩ������,������֮��Ķ���.�������ǽ�Ͽ������ȴ� 
��.�ð�ֽ����.��ֻ�����ڿ�ͷ����ؿ�����. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"back_yard.c",
]));
	set("no_clean_up", 0);
	set("sleep_room", 1);

	setup();
	replace_program(ROOM);
}
