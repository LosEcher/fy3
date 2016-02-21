// Room: /d/zhongzhou/dukou.c

inherit ROOM;

void create()
{
	set("short", "�ɿ�");
	set("long", @LONG
������ͨ��ȥ���ݳǵĶɿڣ�ǰ����ǹ������������Ͼ������ݸ���
����ͣ��Щ[33mС��[37m����Զ��һ�����ţ�бб�����ڽ����ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("valid_startroom", 1);
	set("no_sleep_room", 1);
	set("item_desc", ([ /* sizeof() == 2 */
  "chuan" : "��ЩС��Ҳ������ϡ�
",
  "��" : "����ЩС��������û�˹���Ҳ������Լ���.
",
]));
	set("outdoors", "zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shusheng" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"daqiao",
  "south" : __DIR__"dukoulu",
]));

	setup();
	replace_program(ROOM);
}
