// Room: /d/hangzhou/quyuan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "��Ժ���");
	set("long", @LONG
��ǰ��һƬ�̺�.ϸ��ȥ,ͤͤ��ǵĺ�Ҷ֮���׺�ŷ�ɫ�� 
�ɻ�.���΢��,ʱ�����ѵ��ɹ�.���շ��𣬺���������Ƣ.�� 
����Զ��һ�������д����������. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dadao1.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
