// Room: /d/quanzhou/zhendian.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����֮�й������̫����,Ҳ����˵������,�������������϶� 
�����������,����ǰ�����ͦ��ʢ. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"gulou",
  "southup" : __DIR__"houdian",
  "north" : __DIR__"mazhu",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/fishman.c" : 1,
  __DIR__"npc/fishgirl.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
