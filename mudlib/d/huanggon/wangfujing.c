// Room: /d/huanggon/wangfujing.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������ĵ����ھ������,Ҳ�����������ĵط�,ȫ�����ص��̷�
���ѻ���Ū���˵ؽ���,�ֵ����ߵ�����һ����һ��,�ŵ����������.��
�����ȫ�۵¾�¥.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"edajie1",
  "north" : __DIR__"wangfujing1",
  "east" : __DIR__"quanjude",
]));

	setup();
	replace_program(ROOM);
}
