// Room: /d/huanggon/edajie1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������������Ľֵ�,���������찲�Ź㳡.�ֵ�������������,ߺ��
������,��Ϊ�Ǿ���,�ΰ��ܺ�,����������ͦ��.�˵��򱱹�,����������
������,�Ժȴ���������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/taishan/npc/seng-ren.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"edajie",
  "north" : __DIR__"wangfujing",
]));

	setup();
	replace_program(ROOM);
}
