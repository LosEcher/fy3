// Room: /d/yangzhou/dukou.c

inherit ROOM;

void create()
{
	set("short", "�ɿ�");
	set("long", @LONG
������ͨ��ȥ���ݳǵĶɿڣ�ǰ����ǹ����������򱱾������ݳǡ�
����ͣ��Щ[33mС��[37m����Զ�������ݴ��š�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"dukoulu",
  "south" : "/d/zhongzhou/daqiao",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shusheng" : 1,
]));
	set("item_desc", ([ /* sizeof() == 2 */
  "��" : "����ЩС��������û�˹���Ҳ������Լ���.
",
  "chuan" : "��ЩС��Ҳ������ϡ�
",
]));
	set("no_sleep_room", 1);
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
