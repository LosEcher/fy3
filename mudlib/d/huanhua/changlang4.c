// Room: /d/new/huanhua/changlang4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ�������Ļ���,��ɫ����������,��������ÿ�����ɾͳɶ���������.  
�����Ǽ�ɽ,����ͨ��,������Ȥ.����ɽ�����и�����.  
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jiading.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"changlang5",
  "north" : __DIR__"changlang2",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
