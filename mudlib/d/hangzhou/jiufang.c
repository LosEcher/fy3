// Room: /d/hangzhou/jiufang.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "�Ʒ�");
	set("long", @LONG
һ����,���������̳�������ӵ�����,�м���һ�ھ޴��ܷ��
�Ÿ�.�Աߵ�һ�ڴ�����治֪�ڳ�Щʲô,һ��Ũ�صľ����˱Ƕ���
���������������������,����һ���ٷ�.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"dadao1.c",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chenlaoqu.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
