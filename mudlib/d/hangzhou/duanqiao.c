// Room: /d/hangzhou/duanqiao.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "���Ų�ѩ");
	set("long", @LONG
����һ����ʯ��,���º�ˮ����,Զɽ��ˮ,�����۵�.��������
���ǰ׵�.��˵����ѩ��֮ʱ,�������ѩ����,��������Ȼ��������.
��Զ������,������̶�֮��.����.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/xuxian.c" : 1,
  __DIR__"npc/baisuzhen.c" : 1,
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dongmen.c",
  "west" : __DIR__"baidi1.c",
]));

	setup();
	replace_program(ROOM);
}
