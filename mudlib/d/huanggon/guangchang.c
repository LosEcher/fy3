// Room: /d/huanggon/guangchang.c

inherit ROOM;

void create()
{
	set("short", "�㳡");
	set("long", @LONG
�����찲�Ź㳡,��������ƽʵ����ʯ,�ݵ�ƽ��,�����찲���ǽ�
��ʳǵĴ���,�㳡ǰһ��������Ľֵ�,���Ƕ����,���������,�ϱ�
��Զ��������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/huashan/npc/youke.c" : 1,
  "/d/huashan/npc/haoke.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"tiananmen",
  "south" : __DIR__"sdajie",
  "east" : __DIR__"edajie",
  "west" : __DIR__"wdajie",
]));

	setup();
	replace_program(ROOM);
}
